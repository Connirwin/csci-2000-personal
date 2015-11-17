
# coding: utf-8

# In[4]:

#def tdata(city):
#   '''pull data from .dat temperature files and assign to temporary variables'''
#    temp = city + '_temperature_2012.dat'
#    reader = open(temp, 'r')
#    city_t = reader.read() #each data point is added to a new line
#    reader.close()
#    print city_t


# In[ ]:

mon_t = []
reader = open('montreal_temperature_2012.dat', 'r')
line = reader.readline()
while line != '':
    mon_t.append(reader.readline())
reader.close()
print mon_t


# In[ ]:



