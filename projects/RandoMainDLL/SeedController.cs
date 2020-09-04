using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Globalization;
using System.IO;
using System.Linq;
using System.Runtime.InteropServices;
using System.Security.Policy;
using RandoMainDLL.Memory;

namespace RandoMainDLL {
  public enum PsuedoLocs {
    GAME_START = 0,
    RELOAD_SEED = 1,
    BINDING_ONE = 2,
    BINDING_TWO = 3,
    BINDING_THREE = 4,
    GOAL_MODES_COMPLETED = 11
  }
  public enum Flag {
    [Description("No Hints")]
    NOHINTS,
    [Description("No KS Doors")]
    NOKEYSTONES,
    [Description("Force Wisps")]
    ALLWISPS,
    [Description("Force Trees")]
    ALLTREES,
    [Description("Force Quests")]
    ALLQUESTS,
    [Description("No Free Sword")]
    NOSWORD,
    [Description("Rainy Marsh")]
    RAIN,
    [Description("Random Spawn")]
    RAND,
    [Description("World Tour")]
    RELIC_HUNT,
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
        if (Target == 0)
          Target = null;
      }
      else {
        Id = new UberId(groupId, int.Parse(rawTarget));
        Target = null;
      }
    }
    public override int GetHashCode() => Id.GetHashCode() + Target.GetValueOrDefault(-1);
    public override bool Equals(object obj) => obj is UberStateCondition other && (Id.Equals(other.Id) && Target == other.Target);
  }


  public static class SeedController {

    private static bool Sync = false;
    public static bool GrantingGoalModeLoc = false;
    public enum FakeUberGroups {
      TREE = 0,
      OPHER_WEAPON = 1,
      TWILLEN_SHARD = 2,
      MISC_CONTROL = 3
    }


    public static Pickup Pickup(this UberStateCondition cond) => pickupMap.GetOrElse(cond, Multi.Empty);
    public static Pickup Pickup(this PsuedoLocs gameCond) => new UberId((int)FakeUberGroups.MISC_CONTROL, (int)gameCond).toCond().Pickup();

    public static bool IsGoal(this UberStateCondition goalCond) {
      var loc = goalCond.Loc();
      if (loc.Type == LocType.Tree /*&& flags.Contains(Flag.ALLTREES) */)
        return true;
      if (flags.Contains(Flag.ALLWISPS) && UberStateController.Wisps.Exists(w => w.GetUberId().Equals(goalCond.Id)))
        return true;
      if (flags.Contains(Flag.ALLQUESTS) && UberStateController.Quests.Exists(q => q.GetUberId().Equals(goalCond.Id) && q.ValueAsInt() == goalCond.Target.GetValueOrDefault()))
        return true;
      return false;
    }

    public static bool OnCollect(this UberStateCondition cond) => pickupMap.GetOrElse(cond, Multi.Empty).Collect(cond.IsGoal());
    public static bool OnCollect(this PsuedoLocs gameCond) => new UberId((int)FakeUberGroups.MISC_CONTROL, (int)gameCond).toCond().OnCollect();

    public static Dictionary<UberStateCondition, Pickup> pickupMap = new Dictionary<UberStateCondition, Pickup>();
    public static HashSet<Flag> flags = new HashSet<Flag>();
    public static string SeedFile = "";
    public static String SeedName { get => SeedFile.Contains("\\") ? SeedFile.Substring(1 + SeedFile.LastIndexOf('\\')) : SeedFile; }
    public static void ReadSeed(bool init = false) {
      SeedFile = File.ReadAllText(Randomizer.SeedPathFile);
      if (File.Exists(SeedFile)) {
        pickupMap.Clear();
        shardNag.Clear();
        weaponNag.Clear();
        flags.Clear();
        Relic.Reset();
        HintsController.Reset();
        HasInternalSpoilers = true;
        string line = "";
        string coordsRaw = "";
        foreach (string rawLine in File.ReadLines(SeedFile)) {
          try {
            if (rawLine.StartsWith("Flags: ")) {
              ProcessFlags(rawLine);
              continue;
            }
            else if (rawLine.StartsWith("Spawn: ")) {
              coordsRaw = rawLine.Split(new string[] { "//" }, StringSplitOptions.None)[0].Trim().Substring(6);
              continue;
            }
            line = rawLine.Split(new string[] { "//" }, StringSplitOptions.None)[0].Trim();
            if (line == "") continue;

            if (HasInternalSpoilers && !rawLine.Contains("//"))
              HasInternalSpoilers = false;
            // if we got this far and there's no comment, it's a line without a spoiler

            var frags = line.Split('|').ToList();
            var cond = new UberStateCondition(frags[0].ParseToInt(), frags[1]);
            var pickupType = (PickupType)frags[2].ParseToByte();
            // Randomizer.Log($"uberId {uberId} -> {pickupType} {frags[3]}");

            if (cond.Id.GroupID == (int)FakeUberGroups.OPHER_WEAPON && frags.Count > 4 && float.TryParse(frags.Last(), NumberStyles.Number, CultureInfo.GetCultureInfo("en-US"), out float oMulti)) {
              if (!KSDoorsOpen && cond.Id.ID == (int)AbilityType.TeleportSpell) 
                cond.Id.ID = (int)AbilityType.Sentry; // :upside_down: :upside_down: :upside_down:
              else if (!HintsDisabled && cond.Id.ID == (int)AbilityType.WaterBreath) {
                cond = new UberStateCondition(new UberId((int)FakeUberGroups.MISC_CONTROL, (int)PsuedoLocs.GAME_START), null);
                pickupMap[cond] = new Message("Granting pickup overwritten by hint:").Concat(cond.Pickup());
              }
              else
                ShopController.SetCostMod((AbilityType)cond.Id.ID, oMulti);
              frags.RemoveAt(frags.Count - 1);
            }
            if (cond.Id.GroupID == (int)FakeUberGroups.TWILLEN_SHARD && frags.Count > 4 && float.TryParse(frags.Last(), NumberStyles.Number, CultureInfo.GetCultureInfo("en-US"), out float tMulti)) {
              ShopController.SetCostMod((ShardType)cond.Id.ID, tMulti);
              frags.RemoveAt(frags.Count - 1);
            }
            var extras = frags.Skip(4).ToList();
            bool needsMute = false;
            if(pickupType != PickupType.Message && extras.Contains("mute")) {
              extras.Remove("mute");
              needsMute = true;
            }
            var pickup = BuildPickup(pickupType, frags[3], extras, cond);
            pickup.Muted = needsMute;
            if (pickup.IsHintItem())
              HintsController.AddHint(cond.Loc().Zone, pickup as Checkable);
            pickupMap[cond] = cond.Pickup().Concat(pickup);
          }
          catch (Exception e) {
            Randomizer.Log($"Error parsing line: '{line}'\nError: {e.Message} \nStacktrace: {e.StackTrace}", false);
          }
        }
        if (coordsRaw != "") {
          var coords = coordsRaw.Split(',').ToList();
          var x = coords[0].ParseToFloat("SpawnX");
          var y = coords[1].ParseToFloat("SpawnY");
          InterOp.set_start_position(x, y);
        }
        else {
          InterOp.clear_start_position();
        }
        if (!init) {
          var flagPart = flags.Count > 0 ? $"\nFlags: {String.Join(", ", flags.Select((Flag flag) => flag.GetDescription()))}" : "";
          AHK.Print($"v{Randomizer.VERSION} - Loaded {SeedName}{flagPart}", 300);
          MapController.UpdateReachable();
        }

        // Should only be used for configuration options.
        if (Sync) {
          if (DiscordController.Initialized) {
            ConnectToServer();
          }
          else {
            DiscordController.ConnectToServer = true;
          }
        }
      }
      else {
        AHK.Print($"v{Randomizer.VERSION} - No seed found! Download a .wotwr file\nand double-click it to load", 360);
      }
    }

    public static void ConnectToServer() {
      if (!Randomizer.Client.IsConnected) {
        string url = AHK.IniString("Paths", "URL");
        if (url == string.Empty)
          url = "wotw.orirando.com";

        Randomizer.Client.Connect(url, DiscordController.User.Id);
      }

      UberStateController.QueueSyncedStateUpdate();
    }

    public static bool HasInternalSpoilers = false;
    public static bool HintsDisabled { get => flags.Contains(Flag.NOHINTS); }
    public static bool KSDoorsOpen { get => flags.Contains(Flag.NOKEYSTONES); }
    public static void ProcessFlags(string flagline) {
      if (flags.Count > 0)
        Randomizer.Warn("ProcessFlags", "called with non-empty flagline. Check seed for extra flaglines");
      var enumsByName = Enum.GetValues(typeof(Flag)).Cast<Flag>().ToDictionary(f => f.GetDescription().ToLower().Replace(" ", ""));
      foreach (var rawFlag in flagline.Replace("Flags:", "").Trim().Split(',')) {
        var flag = rawFlag.Trim().ToLower();
        if (flag == "nosword")
          flags.Add(Flag.NOSWORD);
        else if (enumsByName.TryGetValue(flag, out Flag f))
          flags.Add(f);
        else
          Randomizer.Warn("ParseFlags", $"Unknown flag {rawFlag}");
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
      if (!shardNag.Contains(shard)) {
        Randomizer.Log($"Couldn't find a valid Sellable for {shard}...");
        shardNag.Add(shard);
      }
      return new Resource(ResourceType.Energy);
    }

    public static bool OnUberState(UberState state) {
      var id = state.GetUberId();
      var valueCond = id.toCond(state.ValueAsInt());
      var p = id.toCond().Pickup().Concat(valueCond.Pickup());
      if (p.Collect(valueCond.IsGoal() || id.toCond().IsGoal())) {
        // handle shard bug! (don't need to check with target= bc shard locs don't have targets)
        if (id.toCond().Loc().Type == LocType.Shard)
          InterOp.refresh_shards();
      }
      else {
        HintsController.OnLupoState(id);
      }
      return p.NonEmpty;
    }


    public static Pickup BuildPickup(PickupType type, string pickupData, List<String> extras, UberStateCondition cond) {
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
        case PickupType.WeaponUpgrade:
          return WeaponUpgrade.ById[(WeaponUpgradeType)pickupData.ParseToInt()];
        case PickupType.BonusItem:
          return BonusItem.Build((BonusType)pickupData.ParseToInt(), cond.Loc().Zone);
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
              return new ConditionalStop(t, uid, extras[2].ParseToFloat("BuildPickup.InterruptCondValue"));
            case SysCommandType.SetState:
              if (extras.Count != 2) {
                Randomizer.Log($"malformed command specifier ${pickupData}", false);
                return new Message($"Invalid command ${pickupData}!");
              }
              var sysState = extras[0].ParseToByte("BuildPickup.SysState");
              if (!Enum.IsDefined(typeof(SysState), sysState)) {
                Randomizer.Log($"invalid state ${sysState}", false);
                return new Message($"Invalid command ${pickupData}!");
              }

              var value = extras[1].ParseToInt("BuildPickup.Value");
              return new SetStateCommand((SysState)sysState, value);
            case SysCommandType.Warp:
              if (extras.Count != 2) {
                Randomizer.Log($"malformed command specifier ${pickupData}", false);
                return new Message($"Invalid command ${pickupData}!");
              }
              var warpX = extras[0].ParseToFloat("BuildPickup.PositionX");
              var warpY = extras[1].ParseToFloat("BuildPickup.PositionY");
              return new WarpCommand(warpX, warpY);
            default:
              return new SystemCommand((SysCommandType)pickupData.ParseToByte());
          }
        case PickupType.Message:
          var messageParts = pickupData.Split(new string[] { @"`(" }, StringSplitOptions.None).ToList();
          List<string> msgs = new List<string>();
          int frames = 240;
          bool squelch = false;
          foreach (string extra in extras.Prepend(messageParts[0])) {
            if (extra.StartsWith("f=")) {
              int.TryParse(extra.Replace("f=", ""), out frames);
              continue;
            }
            else if (extra == "mute") {
              squelch = true;
              continue;
            }
            msgs.Add(extra);
          }
          var msg = String.Join("|", msgs);
          if (messageParts.Count > 1) {
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
          return new Message(msg, frames, squelch);
        case PickupType.UberState:
          var stateParts = pickupData.Split(',').ToList(); // support old syntax
          if (stateParts.Count < 4) {
            if (extras.Count < 3) {
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
                modifier = (UberValue old) => new UberValue(old.Byte + sign * val.Byte);
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
          var supCount = stateParts.Count > 4 ? stateParts[4].ParseToInt("SuppressionCounter") : 0;
          if (isModifier && modifier != null)
            return new UberStateModifier(state, modifier, stateParts[3]);
          return new UberStateSetter(state, supCount);
        default:
          Randomizer.Error("BuildPickup", $"seed parse failure: unknown pickup {type}|{pickupData}!!!", false);
          return new Message($"Unknown pickup {type}|{pickupData}!!!");
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

    public static bool DoesHowlExist() => flags.Contains(Flag.RAIN);

    public static bool IsDayTime() => !flags.Contains(Flag.RAIN) || AbilityType.SpiritEdge.HaveTree();

    public static int Current { get => SaveController.FoundCount; }
    public static int Total { get => pickupMap.Count; }
    public static string Progress {
      get => "Pickups: " + (Current == Total ? $"${Current}/{Total}$" : $"{Current}/{Total}") + GoalModeMessages(progress: true);
    }
    public static string GoalModeMessages(string met = "$", string unmet = "", bool progress = false) {
      if (InterOp.get_game_state() != GameState.Game)
        return ""; // don't even try!
      var msg = "";
      if (flags.Contains(Flag.ALLWISPS)) {
        var max = UberStateController.Wisps.Count;
        var amount = UberStateController.Wisps.Count((UberState s) => s.ValueOr(new UberValue(false)).Bool);
        var w = amount == max ? met : unmet;
        msg += $", {w}Wisps: {amount}/{max}{w}";
      }
      if (flags.Contains(Flag.ALLTREES)) {
        var amount = SaveController.TreeCount;
        var w = amount == 14 ? met : unmet;
        msg += $", {w}Trees: {amount}/{14}{w}";
      }
      if (flags.Contains(Flag.ALLQUESTS)) {
        var max = UberStateController.Quests.Count;
        var amount = UberStateController.Quests.Count((UberState s) => s.ValueOr(new UberValue(0)).Int == s.Value.Int);
        var w = amount == max ? met : unmet;
        msg += $", {w}Quests: {amount}/{max}{w}";
      }
      if (flags.Contains(Flag.RELIC_HUNT))
        msg += Relic.RelicMessage();
      return msg.StartsWith(", ") ? (progress ? "\n" : "") + msg.Substring(2) : msg;
    }

    public static void UpdateGoal() {
      bool finished = true;
      if (flags.Contains(Flag.ALLTREES)) {
        finished = finished && SaveController.TreeCount == 14;
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
      finished = finished && Relic.Valid;
      if (finished != UberGet.value(3, 11).Bool) {
        UberSet.Bool(3, 11, finished);
      }
    }
  }
}
