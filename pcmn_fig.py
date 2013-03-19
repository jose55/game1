import matplotlib.pyplot as py
import numpy as np
import matplotlib as plt


c1=py.Circle((0.5,0.5),0.4,color='y')
fig=py.gcf()
fig.gca().add_artist(c1)
fig.gca().axes.set_axis_off()
fig.set_size_inches(1.0/5.0,1.0/5.0)
py.savefig('pacman_images/pc1.png')
