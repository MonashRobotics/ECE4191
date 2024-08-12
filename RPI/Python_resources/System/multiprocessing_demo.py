import multiprocessing
from multiprocessing import Process, Value

print("Number of cpu : ", multiprocessing.cpu_count())

def rotation_counter(count):
    while(True):
        count.value+=1
        count.value = count.value%100

def printer(count):
    while(True):
        print('\rCount:',count.value)
    

if __name__ == "__main__":

    counter = Value('i',0)

    proc1 = Process(target=rotation_counter,args=(counter,))
    proc2 = Process(target=printer, args=(counter,))

    proc1.start() #Start the process
    proc2.start()

    proc1.join()  #Wait for the process to stop
    proc2.join()  #Wait for the process to stop
