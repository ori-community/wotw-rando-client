using System;
using System.ComponentModel;
using System.Threading;
using Google.Protobuf;
using Network;
using WebSocketSharp;

namespace RandoMainDLL {
  public class WebSocketClient {
    public delegate void UberStateRegistrationHandler(Memory.UberId id);
    public delegate void UberStateUpdateHandler(Memory.UberId id, float value);

    public UberStateRegistrationHandler UberStateRegistered;
    public UberStateUpdateHandler UberStateChanged;
    private string _domain;
    public string Domain { 
      get {
        if (_domain == null) { 
          _domain = AHK.IniString("Paths", "URL");
          if(_domain == "")
            _domain = "wotw.orirando.com";
        }
        return _domain;
      }
    }
    public static bool WantConnection = true;

    public int GameId = 1;
    public long PlayerId = 1;
    public int ReconnectCooldown = 0;
    public int FramesSinceLastCheck = 0;
    private string ServerAddress => $"wss://{Domain}/api/gameSync/{GameId}/{PlayerId}";

    private WebSocket socket;
    private object threadLock = new object();
    public void Update() {
      if (FramesSinceLastCheck > 0) {
        FramesSinceLastCheck--;
        return;
      }
      FramesSinceLastCheck = 60;
      new Thread(() => {
        if (WantConnection && !IsConnected) {
          if(Monitor.TryEnter(threadLock, 50)) {
            try {
              if (ReconnectCooldown > 0) {
                ReconnectCooldown--;
                Randomizer.Log($"{ReconnectCooldown}", false);
                return;
              } else {
                Randomizer.Log("Connecting...", false);
                Connect();
              }
            } catch (Exception e) {
              Randomizer.Error("CTS", e, false);
            } finally {
              Monitor.Exit(threadLock);
            }
          }
        }
      }).Start();
    }

    public bool IsConnected { get { return socket != null && socket.IsAlive; } }

    public void Connect() {
      //      PlayerId = player;
      if (socket != null) {
        Disconnect();
      }
      Randomizer.Log(ServerAddress, false);
      socket = new WebSocket(ServerAddress);
      socket.Log.Level = LogLevel.Info;
      socket.Log.Output = (logdata, output) => {
        Randomizer.Log($"Websocket says: {logdata.Message}", false, $"{logdata.Level}");
      };
      socket.OnError += (sender, e) => {
        Randomizer.Error("WebSocket", $"{e} {e?.Exception}", false);
        ReconnectCooldown = 5;
      };
      socket.OnClose += (sender, e) => {
        Randomizer.Log("Disconnected! Retrying in 5s");
        ReconnectCooldown = 5;
      };
      socket.OnMessage += HandleMessage;
      socket.OnOpen +=  new EventHandler(delegate (object sender, EventArgs args) {
        Randomizer.Log($"Socket opened", false);
        UberStateController.QueueSyncedStateUpdate();
        ReconnectCooldown = 0;
      });
      Randomizer.Log($"Attempting to connect to ${Domain}", false);

      socket.Connect();

    }

    public void Disconnect() {
      if (socket == null) {
        return;
      }

      socket.Close();
      socket = null;
    }

    public void SendUpdate(Memory.UberId id, float value) {
      if (socket == null) {
        return;
      }

      Packet packet = new Packet {
        Id = 3,
        Packet_ = new UberStateUpdateMessage {
          State = new UberId {
            Group = id.GroupID,
            State = id.ID
          },
          Value = value
        }.ToByteString()
      };

      socket.Send(packet.ToByteArray());
    }

    public void HandleMessage(object sender, MessageEventArgs args) {
      try {
        var packet = Packet.Parser.ParseFrom(args.RawData);
        switch (packet.Id) {
          case 6:
            var printMsg = PrintTextMessage.Parser.ParseFrom(packet.Packet_);
            Randomizer.Log($"Server says {printMsg.Text} (f={printMsg.Frames} p={printMsg.Ypos})", false);
            AHK.Print(printMsg.Text, printMsg.Frames, printMsg.Ypos, true);
            break;
          case 5:
            var init = InitBingoMessage.Parser.ParseFrom(packet.Packet_);
            foreach (var state in init.UberId) {
              Randomizer.Log(state.ToString(), false);
              UberStateRegistered(new Memory.UberId(state.Group, state.State));
            }
            break;
          case 3:
            var update = UberStateUpdateMessage.Parser.ParseFrom(packet.Packet_);
            UberStateChanged(new Memory.UberId(update.State.Group, update.State.State), update.Value);
            break;
          default:
            break;
        }
      } catch (Exception t) {
        Randomizer.Error("t", t);
      }
    }
  }
}
