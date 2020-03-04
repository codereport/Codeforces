-- code_report
-- Problem Link: https://codeforces.com/problemset/problem/1138/A

solve :: [Int] -> Int
solve = (*2)
      . maximum 
      . mapAdjacent min 
      . map length 
      . group
      
