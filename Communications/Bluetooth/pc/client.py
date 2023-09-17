import socket

s = socket.socket(socket.AF_BLUETOOTH, socket.SOCK_STREAM, socket.BTPROTO_RFCOMM)
host_address = '' #Fill in host address here
s.connect((host_address,1))
while(1):
	text = input()
	if text == 'quit':
		break
	s.send(bytes(text,'UTF-8'))
	data = s.recv(1024)
	print ('I received', data)

s.close()
