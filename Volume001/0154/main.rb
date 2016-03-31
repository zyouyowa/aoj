
while true
	m = gets.strip.to_i
	if m == 0 then
		break
	end
	a = Array.new(m,0)
	b = Array.new(m,0)
	for i in 0..(m-1) do
		a[i], b[i] = gets.split.map{|v| v.to_i}
	end
	g = gets.strip.to_i
	ns = Array.new(g,0)
	nmax = 0
	for i in 0..(g-1) do
		ns[i] = gets.strip.to_i
		if ns[i] > nmax then
			nmax = ns[i]
		end
	end
	c = Array.new(nmax+1, 0)
	c[0] = 1
	for i in 0..(m-1) do
		j = nmax
		while j >= 0
			if c[j] == 0 then
				j -= 1
				next
			end
			k = 1
			while k <= b[i] && (j + a[i] * k) <= nmax
				c[j + a[i] * k] += c[j]
				k += 1
			end
			j -= 1
		end
	end
	for i in ns do
		puts c[i]
	end
end