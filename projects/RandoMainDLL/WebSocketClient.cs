using System;
using System.ComponentModel;
using System.Net;
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
    private static string _domain;
    public static string Domain { 
      get {
        if (_domain == null) { 
          _domain = AHK.IniString("Paths", "URL");
          if(_domain == "")
            _domain = "wotw.orirando.com";
        }
        return _domain;
      }
    }
    public static string SessionId;

    public int ReconnectCooldown = 0;
    public int FramesSinceLastCheck = 0;
    private string ServerAddress => $"wss://{Domain}/api/game_sync/";

    private WebSocket socket;
    public bool IsConnected { get { return socket != null && socket.IsAlive; } }

    public void Connect() {
      new Thread(() => {
        //      PlayerId = player;
        if (socket != null) {
          Disconnect();
        }
        var client = new WebClient();
        client.UploadString($"https://{Domain}/api/sessions/", DiscordController.Token.AccessToken);
        var rawCookie = client.ResponseHeaders.Get("Set-Cookie");
        SessionId = rawCookie.Split(';')[0].Split('=')[1];

        socket = new WebSocket(ServerAddress, null);
        socket.CookieCollection.Add(new WebSocketSharp.Net.Cookie("sessionid", SessionId, "/", Domain));
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
        socket.OnOpen += (sender, args) => {
          Randomizer.Log($"Connected to server", false);
          UberStateController.QueueSyncedStateUpdate();
          ReconnectCooldown = 0;
        };
        Randomizer.Log($"Attempting to connect to ${Domain}", false);

        socket.Connect();

      }).Start();
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
            // wolf started it :D
            Group = id.GroupID == 0 ? -1 : id.GroupID,
            State = id.ID == 0 ? -1 : id.ID
          },
          Value = value == 0f ? -1f : value
        }.ToByteString()
      };

      socket.Send(packet.ToByteArray());
    }

    public void HandleMessage(object sender, MessageEventArgs args) {
      try {
        var data = args.RawData;
        if (data == null) {
          Randomizer.Log("received message with no data!");
          return;
        }
        var packet = Packet.Parser.ParseFrom(data);
        switch (packet.Id) {
          case 6:
            var printMsg = PrintTextMessage.Parser.ParseFrom(packet.Packet_);
            Randomizer.Log($"Server says {printMsg.Text} (f={printMsg.Frames} p={printMsg.Ypos})", false);
            AHK.Print(printMsg.Text, printMsg.Frames, printMsg.Ypos, true);
            break;
          case 5:
            var init = InitBingoMessage.Parser.ParseFrom(packet.Packet_);
            foreach (var state in init.UberId) {
//              Randomizer.Log(state.ToString(), false);
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
      }
      catch (Exception t) {
        Randomizer.Error("t", t);
      }
    }
  }
}
