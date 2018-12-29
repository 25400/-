# 1193是个素数，对它进行循环移位后发现 1931，9311，3119 也是素数
# 找出类似的循环素数

# 判断一个数是不是素数
def f(m):
	for i in range(2,m//2):
		if m%i==0:
			return False
	return True
# 按规则对m进行循环操作
def f1(m):
	b = []
	a = f2(m,5)
	for i in range(len(a)-1):
		a = f2(m,5)
		n = a[1]*(10**4)+a[2]*(10**3)+a[3]*(10**2)+a[4]*10+a[0]
		b.append(n)
		m = n
	return b
# 返回一个大数中的所有数字
def f2(m,n):
	a = []
	for i in range(1,n+1):
		b = 10**(n-i)
		c = m//b
		m = m%b
		a.append(c)
	return a

# 主程序
for i in range(99999,10000,-1):
	if f(i):
		a = f1(i)
		if f(a[0]) and f(a[1]) and f(a[2]) and f(a[3]):
			print(i)
'''
运行结果
99371
93911
93719
91193
71993
39119
37199
19937
19391
11939			
'''
print(f(13))
print(f1(12345))
