import socket

s = socket.socket(socket.AF_BLUETOOTH, socket.SOCK_STREAM, socket.BTPROTO_RFCOMM)
host_address = '' #Fill in host address here
s.bind((host_address,1))

s.listen(1)
try:
    client, address = s.accept()
    while 1:
        data = client.recv(1024)
        if data:
            print(data)
            client.send(bytes('Bananas','UTF-8'))
except:
    print("Closing socket")
    client.close()
    s.close()
