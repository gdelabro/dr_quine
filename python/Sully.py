quine="quine=%c%s%c%cimport sys,os%cn=%d%cname=%cSully_x.py%c%cif %cSully.py%c not in sys.argv[0]:%c	n-=1%cname=name.replace(%cx%c, str(n))%cif n == -1:%c	sys.exit(0)%cf=open(name, %cw+%c)%cf.write(quine%c(0x22,quine,0x22,0x0a,0x0a,n,0x0a,0x22,0x22,0x0a,0x22,0x22,0x0a,0x0a,0x22,0x22,0x0a,0x0a,0x0a,0x22,0x22,0x0a,0x25,0x0a,0x0a,0x22,0x22,0x0a))%cf.close()%cos.system(%cpython3 %c+name)%c"
import sys,os
n=5
name="Sully_x.py"
if "Sully.py" not in sys.argv[0]:
	n-=1
name=name.replace("x", str(n))
if n == -1:
	sys.exit(0)
f=open(name, "w+")
f.write(quine%(0x22,quine,0x22,0x0a,0x0a,n,0x0a,0x22,0x22,0x0a,0x22,0x22,0x0a,0x0a,0x22,0x22,0x0a,0x0a,0x0a,0x22,0x22,0x0a,0x25,0x0a,0x0a,0x22,0x22,0x0a))
f.close()
os.system("python3 "+name)
