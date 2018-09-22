# code_report Solution
# https://youtu.be/vcF8mTjgt6o

read line
a=(${line//\s/})
l=${a[0]}
r=${a[1]}
for i in $(seq $l 2 $r); do
    echo $i $(( $i + 1 ))
done
