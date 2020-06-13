using System;
using System.Collections.Generic;
using System.Linq;
using System.Net;

using System.Net.Sockets;
using System.Threading;
using System.Threading.Tasks;

/// <summary>

/// This is a simple TCP and UDP based client.

/// </summary>

namespace Trace {

  internal class BinaryWalker {
    public int Cursor { get; set; }
    public int Size { get { return buffer.Count; } }

    public List<byte> Buffer {
      get { return buffer; }
      set { buffer = value; read = false; }
    }

    public int AvailableBytes {
      get { return buffer.Count - Cursor; }
    }

    private List<byte> buffer;
    private byte[] bufferArray;
    private bool read;

    public BinaryWalker() {
      Cursor = 0;
      buffer = new List<byte>();
      read = false;
      bufferArray = null;
    }

    private void updateAccess(bool read) {
      if (read == this.read)
        return;

      if (read)
        bufferArray = buffer.ToArray();
      else
        buffer = new List<byte>(bufferArray);

      this.read = !this.read;
    }

    private void InsertBytes(byte[] bytes) {
      updateAccess(false);
      buffer.InsertRange(Cursor, bytes);
      Cursor += bytes.Length;
    }

    public void Put(string str) {
      var bytes = System.Text.Encoding.ASCII.GetBytes(str);
      Put(bytes.Length);
      InsertBytes(bytes);
    }
    public void Put(byte num) {
      updateAccess(false);
      buffer.Insert(Cursor, num);
      ++Cursor;
    }

    public void Put(int num) {
      InsertBytes(BitConverter.GetBytes(num));
    }

    public void Put(float num) {
      InsertBytes(BitConverter.GetBytes(num));
    }

    public string ReadString() {
      var size = ReadInt();
      var str = System.Text.Encoding.ASCII.GetString(bufferArray, Cursor, size);
      return str;
    }

    public byte ReadByte() {
      updateAccess(true);
      var value = bufferArray[Cursor];
      ++Cursor;
      return value;
    }

    public int ReadInt() {
      updateAccess(true);
      var value = BitConverter.ToInt32(bufferArray, Cursor);
      Cursor += 4;
      return value;
    }

    public float ReadFloat() {
      updateAccess(true);
      var value = BitConverter.ToSingle(bufferArray, Cursor);
      Cursor += 4;
      return value;
    }
  }

  public delegate void HandleMessage(string message);

  internal class NetClient {
    enum State {
      Idle,
      Connecting,
      Connected
    }

    public HandleMessage MessageHandler;

    public string Identifier { get; set; }
    string remote = "localhost";
    int port = 27015;

    State state;

    IPHostEntry entry;
    int currentAddress;

    IPEndPoint destination;
    Socket socket;
    Task connectTask;

    Task<int> sendTask;
    
    Task<int> recieveTask;
    byte[] recieveBuffer;

    List<byte[]> outbound;

    Mutex sendMutex;

    public NetClient() {
      entry = null;
      connectTask = null;
      //recieveTask = null;
      sendTask = null;
      recieveBuffer = new byte[4096];
      state = State.Idle;

      outbound = new List<byte[]>();
      //inbound = new List<byte[]>();

      sendMutex = new Mutex();
    }

    public bool IsIdle() {
      return state == State.Idle;
    }

    public void Send(byte[] data) {
      var length = BitConverter.GetBytes(data.Length);
      byte[] array = new byte[length.Length + data.Length];
      length.CopyTo(array, 0);
      data.CopyTo(array, length.Length);
      sendMutex.WaitOne();
      outbound.Add(array);
      sendMutex.ReleaseMutex();
    }

    public void Poll() {
      switch (state) {
        case State.Connecting:
          if (connectTask == null || connectTask.IsCanceled || connectTask.IsFaulted) {
            ++currentAddress;
            if (currentAddress < entry.AddressList.Length) {
              if (!tryAddress())
                connectTask = null;
            }
            else
              state = State.Idle;
          }
          else if (connectTask.IsCompleted) {
            state = (socket != null) && (destination != null) ? State.Connected : State.Idle;
            if (state == State.Connected) {
              connectTask = null;
              BinaryWalker walker = new BinaryWalker();
              walker.Put((byte)0xFA);
              walker.Put(Identifier);
              sendMutex.WaitOne();
              Send(walker.Buffer.ToArray());
              sendMutex.ReleaseMutex();
              Console.WriteLine("Client: Connected");
            }
            else {
              Console.WriteLine("Client: Connection failed");
            }
          }
          break;
        case State.Connected:
          if (sendTask != null) {
            if (sendTask.IsFaulted || sendTask.IsCanceled) {
              Console.WriteLine("Client: Error occurred while sending data.");
              Close();
              Connect();
            }
            else if (sendTask.IsCompleted) {
              sendTask = null;
              outbound.RemoveAt(0);
            }
          }
          else {
            sendMutex.WaitOne();
            sendPackets(outbound);
            sendMutex.ReleaseMutex();
          }

          if (recieveTask == null) {
            try {
              recieveTask = socket.ReceiveAsync(new ArraySegment<byte>(recieveBuffer), SocketFlags.None);
            }
            catch (SocketException err) {
              Console.WriteLine("Client: Error occurred while sending or receiving data.");
              Console.WriteLine("   Error: {0}", err.Message);
            }
          }
          else if (recieveTask.IsFaulted || recieveTask.IsCanceled) {
            Close();
            Connect();
          }
          else if (recieveTask.IsCompleted) {
            var offset = 0;
            var count = recieveTask.Result;
            BinaryWalker walker = new BinaryWalker();
            walker.Buffer = new ArraySegment<byte>(recieveBuffer, 0, count).ToList();
            while (count >= offset + 4) {
              var size = walker.ReadInt();
              if (walker.AvailableBytes >= size) {
                walker.Cursor = offset;
                MessageHandler(walker.ReadString());
              }

              offset = walker.Cursor;
            }

            recieveTask = null;
          }

          break;
        default:
          break;
      }
    }

    private void sendPackets(List<byte[]> packets) {
      if (packets.Count < 1)
        return;

      var front = packets[0];
      try {
        sendTask = socket.SendAsync(new ArraySegment<byte>(front), SocketFlags.None);
      }
      catch (SocketException err) {
        Console.WriteLine("Client: Error occurred while sending data.");
        Console.WriteLine("   Error: {0}", err.Message);
      }
    }

    private bool tryAddress() {
      var address = entry.AddressList[currentAddress];
      socket = new Socket(
        address.AddressFamily,
        SocketType.Stream,
        ProtocolType.Tcp
      );

      try {
        destination = new IPEndPoint(address, port);
        connectTask = socket.ConnectAsync(destination);
      }
      catch (SocketException) {
        Close();
        return false;
      }

      return true;
    }

    public void Connect() {
      try {
        state = State.Connecting;
        entry = Dns.GetHostEntry(remote);
        Console.WriteLine("Client: Resolved host entries");
        currentAddress = -1;
        Poll();
      }
      catch (SocketException err) {
        Console.WriteLine("Client: Socket error occurred: {0}", err.Message);
        state = State.Idle;
      }
    }

    public void Close() {
      if (socket != null) {
        if (socket.Connected)
          socket.Shutdown(SocketShutdown.Both);

        socket.Close();
        socket = null;
      }

      connectTask = null;
      recieveTask = null;
      sendTask = null;
      state = State.Idle;
    }
  }
}
