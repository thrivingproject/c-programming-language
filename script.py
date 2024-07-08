# This script accepts a excerise number (eg. 1-8) and creates a directory with the name of the excerise number and a C file named main.c

import os
import sys

def create_dir_and_file(excerise_number):
    # Create directory
    os.mkdir(excerise_number)
    # Create file
    with open(f"{excerise_number}/main.c", "w") as f:
        f.write("// Write a program to ...\n#include <stdio.h>\n\nint main()\n{\n\n    return 0;\n}")

if __name__ == "__main__":
    try:
        excerise_number = sys.argv[1]
    except IndexError:
        print("Please provide a excerise number")
        sys.exit(1)
    create_dir_and_file(excerise_number)