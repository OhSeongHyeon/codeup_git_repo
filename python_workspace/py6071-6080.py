print("=== codeup python 6071 ===")
# while True:
#     n = int(input())
#     if n != 0: print(n)
#     else: break
        
print("=== codeup python 6072 ===")
# n = int(input())
# while True > 0:
#     if n != 0:
#         print(n)
#         n -= 1
#     else:
#         break

print("=== codeup python 6073 ===")
# n = int(input())
# while True:
#     n -= 1
#     if n >= 0:
#         print(n)
#     else:
#         break

print("=== codeup python 6074 ===")
# c = ord(input())
# a = ord('a')
# sb = []
# while a <= c:
#     sb.append(chr(a))
#     if a < c: sb.append(' ')
#     a += 1
# print("".join(sb))

print("=== codeup python 6075 ===")
# n = int(input())
# for i in range(n+1): print(i)

print("=== codeup python 6076 ===")
# n = int(input())
# for i in range(n+1): print(i)

print("=== codeup python 6077 ===")
# n = int(input())
# s = 0
# for i in range(1, n+1) :
#     if (i%2 == 0): s += i
# print(s)

print("=== codeup python 6078 ===")
# while True:
#     c = input()
#     print(c)
#     if c == 'q': break

print("=== codeup python 6079 ===")
# n = int(input())
# add = 1
# sum = 0
# while True:
#     if sum >= n:
#         add -= 1
#         break
#     else:
#         sum += add
#         add += 1
# print(add)

print("=== codeup python 6080 ===")
iDiceArr = [int(i) for i in input().split()]
for i in range(1, iDiceArr[0] + 1):
    for j in range(1, iDiceArr[1] + 1):
        print("%s %s" % (i, j))
