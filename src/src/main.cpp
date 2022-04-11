/*
To Call a CMD Command Do:
system("CommandName");

*/

#include <iostream>

using namespace std;

static void show_usage(std::string name)
{
    std::cerr << "Usage: "
              << " <option(s)> SOURCES"
              << "Options:\n"
              << "\t-h,--help\t\tShow this help message\n"
              << "\t-d,--destination DESTINATION\tSpecify the destination path"
              << std::endl;
}

int main(int argc, char *argv[])
{
    // std::cout << "Hello world!" << std::endl;

    if (argv[1] != "download")
    {
        string LinkToDownload = argv[2];

        // string LinkToDownload = argv[2];
        cout << "Downloading " << LinkToDownload << std::endl;
        system(("git clone " + LinkToDownload).c_str());
    }
}