
for n in range(1, 101):
	line = ""
	if n%3==0:
		line += "Fizz"
	if n%5==0:
		line += "Buzz"
	
	if line:
		print line
	else:
		print n
