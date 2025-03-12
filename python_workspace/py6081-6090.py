print("=== codeup python 6081 ===")
# inp = input()
# for i in range(1, 16):
#     print("%s*%X=%X" % (inp, i, int(9+ord(inp)-ord('A')+1)*i))

# n = int(input(), 16)
# for i in range(1, 16): print("%X*%X=%X" % (n, i, n*i))

print("=== codeup python 6082 ===")
# n = int(input())
# for i in range(1, n+1):
#     if i%10==3 or i%10==6 or i%10==9: print("X", end = " ")
#     else: print(i, end = " " if i<n else "\n")

print("=== codeup python 6083 ===")
# sp = input().split()
# r = int(sp[0])
# g = int(sp[1])
# b = int(sp[2])
# cnt = 0
# for i_r in range(0, r):
#     for i_g in range(0, g):
#         for i_b in range(0, b):
#             print("%d %d %d" % (i_r, i_g, i_b))
#             cnt += 1
# print(cnt)

print("=== codeup python 6084 ===")
# h, b, c, s = [float(i) for i in input().split()]
# print("%.1f MB" % ((h*b*c*s/8)/(1<<10)/(1<<10)))

print("=== codeup python 6085 ===")
# w, h, b = [float(i) for i in input().split()]
# print("%.2f MB" % (round(w*h*b/(1<<3)/(1<<10)/(1<<10), 2)))

print("=== codeup python 6086 ===")
# n = int(input())
# res = 0
# add = 1
# while True:
#     if res < n: 
#         res += add
#         add += 1
#     else:
#         break
# print(res)

print("=== codeup python 6087 ===")
# n = int(input())
# for i in range(1, n+1):
#     if i%3 == 0: continue
#     print(i, end = " " if i<n else "\n")

print("=== codeup python 6088 ===")
# a, d, n = [int(i) for i in input().split()]
# while True:
#     n -= 1
#     if n <= 0: break
#     a += d
# print(a)

print("=== codeup python 6089 ===")
# a, r, n = [int(i) for i in input().split()]
# while True:
#     n -= 1
#     if n <= 0: break
#     a *= r
# print(a)

print("=== codeup python 6090 ===")
a, m, d, n = [int(i) for i in input().split()]
while True:
    n -= 1
    if n <= 0: break
    a = a * m + d
print(a)
