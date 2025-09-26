print(chr(0xfeff).__repr__())

for i in range(0x0000, 0x007f + 1): 
	print(chr(i).__repr__(), end='\t')

import unicodedata

for code in range(0x007F+1):
    char = chr(code)
    try:
        name = unicodedata.name(char)
    except ValueError:
        name = " unidentified"
    print(f"U+{code:04X} {char} {name}")


import matplotlib.pyplot as plt
import numpy as np

def draw_inscribed_pentagon(radius):
    # 计算五个顶点的角度
    angles = np.linspace(0, 2 * np.pi, 6)[:-1]  # 5个顶点，最后一个是闭合
    x = radius * np.cos(angles)
    y = radius * np.sin(angles)
    # 绘制五边形
    plt.figure()
    plt.plot(x, y, marker='o')
    plt.fill(x, y, alpha=0.3)  # 填充颜色
    plt.xlim(-radius-1, radius+1)
    plt.ylim(-radius-1, radius+1)
    plt.gca().set_aspect('equal', adjustable='box')
    plt.title('Inscribed Pentagon')
    plt.grid()
    plt.show()
# 示例使用
draw_inscribed_pentagon(10)  # 半径为 5 的内接五边形

