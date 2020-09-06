using System;
using System.Net.Sockets;
using Google.Protobuf;
using Network;
using WebSocketSharp;

namespace RandoMainDLL
{
  public class WebSocketClient {
    public delegate void UberStateRegistrationHandler(Memory.UberId id);
    public delegate void UberStateUpdateHandler(Memory.UberId id, float value);

    public UberStateRegistrationHandler UberStateRegistered;
    public UberStateUpdateHandler UberStateChanged;

    private const string ServerAddress = "ws://{0}/gameSync/{1}";

    private static WebSocket socket;

    public bool IsConnected { get { return socket != null; } }

    public void Connect(string domain, long player) {
      if (socket != null) {
        Disconnect();
      }
      
      socket = new WebSocket(string.Format(ServerAddress, domain, player));
      socket.OnMessage += HandleMessage;
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
      var packet = Packet.Parser.ParseFrom(args.RawData);
      switch (packet.Id) {
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
    }
  }
}
