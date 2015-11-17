
# coding: utf-8

# In[43]:

import numpy as np
import math
def approx(func, n):
    '''approximate Pi by calling the rho, tao, or mu functions over n values (func, n)'''
    if func == rho:
        func_1 = 'rho_n'
    elif func == tao:
        func_1 = 'tao_n'
    elif func == mu:
        func_1 = 'mu_n'
    else:
        print "That function is undefined"
    print 'When n = ' + '%7s' % (str(n,)) + ', ' + func_1 + ' = ' + str(func(n))


# In[44]:

def rho(n):
    '''Approximate Pi using the rho function over n values'''
    rho_n = []
    for k in range(1,n+1):
        rho_n.append(float((-1.0)**(k+1))/(2*k-1))
    rho_sum = sum(float(i) for i in rho_n)
    rho_approx = 4*rho_sum
    return rho_approx


# In[45]:

def tao(n):
    '''Approximate Pi using the tao function over n values'''
    tao_n = []
    for k in range (1,n+1):
        tao_n.append((1/k**2.0))
    tao_sum = math.fsum(tao_n)
    tao_approx = (6*tao_sum)**0.5
    return tao_approx


# In[38]:

def mu(n):
    '''Approximate Pi using the mu function over n values'''
    mu_n = []
    for k in range (1,n+1):
        mu_n.append(1/(k**4.0))
    mu_sum = math.fsum(mu_n)
    mu_approx = (90*mu_sum)**0.25
    return mu_approx

