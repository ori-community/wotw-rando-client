
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

  public enum MessageType {
    Info = 1,
    Warning = 2,
    Error = 3,
    Debug = 4
  }

  public class TraceClient : IDisposable {
    NetClient client;
    BinaryWalker walker;
    Thread thread;

    Mutex close;
    bool closed;

    public HandleMessage MessageHandler {
      get { return client.MessageHandler; }
      set { client.MessageHandler = value; }
    }

    public TraceClient() {
      client = new NetClient();
      walker = new BinaryWalker();
      thread = new Thread(new ThreadStart(loop));
      close = new Mutex();
    }

    ~TraceClient() {
      Dispose();
    }

    public void Dispose() {
      if (!closed) {
        client.Close();
        close.Close();
        closed = true;
      }
    }

    public void Start(string name) {
      closed = false;
      client.Identifier = name;
      thread.Start();
    }

    public void Close() {
      close.WaitOne();
      closed = true;
      close.ReleaseMutex();
      thread.Join();
    }

    public void Send(MessageType type, int level, string group, string message) {
      walker.Buffer.Clear();
      walker.Cursor = 0;
      walker.Put((byte)NetClient.PackageType.TraceMessage);
      walker.Put((int)type);
      walker.Put(level);
      walker.Put(string.Format("[{0}]", message));
      walker.Put(message);
      client.Send(walker.Buffer.ToArray());
    }

    private void loop() {
      while (true) {
        close.WaitOne();
        if (closed) {
          close.ReleaseMutex();
          client.Close();
          break;
        }

        close.ReleaseMutex();
        if (client.IsIdle())
          client.Connect();

        client.Poll();
      }
    }
  }
}
