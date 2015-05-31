int strlen (char *u)
{
	int m = 0;
	while (u[m]!=0) m++
	return m;
}

#m->$t0

strlen: add		$t0,$zero,$zero		#m=0
RO:		add		$t1,$t0,$a0			#&u[m]
		lb		$t1,$0($t1)			#u[m]
		beq		$t1,$zero,Exjt		#==
		addi 	$t0,$t0,1			#m++
		j		R0
Exjt:	add 	$v0,$t0,$zero
		jr		$ra
	


Functions Need to Implement
add
sub
beq
lw
sw
j


R type:
	add		rd, rs, rt	100000	
	addu	rd, rs, rt	100001 
	jr		rs			001000 
	nor		rd, rs, rt	100111 
	or		rd, rs, rt	100101 
	slt		rd, rs, rt	101010 
	sub		rd, rs, rt	100010 
	subu	rd, rs, rt	100011 
	syscall				001100 
	xor		rd, rs, rt	100110 

	 0 ~ 5		000000
	 6 ~ 10 	rs
	11 ~ 15		rt
	16 ~ 20 	rd
	21 ~ 25 	shamnt
	26 ~ 31		Func

I type:
	beq		rs, rt, label		000100
	lw		rt, immediate(rs)	100011
	sw		rt, immediate(rs)	101011

	 0 ~ 5		OP6
	 6 ~ 10 	rs
	11 ~ 15		rt
	16 ~ 31 	immediate