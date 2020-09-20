﻿using System;
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
    public static string Domain { get => AHK.IniString("Paths", "URL", "wotw.orirando.com"); }
    public static string SessionId;

    public int ReconnectCooldown = 0;
    public int FramesSinceLastCheck = 0;
    private string ServerAddress => $"wss://{Domain}/api/game_sync/";

    private WebSocket socket;
    public bool IsConnected { get { return socket != null && socket.IsAlive; } }
    public bool Connecting = false;
    public void Connect() {
      if (DiscordController.Disabled ) return;
      if(Connecting) {
        Randomizer.Log("Skipping connection request as one is in-progress", false, "DEBUG");
        return;
      }
      new Thread(() => {
        Connecting = true;
        //      PlayerId = player;
        if (socket != null) {
          Disconnect();
        }
        var user = DiscordController.GetUser();
        try {
          if (user == null) {
            Connecting = false;
            Randomizer.Log("Have no user ID; reattempting discord auth", false, "WARN");
            DiscordController.Initialize();
            return;
          }
          var client = new WebClient();
          client.UploadString($"https://{Domain}/api/sessions/uid", $"{user?.Id}");
          var rawCookie = client.ResponseHeaders.Get("Set-Cookie");
          SessionId = rawCookie.Split(';')[0].Split('=')[1];
        } catch(Exception e) { 
          Randomizer.Error($"Connect (UploadString, user had id {user?.Id}", e);
          return;
        }


        socket = new WebSocket(ServerAddress, null);
        socket.CookieCollection.Add(new WebSocketSharp.Net.Cookie("sessionid", SessionId, "/", Domain));
        socket.Log.Level = LogLevel.Info;
        socket.Log.Output = (logdata, output) => {
          Randomizer.Log($"Websocket says: {logdata.Message}", false, $"{logdata.Level}");
        };
        socket.OnError += (sender, e) => {
          Randomizer.Error("WebSocket", $"{e} {e?.Exception}", false);
          Connecting = false;
        };
        socket.OnClose += (sender, e) => {
          Randomizer.Log("Disconnected! Retrying in 5s");
          Connecting = false;
        };
        socket.OnMessage += HandleMessage;
        socket.OnOpen += (sender, args) => {
          Connecting = false;
          Randomizer.Log($"Connected to server", false);
          UberStateController.QueueSyncedStateUpdate();
        };
        Randomizer.Log($"Attempting to connect to ${Domain}", false);
        try {
          socket.Connect();
        } catch(Exception e) {
          Connecting = false;
          Randomizer.Error("Connect (socket.)", e, false); 
        }

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
      if (socket == null || !socket.IsConnected) {
        return;
      }
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

        socket.Send(packet.ToByteArray());
      } catch(Exception e) { Randomizer.Error("send update", e, false);  }

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
