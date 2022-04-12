import os
import importlib.util
import subprocess
from colorama import Fore, Back, Style
from tqdm import tqdm
from time import sleep
import sys

def command_exists(commandtorun):
    try:
        fnull = open(os.devnull, 'w')
        subprocess.call([commandtorun], stdout=fnull, stderr=subprocess.STDOUT)
        return True
    except OSError:
        return False 


def progressbar(packagename, timetosleep):

   for i in tqdm(range(0, 100), desc ="Checking For: " + packagename):
    sleep(timetosleep)




def main():
   
   package_name = 'tqdm'

   for i in tqdm(range(0, 100), desc ="Checking For: " + package_name):
    sleep(.001)

   spec = importlib.util.find_spec(package_name)
   if spec is None:
    print(package_name +" is not installed" + Fore.RED + "no")
    print(Style.RESET_ALL)
   else:
    print(package_name +" is installed: " + Fore.GREEN + "yes")
    print(Style.RESET_ALL)

    # Check if the user has ruby
    rubycheck = command_exists("ruby -v")
    progressbar("ruby", .001)
    if rubycheck != False:
        print(Fore.RED + "No Ruby")
        print(Style.RESET_ALL)
    elif rubycheck != True:
        print(Fore.GREEN + "Ruby is found")
        print(Style.RESET_ALL)

    # Check if the user has make
    makecheck = command_exists("make -v")
    progressbar("make", .001)
    if makecheck != False:
        print(Fore.RED + "No make")
        print(Style.RESET_ALL)
    elif makecheck != True:
        print(Fore.GREEN + "make is found")
        print(Style.RESET_ALL)

    # Check if the user has G++
    Gcheck = command_exists("G++ -v")
    progressbar("G++", .001)
    if Gcheck != False:
        print(Fore.RED + "No G++")
        print(Style.RESET_ALL)
    elif Gcheck != True:
        print(Fore.GREEN + "G++ is found")
        print(Style.RESET_ALL)

    return

main()