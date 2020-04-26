def last_digit(n1, n2):
    if(n2==0):
        return 1
    if(n2==1):
        return n1%10
    if(n1==0):
        return 0
    if(n1==1):
        return 1
    _n1=n1%10
    _n2=n2%100
    if(_n2%4!=0):
        res = _n1**(_n2%4)
    else:
        res = _n1**4
    return res%10
