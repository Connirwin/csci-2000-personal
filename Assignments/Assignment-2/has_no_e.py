def has_no_e(str):
    if "e" in str:
        return False
    else:
        return True

filereader = open("gadsby.txt", 'r')

for line in filereader:
    has_no_e(line)
    


