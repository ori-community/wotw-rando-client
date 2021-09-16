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

    public static void UpdateMultivere(MultiverseInfoMessage multiverse) {
      lastMultiverseInfo = multiverse;
      var universe = multiverse.Universes.First(u => u.Worlds.Any(w => w.Members.Any(m => m.Id == Id)));
      if (universe != null) {
        var players = new Dictionary<string, string>();
        foreach (var world in universe.Worlds)
          foreach (var member in world.Members)
            if (member.Id != Id)
              players.Add(member.Id, member.Name);

        var toAdd = players.Keys.Except(currentPlayers);
        var toRemove = currentPlayers.Except(players.Keys);

        foreach (var player in toRemove)
          InterOpMultiplayer.remove_player(player);

        foreach (var player in toAdd)
          InterOpMultiplayer.add_player(player, players[player]);

        currentPlayers = toAdd.ToHashSet();
      }
    }

    public static void UpdatePlayerPosition(string id, float x, float y) {
      if (currentPlayers.Any(p => p == id)) {
        InterOpMultiplayer.update_player_position(id, x, y);
      }
      else {
        Randomizer.Log($"Got player position from unknown player {id}: {x}, {y}");
      }
    }

    public static void Update() {
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
