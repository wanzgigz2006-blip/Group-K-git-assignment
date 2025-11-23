# Writing to a file
with open("example.txt", "w") as file:
    file.write("Hello, welcome to file handling in Python!\n")
        file.write("This is the second line.")

        # Reading from the same file
        with open("example.txt", "r") as file:
            content = file.read()
                print("File Content:")
                    print(content)