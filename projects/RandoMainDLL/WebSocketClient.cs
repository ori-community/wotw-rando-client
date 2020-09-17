using System;
using System.ComponentModel;
using System.Net;
using System.Threading;
using System.Windows.Interop;
using Google.Protobuf;
using Network;
using Websocket;

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
    public static bool WantConnection = true;
    public static string SessionId;

    public int ReconnectCooldown = 0;
    public int FramesSinceLastCheck = 0;
    private string ServerAddress => $"wss://{Domain}/api/game_sync/";

    private Websocket.Client.WebsocketClient socket;

    public bool IsConnected { get { return socket != null && socket.IsRunning; } }
    public void Connect() {
      new Thread(() => {
        if (socket != null) {
        Disconnect();
      }
        var client = new WebClient();
        client.UploadString($"https://{WebSocketClient.Domain}/api/sessions/", DiscordController.Token.AccessToken);
        var rawCookie = client.ResponseHeaders.Get("Set-Cookie");
        SessionId = rawCookie.Split(';')[0].Split('=')[1];

        socket = new Websocket.Client.WebsocketClient(new Uri(ServerAddress), () => {
          var wrapped = new System.Net.WebSockets.ClientWebSocket();
          wrapped.Options.Cookies = new CookieContainer();
          wrapped.Options.Cookies.Add(new Cookie("sessionid", SessionId, "/", Domain));
          return wrapped;
        }) {
          ReconnectTimeout = null // TODO; add keepalive for auto reconnect
        };
        socket.MessageReceived.Subscribe(msg => HandleMessage(msg.Binary));
        socket.ReconnectionHappened.Subscribe(info => Randomizer.Log($"Reconnected: {info}", false));
        socket.DisconnectionHappened.Subscribe(info => Randomizer.Log($"Disconnected: {info?.CloseStatusDescription} {info?.CloseStatus} {info?.Exception}", false));
        var task = socket.Start();
        task.ContinueWith(_ => {
          UberStateController.QueueSyncedStateUpdate();
        });
      }).Start();
    }

    public void Disconnect() {
      if (socket == null) {
        return;
      }

      socket.Dispose();
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

      socket.SendInstant(packet.ToByteArray());
    }

    public void HandleMessage(byte[] rawData) {
      try {
        var packet = Packet.Parser.ParseFrom(rawData);
        switch (packet.Id) {
          case 6:
            var printMsg = PrintTextMessage.Parser.ParseFrom(packet.Packet_);
            AHK.Print(printMsg.Text, printMsg.Frames, printMsg.Ypos, true);
            break;
          case 5:
            var init = InitBingoMessage.Parser.ParseFrom(packet.Packet_);
            foreach (var state in init.UberId) {
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
