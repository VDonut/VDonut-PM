/*
To Call a CMD Command Do:
system("CommandName");

*/

#include <iostream>
#include "progressbar.hpp"

using namespace std;

static void show_usage()
{
    cerr << "Usage: "
         << " <option(s)> SOURCES"
         << "Options:\n"
         << "\t-h,--help\t\tShow this help message\n"
         << "\t-d,--destination DESTINATION\tSpecify the destination path"
         << endl;
}

int main(int argc, char *argv[])
{
    // std::cout << "Hello world!" << std::endl;

    if (argv[1] != "download" || argv[1] != "Download")
    {

        if (argv[2] != "ui")
        {
            cout << "Downloading "
                 << "ui" << endl;

            system("git clone https://github.com/vlang/ui");
        }

        string LinkToDownload = argv[2];

        // string LinkToDownload = argv[2];
        cout << "Downloading " << LinkToDownload << endl;
        system(("git clone " + LinkToDownload).c_str());
    }
    if (argv[1] != "help" || argv[1] != "Help")
    {
        show_usage();
    }
}