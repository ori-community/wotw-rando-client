﻿using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Globalization;
using System.IO;
using RandoMainDLL.Memory;

namespace RandoMainDLL {
  public static class SeedController {
    public class UberStateCondition {
      public UberId Id;
      public int? Target;
      public UberStateCondition(UberId id, int? target) {
        Id = id;
        Target = target;
      }
      public override int GetHashCode() => Id.GetHashCode() + Target.GetValueOrDefault(-1);
      public override bool Equals(object obj) => obj is UberStateCondition other ? (Id.Equals(other.Id) && Target == other.Target) : false;
    }

    public static UberStateCondition toCond(this UberId id, int? target = null) => new UberStateCondition(id, target);

    public enum FakeUberGroups {
      TREE = 0,
      OPHER_WEAPON = 1,
      TWILLEN_SHARD = 2,
      GAME_CONDITION = 3
    }

    public enum Flag {
      [Description("NoHints")]
      NOHINTS,
      [Description("NoKSDoors")]
      NOKEYSTONES
    }

    public enum GameCondition {
      GAME_START = 0
    }

    public static Pickup GameStartPickup {
      get {
        var uberId = new UberId((int)FakeUberGroups.GAME_CONDITION, (int)GameCondition.GAME_START);
        return pickupMap.GetOrElse(uberId.toCond(), Multi.Empty);
      }
    }
    public static Dictionary<UberStateCondition, Pickup> pickupMap = new Dictionary<UberStateCondition, Pickup>();
    public static HashSet<Flag> flags= new HashSet<Flag>();

    public static void ReadSeed() {
      string seedName = File.ReadAllText(Randomizer.SeedNameFile);
      if (seedName.Trim() != "") {
        pickupMap.Clear();
        flags.Clear();
        HintsController.Reset();
        string line = "";

        foreach (string rawLine in File.ReadLines(Randomizer.SeedFile)) {
          try {
            if (rawLine.StartsWith("Flags: ")) {
              ProcessFlags(rawLine);
              continue;
            }
            line = rawLine.Split(new string[] { "//" }, StringSplitOptions.None)[0].Trim();
            if (line == "") continue;
            var frags = line.Split('|');
            string idAndMaybeTarget = frags[1];
            UberId uberId;
            int? target = null;
            if(idAndMaybeTarget.Contains("=")) {
              var idAndTarget = idAndMaybeTarget.Split('=');
              uberId = new UberId(int.Parse(frags[0]), int.Parse(idAndTarget[0]));
              target = int.Parse(idAndTarget[1]);
            } else {
              uberId = new UberId(int.Parse(frags[0]), int.Parse(idAndMaybeTarget));
            }
            var pickupType = (PickupType)byte.Parse(frags[2]);
            // Randomizer.Log($"uberId {uberId} -> {pickupType} {frags[3]}");

            if (uberId.GroupID == (int)FakeUberGroups.OPHER_WEAPON && frags.Length > 4)
              ShopController.SetCostMod((AbilityType)uberId.ID, float.Parse(frags[4], NumberStyles.Number, CultureInfo.GetCultureInfo("en-US")));
            else if (uberId.GroupID == (int)FakeUberGroups.TWILLEN_SHARD && frags.Length > 4)
              ShopController.SetCostMod((ShardType)uberId.ID, float.Parse(frags[4], NumberStyles.Number, CultureInfo.GetCultureInfo("en-US")));

            var pickup = BuildPickup(pickupType, frags[3]);
            if (pickup.IsHintItem())
              HintsController.AddHint(uberId.Loc().Zone, pickup as Checkable);
            var cond = uberId.toCond(target);
            pickupMap[cond] = pickupMap.GetOrElse(cond, Multi.Empty).Concat(pickup);
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
    public static bool HintsDisabled { get => flags.Contains(Flag.NOHINTS); }
    public static bool KSDoorsOpen { get => flags.Contains(Flag.NOKEYSTONES); }
    public static void ProcessFlags(string flagline) {
      if (flags.Count > 0)
        Randomizer.Warn("ProcessFlags", "called with non-empty flagline. Check seed for extra flaglines");
      foreach(var rawFlag in flagline.Replace("Flags:", "").Trim().Split(',')) {
        foreach(Flag flag in Enum.GetValues(typeof(Flag))) {
          if (rawFlag.Trim().ToLower() == flag.GetDescription().ToLower()) {
            flags.Add(flag);
          }
        }
      }
    }
    public static Pickup OpherWeapon(AbilityType ability) {
      var fakeId = new UberId((int)FakeUberGroups.OPHER_WEAPON, (int)ability);
      if (pickupMap.TryGetValue(fakeId.toCond(), out Pickup p)) {
        return p;
      }
      Randomizer.Log($"Couldn't find a valid Pickup for {ability}...");
      return Multi.Empty;
    }

    public static Pickup TwillenShard(ShardType shard) {
      var fakeId = new UberId((int)FakeUberGroups.TWILLEN_SHARD, (int)shard);
      if (pickupMap.TryGetValue(fakeId.toCond(), out Pickup p)) {
        return p;
      }
      Randomizer.Log($"Couldn't find a valid Sellable for {shard}...");
      return new Resource(ResourceType.Energy);
    }

    public static void OnTree(AbilityType ability) {
      var fakeId = new UberId((int)FakeUberGroups.TREE, (int)ability);
      if (pickupMap.TryGetValue(fakeId.toCond(), out Pickup p)) {
        p.Grant();
      }
      else {
        Randomizer.Log($"Tree {ability} not found in seed!");
      }
    }

    public static bool OnUberState(UberState state) {
      var id = state.GetUberId();
      var p = pickupMap.GetOrElse(id.toCond(), Multi.Empty).Concat(
              pickupMap.GetOrElse(id.toCond(state.ValueAsInt()), Multi.Empty));
      if (p.NonEmpty) {
        p.Grant();
        if (id.Loc().Type == LocType.Shard && !p.NeedsMagic()) // shard bug!
          InterOp.magic_function();
      } else {
        HintsController.OnLupoState(id);
      }
      return p.NonEmpty;
    }


    public static Pickup BuildPickup(PickupType type, string pickupData) {
      switch (type) {
        case PickupType.Ability:
          return new Ability((AbilityType)pickupData.ParseToByte());
        case PickupType.Shard:
          return new Shard((ShardType)pickupData.ParseToByte());
        case PickupType.SpiritLight:
          return new Cash(pickupData.ParseToInt());
        case PickupType.Resource:
          return new Resource((ResourceType)pickupData.ParseToByte());
        case PickupType.SystemCommand:
          return new SystemCommand((SysCommandType)pickupData.ParseToByte());
        case PickupType.Teleporter:
          return new Teleporter((TeleporterType)pickupData.ParseToByte());
        case PickupType.Message:
          var messageParts = pickupData.Split(new string[] { @"`(" }, StringSplitOptions.None);
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
        case PickupType.QuestEvent:
          return new QuestEvent((QuestEventType)pickupData.ParseToByte());
        case PickupType.UberState:
          var stateParts = pickupData.Split(',');
          if(stateParts.Length != 4) {
            Randomizer.Log($"malformed Uberstate specifier ${pickupData}", false);
            return new Message($"Invalid UberState ${pickupData}!");
          }
          var uberId = new UberId(
              stateParts[0].ParseToInt("BuildPickup.UberGroupId"),
              stateParts[1].ParseToInt("BuildPickup.UberId")
            );
          UberValue val = new UberValue();
          UberStateType stateType;
          switch(stateParts[2].Trim().ToLower()) {
            case "bool":
              val.Bool = stateParts[3].ParseToBool("BuildPickup.UberValue<Bool>");
              stateType = UberStateType.SerializedBooleanUberState;
              break;
            case "byte":
              val.Byte = stateParts[3].ParseToByte("BuildPickup.UberValue<Byte>");
              stateType = UberStateType.SerializedByteUberState;
              break;
            case "teleporter":
              val.Byte = stateParts[3].ParseToBool("BuildPickup.UberValue<Teleporter>") ? (byte)1 : (byte)0;
              stateType = UberStateType.SavePedestalUberState;
              break;
            case "int":
              val.Int= stateParts[3].ParseToInt("BuildPickup.UberValue<Int>");
              stateType = UberStateType.SerializedIntUberState;
              break;
            case "float":
              val.Float = stateParts[3].ParseToFloat("BuildPickup.UberValue<Float>");
              stateType = UberStateType.SerializedFloatUberState;
              break;
            default:
              Randomizer.Warn("BuildPickup", $"unknown ubervalue type {stateParts[3]}, assuming Int");
              val.Int = stateParts[3].ParseToInt("BuildPickup.UberValue<Int>");
              stateType = UberStateType.SerializedIntUberState;
              break;
          }
          var state = new UberState() { ID = uberId.ID, GroupID = uberId.GroupID, Type = stateType, Value = val};
          return new UberStatePickup(state);
        default:
          Randomizer.Error("BuildPickup", $"seed parse failure: unknown pickup ${pickupData}!!!", false);
          return new Message($"Unknown pickup ${pickupData}!!!");
      }
    }
    public static int Current { get => SaveController.Data?.FoundCount ?? 0; }
    public static int Total { get => pickupMap.Count; }
    public static string Progress {
      get => "Pickups: " + (Current == Total ? $"${Current}/{Total}$" : $"{Current}/{Total}");
    }
  }
}
