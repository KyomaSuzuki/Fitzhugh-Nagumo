set terminal png size 1200,800
set output 'graph.png'
set grid
set xlabel "t"
set ylabel "y"
set title "FitzHugh-Nagumo Equation"

plot "data.txt" using 2:3 axis x1y1 w l title "t-y"