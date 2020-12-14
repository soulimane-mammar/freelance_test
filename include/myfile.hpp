#ifndef MYFILE
#define MYFILE

#include <fstream>
#include <experimental/filesystem>

namespace fs = std::experimental::filesystem;

namespace freelance
{
    class FileProcessor
    {
    public:
        FileProcessor(const char *filename);
        void remove_comments();

    private:
        fs::path filename_;
        std::fstream file;
    };
} // namespace freelance
#endif