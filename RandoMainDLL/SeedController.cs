using System;
using System.Collections.Generic;
using System.Globalization;
using System.IO;
using RandoMainDLL.Memory;

namespace RandoMainDLL {
  public static class SeedController {
    public enum FakeUberGroups : int {
      TREE = 0,
      OPHER_WEAPON = 1,
      TWILLEN_SHARD = 2,
      GAME_CONDITION = 3
    }

    public enum GameCondition : byte {
      GAME_START = 0
    }

    public static Pickup GameStartPickup {
      get {
        var uberId = new UberId((int)FakeUberGroups.GAME_CONDITION, (int)GameCondition.GAME_START);
        return pickupMap.ContainsKey(uberId) ? pickupMap[uberId] : Multi.Empty;
      }
    }

    public static Dictionary<UberId, Pickup> pickupMap = new Dictionary<UberId, Pickup>();

    public static void ReadSeed() {
      string seedName = File.ReadAllText(Randomizer.SeedNameFile);
      if (seedName.Trim() != "") {
        pickupMap.Clear();
        HintsController.Reset();
        string line = "";
        foreach (string rawLine in File.ReadLines(Randomizer.SeedFile)) {
          try {
            line = rawLine.Split(new string[] { "//" }, StringSplitOptions.None)[0].Trim();
            if (line == "") continue;
            var frags = line.Split('|');
            var uberId = new UberId(int.Parse(frags[0]), int.Parse(frags[1]));
            var pickupType = (PickupType)byte.Parse(frags[2]);
            // Randomizer.Log($"uberId {uberId} -> {pickupType} {frags[3]}");

            if (uberId.GroupID == (int)FakeUberGroups.OPHER_WEAPON && frags.Length > 4)
              ShopController.SetCostMod((AbilityType)uberId.ID, float.Parse(frags[4], NumberStyles.Number, CultureInfo.GetCultureInfo("en-US")));
            else if (uberId.GroupID == (int)FakeUberGroups.TWILLEN_SHARD && frags.Length > 4)
              ShopController.SetCostMod((ShardType)uberId.ID, float.Parse(frags[4], NumberStyles.Number, CultureInfo.GetCultureInfo("en-US")));

            var pickup = BuildPickup(pickupType, frags[3]);
            if (pickup.IsHintItem())
              HintsController.AddHint(uberId.LocData().Zone, pickup as Checkable);
            // insert crazed laughter here
            pickupMap[uberId] = (pickupMap.ContainsKey(uberId) ? pickupMap[uberId] : Multi.Empty).Concat(pickup);
          }
          catch (Exception e) {
            Randomizer.Log($"Error parsing line: '{line}'\nError: {e.Message} \nStacktrace: {e.StackTrace}", false);
          }
        }
        AHK.Print($"v{Randomizer.VERSION} - Seed {seedName} loaded", 300);
      }
      else {
        AHK.Print($"v{Randomizer.VERSION} - No seed found! Download a .wotwr file and double-click it to load one", 360);
      }
    }

    public static Sellable OpherWeapon(AbilityType ability) {
      var fakeId = new UberId((int)FakeUberGroups.OPHER_WEAPON, (int)ability);
      if (pickupMap.TryGetValue(fakeId, out Pickup p) && p is Sellable) {
        return p as Sellable;
      }
      Randomizer.Log($"Couldn't find a valid Sellable for {ability}...");
      return new Resource(ResourceType.Energy);
    }

    public static Sellable TwillenShard(ShardType shard) {
      var fakeId = new UberId((int)FakeUberGroups.TWILLEN_SHARD, (int)shard);
      if (pickupMap.TryGetValue(fakeId, out Pickup p) && p is Sellable) {
        return p as Sellable;
      }
      Randomizer.Log($"Couldn't find a valid Sellable for {shard}...");
      return new Resource(ResourceType.Energy);
    }

    public static void OnTree(AbilityType ability) {
      var fakeId = new UberId((int)FakeUberGroups.TREE, (int)ability);
      if (pickupMap.TryGetValue(fakeId, out Pickup p)) {
        p.Grant();
        InterOp.save();
      }
      else {
        Randomizer.Log($"Tree {ability} not found in seed!");
      }
    }

    public static bool OnUberState(UberState state) {
      var id = state.GetUberId();
      bool granted = pickupMap.TryGetValue(id, out Pickup p);
      if (granted) {
        p.Grant();
        InterOp.save();
        SaveController.Data.FoundCount++;
      }
      if (HintsController.LupoZoneIds.Contains(id))
        HintsController.ShowHintMessage(true);
      return granted;
    }

    public static Pickup BuildPickup(PickupType type, string pickupData) {
      switch (type) {
        case PickupType.Ability:
          return new Ability((AbilityType)byte.Parse(pickupData));
        case PickupType.Shard:
          return new Shard((ShardType)byte.Parse(pickupData));
        case PickupType.SpiritLight:
          return new Cash(int.Parse(pickupData));
        case PickupType.Resource:
          return new Resource((ResourceType)byte.Parse(pickupData));
        case PickupType.Teleporter:
          return new Teleporter((TeleporterType)byte.Parse(pickupData));
        case PickupType.Message:
          var messageParts = pickupData.Split(new string[] { @"`(" }, StringSplitOptions.RemoveEmptyEntries);
          int frames = 240;
          bool squelch = false;
          if (messageParts.Length > 1) {
            var cmdsRaw = messageParts[1].TrimEnd(')');
            foreach (string cmd in cmdsRaw.Split(',')) {
              if (cmd.StartsWith("f=")) {
                int.TryParse(cmd.Replace("f=", ""), out frames);
                continue;
              }
              if (cmd == "mute") {
                squelch = true;
              }
            }
          }
          return new Message(messageParts[0], frames, squelch);
        case PickupType.WorldEvent:
          return new WorldEvent((WorldEventType)byte.Parse(pickupData));
        default:
          Randomizer.Log($"Error on seed parse: unknown pickup ${pickupData}!!!", false);
          return new Message($"Unknown pickup ${pickupData}!!!");
      }
    }
    public static int Current { get => SaveController.Data.FoundCount; }
    public static int Total { get => pickupMap.Count; }
    public static string Progress {
      get => "Pickups: " + (Current == Total ? $"${Current}/{Total}$" : $"{Current}/{Total}");
    }
  }
}
