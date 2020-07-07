using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Globalization;
using System.IO;
using System.Linq;
using System.Security.Policy;
using RandoMainDLL.Memory;

namespace RandoMainDLL {
  public enum PsuedoLocs {
    GAME_START = 0,
    RELOAD_SEED = 1,
    BINDING_ONE = 2,
    BINDING_TWO = 3,
    BINDING_THREE = 4
  }
  public class UberStateCondition {
    public UberId Id;
    public int? Target;
    public UberStateCondition(UberId id, int? target) {
      Id = id;
      Target = target;
    }
    public UberStateCondition(int groupId, string rawTarget) {
      if (rawTarget.Contains("=")) {
        var idAndTarget = rawTarget.Split('=');
        Id = new UberId(groupId, int.Parse(idAndTarget[0]));
        Target = int.Parse(idAndTarget[1]);
      }
      else {
        Id = new UberId(groupId, int.Parse(rawTarget));
        Target = null;
      }
    }
    public override int GetHashCode() => Id.GetHashCode() + Target.GetValueOrDefault(-1);
    public override bool Equals(object obj) => obj is UberStateCondition other ? (Id.Equals(other.Id) && Target == other.Target) : false;
  }


  public static class SeedController {

    public enum FakeUberGroups {
      TREE = 0,
      OPHER_WEAPON = 1,
      TWILLEN_SHARD = 2,
      MISC_CONTROL = 3
    }

    public enum Flag {
      [Description("NoHints")]
      NOHINTS,
      [Description("NoKSDoors")]
      NOKEYSTONES,
      [Description("ForceWisps")]
      ALLWISPS,
      [Description("ForceTrees")]
      ALLTREES,
      [Description("ForceQuests")]
      ALLQUESTS
    }

    public static Pickup Pickup(this UberStateCondition cond) => pickupMap.GetOrElse(cond, Multi.Empty);
    public static Pickup Pickup(this PsuedoLocs gameCond) => new UberId((int)FakeUberGroups.MISC_CONTROL, (int)gameCond).toCond().Pickup();

    public static Dictionary<UberStateCondition, Pickup> pickupMap = new Dictionary<UberStateCondition, Pickup>();
    public static HashSet<Flag> flags = new HashSet<Flag>();
    public static string SeedFile = "";
    public static String SeedName { get => SeedFile.Contains("\\") ? SeedFile.Substring(1+SeedFile.LastIndexOf('\\')) : SeedFile;  }
    public static void ReadSeed(bool init=false) {
      SeedFile = File.ReadAllText(Randomizer.SeedPathFile);
      if (File.Exists(SeedFile)) {
        pickupMap.Clear();
        shardNag.Clear();
        weaponNag.Clear();
        flags.Clear();
        HintsController.Reset();
        string line = "";

        foreach (string rawLine in File.ReadLines(SeedFile)) {
          try {
            if (rawLine.StartsWith("Flags: ")) {
              ProcessFlags(rawLine);
              continue;
            }
            line = rawLine.Split(new string[] { "//" }, StringSplitOptions.None)[0].Trim();
            if (line == "") continue;
            var frags = line.Split('|').ToList();
            string idAndMaybeTarget = frags[1];
            var cond = new UberStateCondition(int.Parse(frags[0]), frags[1]);
            var pickupType = (PickupType)byte.Parse(frags[2]);
            // Randomizer.Log($"uberId {uberId} -> {pickupType} {frags[3]}");

            if (cond.Id.GroupID == (int)FakeUberGroups.OPHER_WEAPON && frags.Count > 4)
              ShopController.SetCostMod((AbilityType)cond.Id.ID, float.Parse(frags[4], NumberStyles.Number, CultureInfo.GetCultureInfo("en-US")));
            else if (cond.Id.GroupID == (int)FakeUberGroups.TWILLEN_SHARD && frags.Count > 4)
              ShopController.SetCostMod((ShardType)cond.Id.ID, float.Parse(frags[4], NumberStyles.Number, CultureInfo.GetCultureInfo("en-US")));

            var pickup = BuildPickup(pickupType, frags[3], frags.Skip(4).ToList());
            if (pickup.IsHintItem())
              HintsController.AddHint(cond.Loc().Zone, pickup as Checkable);
            pickupMap[cond] = cond.Pickup().Concat(pickup);
          } catch (Exception e) {
            Randomizer.Log($"Error parsing line: '{line}'\nError: {e.Message} \nStacktrace: {e.StackTrace}", false);
          }
        }
        if(!init)
          AHK.Print($"v{Randomizer.VERSION} - Loaded {SeedName}", 300);
      } else {
        AHK.Print($"v{Randomizer.VERSION} - No seed found! Download a .wotwr file\nand double-click it to load", 360);
      }
    }
    public static bool HintsDisabled { get => flags.Contains(Flag.NOHINTS); }
    public static bool KSDoorsOpen { get => flags.Contains(Flag.NOKEYSTONES); }
    public static void ProcessFlags(string flagline) {
      if (flags.Count > 0)
        Randomizer.Warn("ProcessFlags", "called with non-empty flagline. Check seed for extra flaglines");
      foreach (var rawFlag in flagline.Replace("Flags:", "").Trim().Split(',')) {
        foreach (Flag flag in Enum.GetValues(typeof(Flag))) {
          if (rawFlag.Trim().ToLower() == flag.GetDescription().ToLower()) {
            flags.Add(flag);
          }
        }
      }
    }
    public static HashSet<ShardType> shardNag = new HashSet<ShardType>();
    public static HashSet<AbilityType> weaponNag = new HashSet<AbilityType>();

    public static Pickup OpherWeapon(AbilityType ability) {
      var fakeId = new UberId((int)FakeUberGroups.OPHER_WEAPON, (int)ability);
      if (pickupMap.TryGetValue(fakeId.toCond(), out Pickup p)) {
        return p;
      }
      if (!weaponNag.Contains(ability)) {
        Randomizer.Log($"Couldn't find a valid Sellable for {ability}...");
        weaponNag.Add(ability);
      }
      return Multi.Empty;
    }


    public static Pickup TwillenShard(ShardType shard) {
      var fakeId = new UberId((int)FakeUberGroups.TWILLEN_SHARD, (int)shard);
      if (pickupMap.TryGetValue(fakeId.toCond(), out Pickup p)) {
        return p;
      }
      if(!shardNag.Contains(shard)) {
        Randomizer.Log($"Couldn't find a valid Sellable for {shard}...");
        shardNag.Add(shard);
      }
      return new Resource(ResourceType.Energy);
    }

    public static void OnTree(AbilityType ability) {
      var fakeId = new UberId((int)FakeUberGroups.TREE, (int)ability);
      if (pickupMap.TryGetValue(fakeId.toCond(), out Pickup p)) {
        p.Grant();
      } else {
        Randomizer.Log($"Tree {ability} not found in seed!");
      }
    }

    public static bool OnUberState(UberState state) {
      var id = state.GetUberId();
      var p = id.toCond().Pickup().Concat(
              id.toCond(state.ValueAsInt()).Pickup());
      if (p.NonEmpty) {
        p.Grant();
        // handle shard bug! (don't need to check with target= bc shard locs don't have targets)
        if (id.toCond().Loc().Type == LocType.Shard)
          InterOp.refresh_shards();
      }
      else {
        HintsController.OnLupoState(id);
      }
      return p.NonEmpty;
    }


    public static Pickup BuildPickup(PickupType type, string pickupData, List<String> extras) {
      switch (type) {
        case PickupType.Ability:
          return Ability.Build(pickupData);
        case PickupType.Shard:
          return Shard.Build(pickupData);
        case PickupType.Teleporter:
          return Teleporter.Build(pickupData);
        case PickupType.QuestEvent:
          return QuestEvent.Build(pickupData);
        case PickupType.SpiritLight:
          return new Cash(pickupData.ParseToInt());
        case PickupType.Resource:
          return new Resource((ResourceType)pickupData.ParseToByte());
        case PickupType.SystemCommand:
          var t = (SysCommandType)pickupData.ParseToByte();
          switch (t) {
            case SysCommandType.StopIfEqual:
            case SysCommandType.StopIfGreater:
            case SysCommandType.StopIfLess:
              if (extras.Count != 3) {
                Randomizer.Log($"malformed command specifier ${pickupData}", false);
                return new Message($"Invalid command ${pickupData}!");
              }
              var uid = new UberId(
                extras[0].ParseToInt("BuildPickup.UberGroupId"),
                extras[1].ParseToInt("BuildPickup.UberId")
              );
              return new ConditionalStop(t, uid, extras[2].ParseToInt("BuildPickup.InterruptCondValue"));
            default:
              return new SystemCommand((SysCommandType)pickupData.ParseToByte());
          }
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
        case PickupType.UberState:
          var stateParts = pickupData.Split(',').ToList(); // support old syntax
          if (stateParts.Count != 4) {
            if(extras.Count != 3) {
              Randomizer.Log($"malformed Uberstate specifier ${pickupData}", false);
              return new Message($"Invalid UberState ${pickupData}!");
            }
            stateParts = stateParts.Take(1).ToList();
            stateParts.AddRange(extras);
          }
          var uberId = new UberId(
              stateParts[0].ParseToInt("BuildPickup.UberGroupId"),
              stateParts[1].ParseToInt("BuildPickup.UberId")
            );
          UberValue val = new UberValue();
          bool isModifier = stateParts[3].StartsWith("+") || stateParts[3].StartsWith("-");
          int sign = stateParts[3].StartsWith("-") ? -1 : 1;
          Func<UberValue, UberValue> modifier = null;
          var rawVal = isModifier ? stateParts[3].Substring(1) : stateParts[3];
          var stateType = uberTypeFromString(stateParts[2]);
          switch (stateType) {
            case UberStateType.SerializedBooleanUberState:
              if (isModifier)
                Randomizer.Warn("BuildPickup.UberValue", $"Error parsing {pickupData}: {stateParts[2]} is not a valid modifier type");
              val.Bool = rawVal.ParseToBool("BuildPickup.UberValue<Bool>");
              break;
            case UberStateType.SerializedByteUberState:
              val.Byte = rawVal.ParseToByte("BuildPickup.UberValue<Byte>");
              if (isModifier)
                modifier = (UberValue old) => new UberValue(old.Byte + sign*val.Byte);
              break;
            case UberStateType.SavePedestalUberState:
              if (isModifier)
                Randomizer.Warn("BuildPickup.UberValue", $"Error parsing {pickupData}: {stateParts[2]} is not a valid modifier type");
              val.Byte = rawVal.ParseToBool("BuildPickup.UberValue<Teleporter>") ? (byte)1 : (byte)0;
              break;
            case UberStateType.SerializedIntUberState:
              val.Int = rawVal.ParseToInt("BuildPickup.UberValue<Int>");
              if (isModifier)
                modifier = (UberValue old) => new UberValue(old.Int + sign * val.Int);
              break;
            case UberStateType.SerializedFloatUberState:
              val.Float = rawVal.ParseToFloat("BuildPickup.UberValue<Float>");
              if (isModifier)
                modifier = (UberValue old) => new UberValue(old.Float + sign * val.Float);
              break;
            default:
              Randomizer.Warn("BuildPickup", $"unknown ubervalue type {stateParts[2]}, assuming Int");
              val.Int = rawVal.ParseToInt("BuildPickup.UberValue<Int>");
              break;
          }
          var state = new UberState() { ID = uberId.ID, GroupID = uberId.GroupID, Type = stateType, Value = val };
          if (isModifier && modifier != null)
            return new UberStateModifier(state, modifier, stateParts[3]);
          return new UberStateSetter(state);
        default:
          Randomizer.Error("BuildPickup", $"seed parse failure: unknown pickup ${pickupData}!!!", false);
          return new Message($"Unknown pickup ${pickupData}!!!");
      }
    }
    public static UberStateType uberTypeFromString(String raw) {
      switch (raw.Trim().ToLower()) {
        case "bool":
          return UberStateType.SerializedBooleanUberState;
        case "byte":
          return UberStateType.SerializedByteUberState;
        case "teleporter":
          return UberStateType.SavePedestalUberState;
        case "int":
          return UberStateType.SerializedIntUberState;
        case "float":
          return UberStateType.SerializedFloatUberState;
        default:
          Randomizer.Warn("BuildPickup", $"unknown ubervalue type {raw}, assuming Int");
          return UberStateType.SerializedIntUberState;
      }
    }

    public static int Current { get => SaveController.Data?.FoundCount ?? 0; }
    public static int Total { get => pickupMap.Count; }
    public static string Progress {
      get => "Pickups: " + (Current == Total ? $"${Current}/{Total}$" : $"{Current}/{Total}") + GoalModeMessages();
    }
    public static string GoalModeMessages(string met = "$", string unmet = "") {
      var msg = "";
      if (flags.Contains(Flag.ALLWISPS)) {
        var max = UberStateController.Wisps.Count;
        var amount = UberStateController.Wisps.Count((UberState s) => s.ValueOr(new UberValue(false)).Bool);
        var w = amount == max ? met : unmet;
        msg += $", {w}Wisps: {amount}/{max}{w}";
      }
      if (flags.Contains(Flag.ALLTREES)) {
        var amount = SaveController.Data.TreesActivated.Count;
        var w = amount == 14 ? met : unmet;
        msg += $", {w}Trees: {amount}/{14}{w}";
      }
      if (flags.Contains(Flag.ALLQUESTS)) {
        var max = UberStateController.Quests.Count;
        var amount = UberStateController.Quests.Count((UberState s) => s.ValueOr(new UberValue(0)).Int == s.Value.Int);
        var w = amount == max ? met : unmet;
        msg += $", {w}Quests: {amount}/{max}{w}";
      }
      return msg.StartsWith(", ") ? "\n" + msg.Substring(2) : msg;
    }
      public static void UpdateGoal() {
      bool finished = true;
      if (flags.Contains(Flag.ALLTREES)) {
        finished = finished && SaveController.Data.TreesActivated.Count == 14;
      }

      if (finished && flags.Contains(Flag.ALLWISPS)) {
        foreach (var state in UberStateController.Wisps) {
          finished = finished && state.ValueOr(new UberValue(false)).Bool;
          if (!finished)
            break;
        }
      }

      if (finished && flags.Contains(Flag.ALLQUESTS)) {
        foreach (var state in UberStateController.Quests) {
          finished = finished && state.ValueOr(new UberValue(0)).Int == state.Value.Int;
          if (!finished)
            break;
        }
      }
        
      InterOp.lock_shriek_goal(!finished);
    }
  }
}
