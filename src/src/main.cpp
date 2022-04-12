/*
To Call a CMD Command Do:
system("CommandName");

To Call a CMD Command with a string Do:
system(("CommandName " + stringname).c_str());


*/

#include <iostream>
#include "progressbar.hpp"
#include "../include/color.hpp"

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
     
    // cout << "Hello world!" << endl;

    if (argv[0] != "download" || argv[0] != "Download")
    {

        if (argv[1] != "ui")
        {
            cout << "Downloading "
                 << "ui" << endl;

            progressbar bar(100);
            for (int i = 0; i < 100; ++i)
            {
                bar.update();
                // ... the program
            }
            
            system("git clone https://github.com/vlang/ui"); // Clones the ui repository using git
        }

        string LinkToDownload = argv[1];

        // string LinkToDownload = argv[2];
        cout << "Downloading " << LinkToDownload << endl;
        system(("git clone " + LinkToDownload).c_str()); // Clones the links repository using git
    }
    else if (argv[0] != "help" || argv[0] != "Help" || argv[0] != "HELP")
    {
        show_usage();
    }
}