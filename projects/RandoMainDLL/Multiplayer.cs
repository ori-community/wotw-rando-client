using System;
using System.Collections.Concurrent;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Runtime.InteropServices;
using System.Threading;
using Network;
using RandoMainDLL.Memory;

namespace RandoMainDLL {

  public static class Multiplayer {
    public static BlockingCollection<Packet> Queue = new BlockingCollection<Packet>();

    public static string Id { get; private set; }
    public static string Name { get; private set; }

    private static HashSet<string> currentPlayers = new HashSet<string>();
    private static MultiverseInfoMessage lastMultiverseInfo = null;

    public static void SetCurrentUser(UserInfo user) {
      Id = user.Id;
      Name = user.Name;
      if (lastMultiverseInfo != null)
        UpdateMultivere(lastMultiverseInfo);
    }

    public static void ClearMultiverse() {
      currentPlayers.Clear();
      InterOp.Multiplayer.clear_players();
    }

    public static void UpdateMultivere(MultiverseInfoMessage multiverse) {
      lastMultiverseInfo = multiverse;
      var universe = multiverse.Universes.First(u => u.Worlds.Any(w => w.Members.Any(m => m.Id == Id)));
      var players = new Dictionary<string, UserInfo>();
      foreach (var world in universe.Worlds)
        foreach (var member in world.Members)
          if (member.Id != Id)
            players.Add(member.Id, member);

      var toAdd = players.Keys.Except(currentPlayers);
      var toRemove = currentPlayers.Except(players.Keys);

      foreach (var player in toRemove)
        InterOp.Multiplayer.remove_player(player);

      foreach (var player in toAdd)
        InterOp.Multiplayer.add_player(player, players[player].Name);

      currentPlayers = players.Keys.ToHashSet();
      foreach (var player in players)
        InterOp.Multiplayer.set_player_online(player.Key, player.Value.HasConnectedMultiverseId);
    }

    public static void UpdatePlayerPosition(string id, float x, float y) {
      if (currentPlayers.Any(p => p == id)) {
        InterOp.Multiplayer.update_player_position(id, x, y);
      }
      else {
        Randomizer.Log($"Got player position from unknown player {id}: {x}, {y}", false);
      }
    }

    public static void Update() {
      var playerPosition = InterOp.get_position();
      UDPSocketClient.SendPlayerPosition(playerPosition.X, playerPosition.Y);

      while (Queue.TryTake(out var packet)) {
        switch (packet.Id) {
          case 8:
            var multiverse = MultiverseInfoMessage.Parser.ParseFrom(packet.Packet_);
            UpdateMultivere(multiverse);
            break;
          case 11:
            var position = UpdatePlayerPositionMessage.Parser.ParseFrom(packet.Packet_);
            UpdatePlayerPosition(position.PlayerId, position.X, position.Y);
            break;
          case 12:
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
