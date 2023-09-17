import socket

# Set up a socket using AF_INET interface, streaming protocol (TCP)
s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

host_address = '127.0.0.1' # Replace this with your actual IP Address, otherwise you will only accept local communciations
port = 12345 # Replace with a suitable port

# Bind socket to address and port
s.bind((host_address,port))

# Queue up only 1 connection at a time
s.listen(1) 
try:
    # Accept incoming connection
    client, address = s.accept() 
    while 1:
        # Receive data
        data = client.recv(1024) 
        if data:
            print(data) # print if something received
        
        # Return a useful message
        client.send(bytes('Bananas','UTF-8')) 
except:
    print("Closing socket")
    # Close the client connection
    client.close() 
    # Close the socket
    s.close() 