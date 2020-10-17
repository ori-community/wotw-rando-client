using System;
using System.ComponentModel;
using System.Net;
using System.Threading;
using Google.Protobuf;
using Network;
using WebSocketSharp;
using System.Collections.Concurrent;
namespace RandoMainDLL {
  public class WebSocketClient {
    public delegate void UberStateRegistrationHandler(Memory.UberId id);
    public BlockingCollection<Packet> SendQueue = new BlockingCollection<Packet>();
    public BlockingCollection<UberStateUpdateMessage> UberStateQueue = new BlockingCollection<UberStateUpdateMessage>();

    public UberStateRegistrationHandler UberStateRegistered;
    public static string Domain { get => AHK.IniString("Paths", "URL", "wotw.orirando.com"); }
    public static string S { get => AHK.IniFlag("Insecure") ? "" : "s";}
    public static string SessionId;

    public bool ExpectingDisconnect = false;
    public int ReconnectCooldown = 0;
    public int FramesSinceLastCheck = 0;
    private string ServerAddress => $"ws{S}://{Domain}/api/game_sync/";

    private Thread updateThread;
    private Thread connectThread;

    public static int FramesTillReconnectAttempt = 420;

    public static bool WantConnection { get => !DiscordController.Disabled && (SeedController.Settings?.NetcodeEnabled ?? false); }

    private WebSocket socket;
    public bool IsConnected { get { return socket != null && socket.IsConnected; } }
    public bool Connecting { get => connectThread?.IsAlive ?? false; }
    public void Connect() {
      if (!WantConnection) return;
      setupUpdateThread();

      if (Connecting) {
        Randomizer.Log("Skipping connection request as one is in-progress", false, "DEBUG");
        FramesTillReconnectAttempt = 120;
        return;
      }
      connectThread = new Thread(() => {
        //      PlayerId = player;
        if (socket != null) {
          Disconnect();
        }
        ExpectingDisconnect = false;
        var user = DiscordController.GetUser();
        try {
          if (user == null) {
            Randomizer.Log("Have no user ID; reattempting discord auth", false, "WARN");
            DiscordController.Initialize();
            FramesTillReconnectAttempt = 60;
            return;
          }
          var client = new WebClient();

          if(AHK.IniFlag("Insecure")) // don't try this at home!
            ServicePointManager.ServerCertificateValidationCallback = (_, __, ___, ____) => true;

          client.UploadString($"http{S}://{Domain}/api/sessions/uid", $"{user?.Id}");
          var rawCookie = client.ResponseHeaders.Get("Set-Cookie");
          try {
            SessionId = rawCookie.Split(';')[0].Split('=')[1];
          } catch (Exception e2) {
            Randomizer.Error($"Failed to parse cookie {rawCookie} (response headers: {client.ResponseHeaders})", e2);
            FramesTillReconnectAttempt = 120;
            return;
          }
        }
        catch (Exception e) { 
          Randomizer.Error($"Connect (UploadString, user had id {user?.Id}", e);
          FramesTillReconnectAttempt = 120;
          return;
        }


        try {
          socket = new WebSocket(ServerAddress, null);
          socket.CookieCollection.Add(new WebSocketSharp.Net.Cookie("sessionid", SessionId, "/", Domain));
          socket.Log.Level = LogLevel.Info;
          socket.Log.Output = (logdata, output) => {
            try {
              if (logdata != null)
                Randomizer.Log($"Websocket says: {logdata.Message}", false, $"{logdata.Level}");
              else
                Randomizer.Log($"Websocket output: {output}", false);
            } catch (Exception e) {
              Randomizer.Error("Websocket log", e, false);
            }
          };
          socket.OnError += (sender, e) => {
            Randomizer.Error("WebSocket", $"{e} {e?.Exception}", false);
            FramesTillReconnectAttempt = 300;
          };
          socket.OnClose += (sender, e) => {
            if(!ExpectingDisconnect)
              Randomizer.Log("Disconnected! Retrying in 5s");
          };
          socket.OnMessage += HandleMessage;
          socket.OnOpen += (sender, args) => {
            Randomizer.Log($"Connected to server", false);
            UberStateController.QueueSyncedStateUpdate();
          };
          Randomizer.Log($"Attempting to connect to {Domain}", false);
          socket.Connect();
        } catch (Exception e) {
          FramesTillReconnectAttempt = 120;
          Randomizer.Error("Connect (socket.)", e, false); 
        }

      });
      connectThread.Start();
    }

    public void Update() {
      if (WantConnection && !IsConnected && !Connecting) {
        if (FramesTillReconnectAttempt-- <= 0) {
          FramesTillReconnectAttempt = 600;
          Randomizer.Log("Want connection but currently have none, attempting reconnect", false);
          Connect();
        }
      }
    }

    private void setupUpdateThread() {
      if (updateThread == null) {
        updateThread = new Thread(() => {
          while (true) {
            if (IsConnected)
              try {
                var packet = SendQueue.Take();
                socket.Send(packet.ToByteArray());
              }
              catch (Exception e) {
                Randomizer.Warn("UpdateThread", $"caught error {e}");
              }
          }
        });
        updateThread.Start();
      }
    }
    public void Disconnect() {
      if (socket == null) {
        return;
      }
      ExpectingDisconnect = true;
      socket.Close();
      socket = null;
      SendQueue.Clear();
      UberStateQueue.Clear();
    }

    public void SendUpdate(Memory.UberId id, float value) {
      try {
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
        SendQueue.Add(packet);
      } catch(Exception e) { Randomizer.Error("SendUpdate", e, false);  }
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
//              Randomizer.Debug($"Server says {printMsg.Text} (f={printMsg.Frames} p={printMsg.Ypos})", false);
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
            try {
              UberStateQueue.Add(UberStateUpdateMessage.Parser.ParseFrom(packet.Packet_));
            } catch(Exception e) { Randomizer.Error("UberStateQueue.Add", e); }
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
