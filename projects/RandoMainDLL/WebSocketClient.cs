using System;
using System.Net.Sockets;
using Google.Protobuf;
using Network;
using WebSocketSharp;

namespace RandoMainDLL
{
  public class WebSocketClient {
    private const string ServerAddress = "ws://somethingsomething";

    private static WebSocket socket;

    public void Connect() {
      socket = new WebSocket(ServerAddress);
      socket.OnMessage += HandleMessage;
      socket.Connect();
      //socket.Send("test");
    }

    public void SendUpdate(int group, int state, float value) {
      Packet packet = new Packet {
        Id = 3,
        Packet_ = new UberStateUpdateMessage {
          State = new UberId {
            Group = group,
            State = state
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
          break;
        case 3:
          var update = UberStateUpdateMessage.Parser.ParseFrom(packet.Packet_);
          break;
        default:
          break;
      }
    }
  }
}
