# code_report Solution
# 

read line
a=(${line//\s/})
l=${a[0]}
r=${a[1]}
for i in $(seq $l 2 $r); do
    echo $i $(( $i + 1 ))
done
