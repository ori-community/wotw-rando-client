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

    public bool TryReadString(out string value) {
      updateAccess(true);
      value = "";

      var output = TryReadInt(out var size);
      if (output) {
        if (size <= Size - Cursor)
          value = System.Text.Encoding.ASCII.GetString(bufferArray, Cursor, size);
        else
          output = false;
      }

      return output;
    }

    public bool TryReadByte(out byte value) {
      updateAccess(true);
      value = 0;

      var output = sizeof(byte) <= Size - Cursor;
      if (output) {
        value = bufferArray[Cursor];
        Cursor += sizeof(byte);
      }

      return output;
    }

    public bool TryReadInt(out int value) {
      updateAccess(true);
      value = 0;

      var output = sizeof(int) <= Size - Cursor;
      if (output) {
        value = BitConverter.ToInt32(bufferArray, Cursor);
        Cursor += sizeof(int);
      }

      return output;
    }

    public bool TryReadFloat(out float value) {
      updateAccess(true);
      value = 0;

      var output = sizeof(float) <= Size - Cursor;
      if (output) {
        value = BitConverter.ToSingle(bufferArray, Cursor);
        Cursor += sizeof(float);
      }

      return output;
    }
  }

  public delegate void HandleMessage(string message);

  internal class NetClient : IDisposable {
    public enum State {
      Idle,
      Connecting,
      Connected
    }

    // Mirrors enum defined in WinNetwork project.
    public enum PackageType : byte {
      Ping = 0x01,
      Message = 0x02,
      Identifier = 0x0A,
      TraceMessage = 0x10,
      ConfigPing = 0xF0,
    }

    readonly TimeSpan PING_INTERVAL = TimeSpan.FromMilliseconds(45);
    readonly TimeSpan PING_WAIT_TIME = TimeSpan.FromMilliseconds(3000);

    public HandleMessage MessageHandler;

    public string Identifier { get; set; }
    string remote = "localhost";
    int port = 27666;

    State state;

    IPHostEntry entry;
    int currentAddress;

    IPEndPoint destination;
    Socket socket;
    Task connectTask;

    bool pingEnabled;
    DateTime lastReceivedPing;
    DateTime lastSentPing;
    Task<int> sendTask;
    
    Task<int> recieveTask;
    byte[] recieveBuffer;

    List<byte[]> outbound;

    Mutex sendMutex;

    public NetClient() {
      entry = null;
      connectTask = null;
      recieveTask = null;
      sendTask = null;
      recieveBuffer = new byte[4096];
      state = State.Idle;

      outbound = new List<byte[]>();

      sendMutex = new Mutex();
    }

    ~NetClient() {
      Dispose();
    }

    public void Dispose() {
      Close();
      sendMutex.Close();
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
              walker.Put((byte)PackageType.Identifier);
              walker.Put(Identifier);
              sendMutex.WaitOne();
              Send(walker.Buffer.ToArray());
              sendMutex.ReleaseMutex();
              pingEnabled = true;
              lastReceivedPing = DateTime.Now;
              lastSentPing = DateTime.Now;
              Console.WriteLine("Client: Connected");
            }
            else
              Console.WriteLine("Client: Connection failed");
          }
          break;
        case State.Connected:
          if (pingEnabled) {
            var time = DateTime.Now;
            if (time - lastSentPing > PING_INTERVAL) {
              lastSentPing = time;
              byte[] packet = new byte[5];
              Buffer.BlockCopy(BitConverter.GetBytes(1), 0, packet, 0, 4);
              packet[4] = (byte)PackageType.Ping;
              Send(packet);
            }
          }

          if (sendTask != null) {
            if (sendTask.IsFaulted || sendTask.IsCanceled) {
              Console.WriteLine("Client: Error occurred while sending data.");
              // We are going to retry this send.
              sendTask = null;
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
          else if (recieveTask.IsFaulted || recieveTask.IsCanceled)
            recieveTask = null;
          else if (recieveTask.IsCompleted) {
            var count = recieveTask.Result;
            BinaryWalker walker = new BinaryWalker();
            walker.Cursor = 0;
            walker.Buffer = new ArraySegment<byte>(recieveBuffer, 0, count).ToList();
            while (walker.TryReadInt(out var size)) {
              if (walker.Cursor + size > walker.Size)
                break;

              readPackage(walker.Buffer.GetRange(walker.Cursor, size));
              walker.Cursor += size;
            }

            recieveTask = null;
          }

          if (pingEnabled && (DateTime.Now - lastReceivedPing) > PING_WAIT_TIME)
            Close();

          break;
        default:
          break;
      }
    }

    private void readPackage(List<byte> buffer) {
      BinaryWalker walker = new BinaryWalker();
      walker.Cursor = 0;
      walker.Buffer = buffer;
      if (walker.TryReadByte(out var type)) {
        switch ((PackageType)type) {
          case PackageType.Ping:
            lastReceivedPing = DateTime.Now;
            break;
          case PackageType.ConfigPing:
            walker.TryReadByte(out var enabled);
            pingEnabled = enabled != 0;
            lastReceivedPing = DateTime.Now;
            break;
          case PackageType.Message:
            if (walker.TryReadString(out var str))
              MessageHandler(str);
            break;
          default:
            // Unknown package.
            break;
        }
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

      socket.SetSocketOption(SocketOptionLevel.Socket, SocketOptionName.KeepAlive, true);

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
