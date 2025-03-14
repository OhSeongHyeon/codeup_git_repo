print("=== codeup python 6091 ===")
"""
최소공배수 문제
"""
# a, b, c = [int(i) for i in input().split()]
# d = 1 #day
# while d%a != 0 or d%b != 0 or d%c != 0:
#     d += 1
# print(d)

print("=== codeup python 6092 ===")
# n = int(input())
# g_iCallList = [int(i) for i in input().split()]
# dLen = 24
# d = [0] * dLen
# sb = []
# for i in range(n):
#     d[g_iCallList[i]] += 1
# for i in range(1, dLen):
#     sb.append(str(d[i]))
#     sb.append(" " if i < dLen-1 else "")
# print("".join(sb))

print("=== codeup python 6093 ===")
# n = int(input())
# g_sCallList = [i for i in input().split()]
# g_sCallList.reverse()
# for i in range(n):
#     print(g_sCallList[i], end = " " if i < n-1 else "\n")

print("=== codeup python 6094 ===")
''' 리스트 한번에 보기
print(*list)
'''
# input()
# list = [int(i) for i in input().split()]
# list.sort()
# print(list[0])

print("=== codeup python 6095 ===")
# d = [([0]*19) for row in range(19)] # d = [[0]*19]*19 얕은 복사 이슈
# for i in range(int(input())):
#     a, b = [int(sp) for sp in input().split()]
#     d[a-1][b-1] = 1
# for i in range(19):
#     for j in range(19):
#         print(d[i][j], end = " " if j < 18 else "\n")

print("=== codeup python 6096 ===")
# board = []
# bLen = 19
# for i in range(bLen):
#     board.append([int(a) for a in input().split()])
# for i in range(int(input())):
#     a, b = [int(sp) for sp in input().split()]
#     for j in range(bLen):
#         board[a-1][j] ^= 1
#         board[j][b-1] ^= 1
# for i in range(bLen):
#     for j in range(bLen):
#         print(board[i][j], end = " " if j < bLen-1 else "\n")

print("=== codeup python 6097 ===")
# h, w = [int(i) for i in input().split()]
# board = [[0 for width in range(w)] for height in range(h)]
# for i in range(int(input())):
#     l, d, x, y = [int(i) for i in input().split()]
#     for j in range(l):
#         if board[x-1][y-1] == 1:
#             continue
#         board[x-1][y-1] = 1
#         if d == 0:
#             y += 1
#         else:
#             x += 1
# for row in range(h):
#     for col in range(w):
#         print(board[row][col], end = " " if col < w-1 else "\n")

print("=== codeup python 6098 ===")
"""
size = 10
board = []
column = [1 if col==0 or col==size-1 else 0 for col in range(size)]
for row in range(size):
    if row==0 or row==size-1:
        board.append([1 for col in range(size)])
    else:
        board.append(column)
for row in range(size):
    for col in range(size):
        print(board[row][col], end = " " if col < size-1 else "\n")
# 1 1 1 1 1 1 1 1 1 1
# 1 0 0 0 0 0 0 0 0 1
# 1 0 0 0 0 0 0 0 0 1
# 1 0 0 0 0 0 0 0 0 1
# 1 0 0 0 0 0 0 0 0 1
# 1 0 0 0 0 0 0 0 0 1
# 1 0 0 0 0 0 0 0 0 1
# 1 0 0 0 0 0 0 0 0 1
# 1 0 0 0 0 0 0 0 0 1
# 1 1 1 1 1 1 1 1 1 1
print()
print(*column) # 1 0 0 0 0 0 0 0 0 1
"""
size = 10
x = y = 1
board = []
for i in range(size):
    board.append([int(a) for a in input().split()])
while x < size-1 and y < size-1:
    board[x][y] = 9
    if board[x][y] == 2:
        break
    if board[x][y+1] == 0:
        y += 1
    elif board[x+1][y] == 0:
        x += 1
    else:
        break
for row in range(size):
    for col in range(size):
        print(board[row][col], end = " " if col < size-1 else "\n")
    