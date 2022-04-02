using System;
using System.ComponentModel;
using System.Net;
using System.Threading;
using Google.Protobuf;
using Network;
using System.Collections.Concurrent;
using System.Collections.Generic;
using System.Linq;
using System.Net.Sockets;
using System.Threading.Tasks;

namespace RandoMainDLL {
  public static class UDPSocketClient {
    public static BlockingCollection<Packet> SendQueue = new BlockingCollection<Packet>();

    public static string Domain { get => AHK.IniString("Paths", "URL", "wotw.orirando.com").Split(':')[0]; }
    public static int Port { get => AHK.IniInt("Paths", "UdpPort", 31415); }
    public static bool IsStarted { get; private set; }

    private static UdpClient client;
    private static int udpId;
    private static byte[] udpKey;
    private static Thread updateThread;
    private static readonly Mutex mutex = new Mutex();

    public static void Start(int id, byte[] key) {
      mutex.WaitOne();
      udpId = id;
      udpKey = key;
      mutex.ReleaseMutex();

      if (IsStarted)
        return;

      client = new UdpClient();
      try {
        client.Connect(Domain, Port);
        IsStarted = true;
        IPEndPoint RemoteIpEndPoint = new IPEndPoint(IPAddress.Any, 0);
        setupUpdateThread();
      }
      catch (Exception e) {
        Console.WriteLine(e.ToString());
      }
    }


    private static bool stopping = false;
    private static ManualResetEvent stopEvent = new ManualResetEvent(false);
    public static void Stop() {
      if (IsStarted) {
        stopping = true;
        stopEvent.WaitOne();
        stopEvent.Reset();
      }
    }

    private static TimeSpan time;
    private static void setupUpdateThread() {
      if (updateThread == null) {
        IPEndPoint endPoint = new IPEndPoint(IPAddress.Any, Port);
        time = DateTime.Now.TimeOfDay;
        updateThread = new Thread(() => {
          bool isReceiving = false;
          while (true) {
            if (IsStarted) {
              try {
                mutex.WaitOne();
                var id = udpId;
                var key = udpKey;
                mutex.ReleaseMutex();

                // Send
                if ((DateTime.Now.TimeOfDay - time).TotalSeconds >= 20) {
                  time = DateTime.Now.TimeOfDay;
                  client.Send(new byte[0], 0);
                }

                Packet packet;
                if (SendQueue.TryTake(out packet)) {
                  var data = packet.ToByteArray();
                  EncryptDecrypt(ref data, key);

                  var udpPacket = new UdpPacket();
                  udpPacket.UdpId = id;
                  udpPacket.EncryptedPacket = ByteString.CopyFrom(data);
                  data = udpPacket.ToByteArray();
                  client.Send(data, data.Length);
                }

                // Receive
                if (!isReceiving) {
                  isReceiving = true;
                  client.BeginReceive((IAsyncResult result) => {
                    UdpClient c = (UdpClient)result.AsyncState;
                    HandleMessage(c.EndReceive(result, ref endPoint));
                    isReceiving = false;
                  }, client);
                }

                if (stopping) {
                  stopping = false;
                  IsStarted = false;
                  client.Close();
                  stopEvent.Set();
                }
              }
              catch (Exception e) {
                Randomizer.Warn("UDPSocket.UpdateThread", $"caught error {e}");
              }
            }
          }
        });
        updateThread.Start();
      }
    }

    public static void EncryptDecrypt(ref byte[] data, byte[] key) {
      for (var i = 0; i < data.Length; ++i)
        data[i] = (byte)(data[i] ^ key[i % key.Length]);
    }

    public static void SendPlayerPosition(float x, float y) {
      if (!IsStarted)
        return;

      try {
        var playerPosition = new PlayerPositionMessage();
        playerPosition.X = x;
        playerPosition.Y = y;
        Packet packet = new Packet {
          Id = Packet.Types.PacketID.PlayerPositionMessage,
          Packet_ = playerPosition.ToByteString()
        };
        SendQueue.Add(packet);
      }
      catch (Exception e) { Randomizer.Error("SendPlayerPosition", e, false); }
    }

    public static void SendPlayerUseCatch() {
      if (!IsStarted)
        return;

      try {
        var useCatch = new PlayerUseCatchingAbilityMessage();
        Packet packet = new Packet {
          Id = Packet.Types.PacketID.PlayerPositionMessage,
          Packet_ = useCatch.ToByteString()
        };
        SendQueue.Add(packet);
      }
      catch (Exception e) { Randomizer.Error("SendPlayerUseCatch", e, false); }
    }

    private static void HandleMessage(byte[] data) {
      try {
        if (data == null) {
          Randomizer.Log("received message with no data!");
          return;
        }
        if (data.Length > 0) {
          mutex.WaitOne();
          var key = udpKey;
          mutex.ReleaseMutex();

          var udp = UdpPacket.Parser.ParseFrom(data);
          data = udp.EncryptedPacket.ToArray();
          EncryptDecrypt(ref data, key);
          var packet = Packet.Parser.ParseFrom(data);
          switch (packet.Id) {
            case Packet.Types.PacketID.PlayerUsedCatchingAbility:
              // Maybe put it in WebSocket instead?
              HideAndSeek.Queue.Add(packet);
              break;
            case Packet.Types.PacketID.UpdatePlayerPositionMessage:
              Multiplayer.Queue.Add(packet);
              break;
            default:
              break;
          }
        }
      }
      catch (Exception t) {
        Randomizer.Error("t", t);
      }
    }
  }
}
