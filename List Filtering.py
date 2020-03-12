def filter_list(l):
    lst=[]
    for i in l:
        if type(i)==int:
            lst.append(i)
    return lst
