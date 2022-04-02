using System;
using System.Collections.Concurrent;
using System.Collections.Generic;
using System.Drawing;
using System.IO;
using System.Linq;
using System.Runtime.InteropServices;
using System.Threading;
using Network;
using RandoMainDLL.Memory;

namespace RandoMainDLL {

  public static class Multiplayer {
    public struct PlayerInfo {
      public long UniverseId;
      public long WorldId;
      public UserInfo User;
      public RGBA Color;
    }

    public static BlockingCollection<Packet> Queue = new BlockingCollection<Packet>();

    public static long UniverseId { get; private set; }
    public static long WorldId { get; private set; }
    public static string Id { get; private set; }
    public static string Name { get; private set; }
    public static MultiverseInfoMessage.Types.GameHandlerType GameType { get; private set; }

    private static Dictionary<string, PlayerInfo> currentPlayers = new Dictionary<string, PlayerInfo>();
    private static MultiverseInfoMessage lastMultiverseInfo = null;

    static Multiplayer() {
      GameType = MultiverseInfoMessage.Types.GameHandlerType.Normal;
    }

    public static IEnumerable<PlayerInfo> GetPlayersFromWorld(long id) {
      return currentPlayers.Where(w => w.Value.WorldId == id).Select(p => p.Value);
    }

    public static PlayerInfo? GetPlayerInfo(string id) {
      return currentPlayers.TryGetValue(id, out var info) ? new PlayerInfo?(info) : null;
    }

    public static void SetCurrentUser(UserInfo user) {
      Id = user.Id;
      Name = user.Name;
      if (lastMultiverseInfo != null)
        UpdateMultivere(lastMultiverseInfo);
    }

    private static void clearGameHandlers() {
      HideAndSeek.ClearInfo();
    }

    public static void ClearMultiverse() {
      currentPlayers.Clear();
      InterOp.Multiplayer.clear_players();
      clearGameHandlers();
    }

    public static void UpdateMultivere(MultiverseInfoMessage multiverse) {
      lastMultiverseInfo = multiverse;
      var universe = multiverse.Universes.First(u => u.Worlds.Any(w => w.Members.Any(m => m.Id == Id)));
      var players = new Dictionary<string, PlayerInfo>();
      foreach (var world in universe.Worlds) {
        // Cut away # and convert to number.
        float r = (int.Parse(world.Color.Substring(1, 2), System.Globalization.NumberStyles.HexNumber)) / 255.0f;
        float g = (int.Parse(world.Color.Substring(3, 2), System.Globalization.NumberStyles.HexNumber)) / 255.0f;
        float b = (int.Parse(world.Color.Substring(5, 2), System.Globalization.NumberStyles.HexNumber)) / 255.0f;
        float a = 1.0f;
        foreach (var member in world.Members) {
          if (member.Id != Id)
            players.Add(member.Id, new PlayerInfo {
              UniverseId = universe.Id,
              WorldId = world.Id,
              User = member,
              Color = new RGBA { R = r, G = g, B = b, A = a }
            });
          else {
            UniverseId = universe.Id;
            WorldId = world.Id;
            InterOp.Multiplayer.set_local_player_color(r, g, b, a);
          }
        }
      }

      var toAdd = players.Keys.Except(currentPlayers.Keys);
      var toRemove = currentPlayers.Keys.Except(players.Keys);

      foreach (var player in toRemove) {
        InterOp.Multiplayer.remove_player(player);
        Randomizer.Log($"Removed player {player}", false);
      }

      foreach (var player in toAdd) {
        InterOp.Multiplayer.add_player(player, players[player].User.Name, InterOp.Multiplayer.PlayerIcon.Moki);
        Randomizer.Log($"Added player {player}", false);
      }

      currentPlayers = players;
      foreach (var player in players) {
        InterOp.Multiplayer.set_player_online(player.Key, player.Value.User.HasConnectedMultiverseId);
        Randomizer.Log($"Player {player} is online: {player.Value.User.HasConnectedMultiverseId}", false);
        InterOp.Multiplayer.set_player_color(player.Key,
          player.Value.Color.R, player.Value.Color.G, player.Value.Color.B, player.Value.Color.A);
      }

      clearGameHandlers();
      GameType = multiverse.HandlerType;
      switch (multiverse.HandlerType) {
        case MultiverseInfoMessage.Types.GameHandlerType.Normal:
          // On normal we don't need to do anything.
          break;
        case MultiverseInfoMessage.Types.GameHandlerType.HideAndSeek:
          var info = HideAndSeekGameHandlerClientInfo.Parser.ParseFrom(multiverse.HandlerInfo);
          HideAndSeek.ParseHandlerInfo(info);
          break;
      }
    }

    public static void UpdatePlayerPosition(string id, float x, float y) {
      if (currentPlayers.Any(p => p.Key == id)) {
        InterOp.Multiplayer.update_player_position(id, x, y);
      }
      else {
        Randomizer.Log($"Got player position from unknown player {id}: {x}, {y}", false);
      }
    }

    public static void Update() {
      var playerPosition = InterOp.Player.get_position();
      UDPSocketClient.SendPlayerPosition(playerPosition.X, playerPosition.Y);

      while (Queue.TryTake(out var packet)) {
        switch (packet.Id) {
          case Packet.Types.PacketID.MultiverseInfoMessage:
            var multiverse = MultiverseInfoMessage.Parser.ParseFrom(packet.Packet_);
            UpdateMultivere(multiverse);
            break;
          case Packet.Types.PacketID.UpdatePlayerPositionMessage:
            var position = UpdatePlayerPositionMessage.Parser.ParseFrom(packet.Packet_);
            UpdatePlayerPosition(position.PlayerId, position.X, position.Y);
            break;
          case Packet.Types.PacketID.AuthenticatedMessage:
            var authenticated = AuthenticatedMessage.Parser.ParseFrom(packet.Packet_);
            SetCurrentUser(authenticated.User);
            break;
          default:
            break;
        }
      }
    }
  }
}
