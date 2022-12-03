with open('input.txt', 'r') as file:
    commonChars = list()
    sum = 0
    sum2 = 0
    list1 = ""
    list2 = ""
    list3 = ""
    cpt = 3
    for line in file:
        # Part 1
        mid = len(line) // 2
        bag1, bag2 = line[:mid], line[mid:]
        commonObjs = set(bag1).intersection(set(bag2))
        for c in commonObjs:
          if c.isupper():
            sum += 26
            c = c.lower()
          sum += ord(c)-96
        # Part 2
        if (cpt % 3 == 0):
            list1 = line.replace('\n', '')
            cpt += 1
        elif (cpt % 3 == 1):
            list2 = line.replace('\n', '')
            cpt += 1
        else:
            list3 = line.replace('\n', '')
            commonBadges = set(list1).intersection(set(list2)).intersection(set(list3))
            for badge in commonBadges:
                if badge.isupper():
                    sum2 += 26
                    badge = badge.lower()
                sum2 += ord(badge)-96
            list1 = ""
            list2 = ""
            list3 = ""
            cpt = 3
    print("Sum 1 : {}".format(sum))
    print("Sum 2 : {}".format(sum2))


