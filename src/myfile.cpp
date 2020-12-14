#include <myfile.hpp>
#include <stdexcept>
#include <string>
#include <regex>
#include <iostream>
#include <iterator>

namespace freelance
{
    FileProcessor::FileProcessor(const char *filename) : filename_{filename}
    {
        if (!fs::exists(filename_))
        {
            std::stringstream message;
            message << "No shuch file: " << filename_;
            throw std::runtime_error(message.str());
        };
    };

    void FileProcessor::remove_comments()
    {
        // The assumption here is that the file is ASCII encoded

        std::regex comment{"/\\*[\\s\\S]*?\\*/|//[^\n\r]+|/\\*(.*?)\\*/"};

        std::ostringstream text;
        std::ostringstream text_without_comments;

        std::ifstream in_file(filename_);

        text << in_file.rdbuf();
        std::string text_str = text.str();

        std::ofstream out_file(filename_);
        out_file << std::regex_replace(text_str, comment, "");

        in_file.close();
    }
} // namespace freelance
