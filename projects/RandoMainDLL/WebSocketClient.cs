using System;
using System.ComponentModel;
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

    private string ServerAddress => $"wss://{Domain}/api/gameSync/{GameId}/{PlayerId}";

    private WebSocket socket;

    public void Update() {
      if(WantConnection && !IsConnected) {
        if(ReconnectCooldown > 0) {
          ReconnectCooldown--;
          return;
        }
        try {
          Randomizer.Log("Connecting...");
          Connect();
          UberStateController.QueueSyncedStateUpdate();
        }
        catch (Exception e) {
          Randomizer.Error("CTS", e, false);
          if (!IsConnected)
            ReconnectCooldown = 5;
        }
      }
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
        Randomizer.Error("WebSocket", e.Exception, false);
        ReconnectCooldown = 5;
      };
      socket.OnClose += (sender, e) => {
        Randomizer.Log("Disconnected! Retrying in 5s");
        ReconnectCooldown = 5;
      };
      socket.OnMessage += HandleMessage;
      socket.OnOpen +=  new EventHandler(delegate (object sender, EventArgs args) {
        Randomizer.Log($"Socket opened", false);
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
