using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Globalization;
using System.IO;
using System.Linq;
using System.Net.Configuration;
using System.Runtime.InteropServices;
using System.Security.Policy;
using System.Text.RegularExpressions;
using System.Threading;
using Newtonsoft.Json;
using RandoMainDLL.Memory;

namespace RandoMainDLL {
  public enum PsuedoLocs {
    GAME_START = 0,
    RELOAD_SEED = 1,
    BINDING_ONE = 2,
    BINDING_TWO = 3,
    BINDING_THREE = 4,
    BINDING_FOUR = 5,
    BINDING_FIVE = 6,
    LOAD_FILE  = 7,  // TODO: implement this lmao
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
    public UberStateCondition(int groupId, int id, int target) {
      Id = new UberId(groupId, id);
      if(target > 0)
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
    public bool Met() {
      var value = InterOp.get_uber_state_value(Id.GroupID, Id.ID);
      return Target.HasValue ? Target.Value >= value : value > 0;
    }
    
    public override string ToString() => $"({Id.GroupID}, {Id.ID}){(Target.HasValue ?  $"={Target.Value}" : "")}";
    public override int GetHashCode() => Id.GetHashCode() + Target.GetValueOrDefault(-1);
    public override bool Equals(object obj) => obj is UberStateCondition other && (Id.Equals(other.Id) && Target == other.Target);
  }


  public static class SeedController {

    public static bool GrantingGoalModeLoc = false;

    public static SeedGenSettings Settings = new SeedGenSettings();
    public enum FakeUberGroups {
      TREE = 0,
      OPHER_WEAPON = 1,
      TWILLEN_SHARD = 2,
      MISC_CONTROL = 3
    }


    public static bool HasPickup(this UberStateCondition cond) => pickupMap.ContainsKey(cond);
    public static Pickup Pickup(this UberStateCondition cond) => pickupMap.GetOrElse(cond, Multi.Empty);
    public static Pickup Pickup(this PsuedoLocs gameCond) => new UberId((int)FakeUberGroups.MISC_CONTROL, (int)gameCond).toCond().Pickup();

    public static bool IsGoal(this UberStateCondition goalCond) {
      var loc = goalCond.Loc();
      if (loc.Type == LocType.Tree /*&& flags.Contains(Flag.ALLTREES) */)
        return true;
      if (Flags.Contains(Flag.ALLWISPS) && UberStateController.Wisps.Exists(w => w.GetUberId().Equals(goalCond.Id)))
        return true;
      if (Flags.Contains(Flag.ALLQUESTS) && UberStateController.Quests.Exists(q => q.GetUberId().Equals(goalCond.Id) && q.ValueAsInt() == goalCond.Target.GetValueOrDefault()))
        return true;
      return false;
    }

    public static bool OnCollect(this UberStateCondition cond) => pickupMap.GetOrElse(cond, Multi.Empty).Collect(cond);
    public static bool OnCollect(this PsuedoLocs gameCond) => new UberId((int)FakeUberGroups.MISC_CONTROL, (int)gameCond).toCond().OnCollect();

    public static Dictionary<UberStateCondition, Pickup> pickupMap = new Dictionary<UberStateCondition, Pickup>();
    public static HashSet<Flag> Flags = new HashSet<Flag>();
    public static string SeedFile = "";
    public static String SeedName { get => SeedFile.Contains("\\") ? SeedFile.Substring(1 + SeedFile.LastIndexOf('\\')) : SeedFile; }
    public static void ReadSeed(bool init = false) {
      SeedFile = File.ReadAllText(Randomizer.SeedPathFile);
      if (File.Exists(SeedFile)) {
        pickupMap.Clear();
        Flags.Clear();
        Relic.Reset();
        HintsController.Reset();
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
            else if (rawLine.StartsWith("// Config: ")) {
              var configRaw = rawLine.Replace("// Config: ", "");
              Settings = JsonConvert.DeserializeObject<SeedGenSettings>(configRaw);
            } else if (rawLine.StartsWith("MULTISTATES: ")) {
              InterOp.set_multi_bool_count(rawLine.Replace("MULTISTATES: ", "").ParseToInt("ReadSeed.Multistates"));
              continue;
            }
            line = rawLine.Split(new string[] { "//" }, StringSplitOptions.None)[0].Trim();
            if (line == "") continue;
            var ptrRegex = new Regex(@"\$\(([0-9]+)\|([0-9]+)\)", RegexOptions.Compiled);
            if(ptrRegex.IsMatch(line)) {
              line = Regex.Replace(line, @"\$\(([0-9]+)\|([0-9]+)\)", "$($1;$2)");
            }
            var frags = line.Split('|').ToList();
            var cond = new UberStateCondition(frags[0].ParseToInt(), frags[1]);
            var pickupType = (PickupType)frags[2].ParseToByte();

            // legacy shop cost support
            if (cond.Id.GroupID == (int)FakeUberGroups.OPHER_WEAPON && cond.Id.ID < 10000 && frags.Count() > 4 && float.TryParse(frags.Last(), NumberStyles.Number, CultureInfo.GetCultureInfo("en-US"), out float oMulti)) {
              ((AbilityType)cond.Id.ID).Slot().CostMultiplier = oMulti + 1; 
              frags.RemoveAt(frags.Count() - 1);
            }
            if (cond.Id.GroupID == (int)FakeUberGroups.TWILLEN_SHARD && cond.Id.ID < 100 && frags.Count() > 4 && float.TryParse(frags.Last(), NumberStyles.Number, CultureInfo.GetCultureInfo("en-US"), out float tMulti)) {
              ((ShardType)cond.Id.ID).Slot().CostMultiplier = tMulti + 1;
              frags.RemoveAt(frags.Count() - 1);
            }

            var extras = frags.Skip(4).ToList();
            bool needsMute = false;
            if(pickupType != PickupType.Message && extras.Contains("mute")) {
              extras.Remove("mute");
              needsMute = true;
            }
            var pickup = BuildPickup(pickupType, frags[3], extras, cond);
            pickup.Muted = needsMute;
            if (pickup.IsKeyItem())
              HintsController.AddHint(cond.Loc().Zone, pickup as Checkable);
            if (pickup is Checkable c)
              HintsController.CheckableLocs[c] = cond.Loc().Zone;
            pickupMap[cond] = cond.Pickup().Concat(pickup);
          }
          catch (Exception e) {
            Randomizer.Log($"Error parsing line: '{line}'\nError: {e.Message} \nStacktrace: {e.StackTrace}", false);
          }
        }
        Total = pickupMap.Count(p => p.Key.Loc() != LocData.Void);
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
          var flagPart = Flags.Count > 0 ? $"\nFlags: {String.Join(", ", Flags.Select((Flag flag) => flag.GetDescription()))}" : "";
          AHK.Print($"v{Randomizer.VERSION} - Loaded {SeedName}{flagPart}", 300);
          MapController.UpdateReachable();
        }

      }
      else {
        AHK.Print($"v{Randomizer.VERSION} - No seed found! Download a .wotwr file\nand double-click it to load", 360);
      }
    }


    public static bool HasInternalSpoilers { get => Settings.Spoilers; }
    public static bool KSDoorsOpen { get => Flags.Contains(Flag.NOKEYSTONES); }
    public static void ProcessFlags(string flagline) {
      if (Flags.Count > 0)
        Randomizer.Warn("ProcessFlags", "called with non-empty flagline. Check seed for extra flaglines");
      var enumsByName = Enum.GetValues(typeof(Flag)).Cast<Flag>().ToDictionary(f => f.GetDescription().ToLower().Replace(" ", ""));
      foreach (var rawFlag in flagline.Replace("Flags:", "").Trim().Split(',')) {
        var flag = rawFlag.Trim().ToLower();
        if (flag == "nosword")
          Flags.Add(Flag.NOSWORD);
        else if (enumsByName.TryGetValue(flag, out Flag f))
          Flags.Add(f);
        else
          Randomizer.Warn("ParseFlags", $"Unknown flag {rawFlag}");
      }
    }

    public static bool OnUberState(UberState state) {
      var id = state.GetUberId();
      var baseCond = id.toCond();
      var valueCond = id.toCond(state.ValueAsInt());
      baseCond.OnCollect();
      valueCond.OnCollect();
      if (baseCond.Loc().Type == LocType.Shard)
        InterOp.refresh_shards();
      return baseCond.HasPickup() || valueCond.HasPickup();
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
            case SysCommandType.SetResource:
              if (extras.Count != 2) {
                Randomizer.Log($"malformed command specifier {pickupData}", false);
                return new Message($"Invalid command {pickupData}!");
              }
              return new SetResource((ResourceType)extras[0].ParseToByte("BuildPickup.SetResourceType"), extras[1].ParseToInt("BuildPickup.SetResourceValue"));
            case SysCommandType.SetHealth:
              if (extras.Count != 1) {
                Randomizer.Log($"malformed command specifier {pickupData}", false);
                return new Message($"Invalid command {pickupData}!");
              }
              return new SetHealth(extras[0].ParseToFloat("BuildPickup.SetHealthValue"));
            case SysCommandType.SetEnergy:
              if (extras.Count != 1) {
                Randomizer.Log($"malformed command specifier {pickupData}", false);
                return new Message($"Invalid command {pickupData}!");
              }
              return new SetEnergy(extras[0].ParseToFloat("BuildPickup.SetEnergyValue"));
            case SysCommandType.AHKSignal:
              if (extras.Count != 1) {
                Randomizer.Log($"malformed command specifier {pickupData}", false);
                return new Message($"Invalid command {pickupData}!");
              }
              return new SendAHKSignal(extras[0]);
            case SysCommandType.SetSpiritLight:
              if (extras.Count != 1) {
                Randomizer.Log($"malformed command specifier {pickupData}", false);
                return new Message($"Invalid command {pickupData}!");
              }
              return new SetSpiritLight(extras[0].ParseToInt("BuildPickup.SetSpiritLightValue"));
            case SysCommandType.StopIfEqual:
            case SysCommandType.StopIfGreater:
            case SysCommandType.StopIfLess:
              if (extras.Count != 3) {
                Randomizer.Log($"malformed command specifier {pickupData}", false);
                return new Message($"Invalid command {pickupData}!");
              }
              var uid = new UberId(
                extras[0].ParseToInt("BuildPickup.UberGroupId"),
                extras[1].ParseToInt("BuildPickup.UberId")
              );
              return new ConditionalStop(t, uid, extras[2].ParseToFloat("BuildPickup.InterruptCondValue"));
            case SysCommandType.GrantIfEqual:
            case SysCommandType.GrantIfGreater:
            case SysCommandType.GrantIfLess:
              if (extras.Count < 5) {
                Randomizer.Log($"malformed command specifier {pickupData}", false);
                return new Message($"Invalid command {pickupData}!");
              }
              var guid = new UberId(
                extras[0].ParseToInt("BuildPickup.UberGroupId"),
                extras[1].ParseToInt("BuildPickup.UberId")
              );
              var p = BuildPickup((PickupType)extras[3].ParseToByte("BuildPickup.GrantIfType"), extras[4], extras.Skip(5).ToList(), cond);
              return new GrantIf(t, guid, extras[2].ParseToFloat("BuildPickup.GrantIfTargetValue"), p);

            case SysCommandType.SetState:
              if (extras.Count != 2) {
                Randomizer.Log($"malformed command specifier {pickupData}", false);
                return new Message($"Invalid command {pickupData}!");
              }
              var sysState = extras[0].ParseToByte("BuildPickup.SysState");
              if (!Enum.IsDefined(typeof(SysState), sysState)) {
                Randomizer.Log($"invalid state {sysState}", false);
                return new Message($"Invalid command {pickupData}!");
              }

              var value = extras[1].ParseToInt("BuildPickup.Value");
              return new SetStateCommand((SysState)sysState, value);
            case SysCommandType.Warp:
              if (extras.Count != 2) {
                Randomizer.Log($"malformed command specifier {pickupData}", false);
                return new Message($"Invalid command {pickupData}!");
              }
              var warpX = extras[0].ParseToFloat("BuildPickup.PositionX");
              var warpY = extras[1].ParseToFloat("BuildPickup.PositionY");
              return new WarpCommand(warpX, warpY);
            case SysCommandType.Bind:
              if (extras.Count != 2) {
                Randomizer.Log($"malformed command specifier {pickupData}", false);
                return new Message($"Invalid command {pickupData}!");
              }
              var slot = extras[0].ParseToByte("BuildPickup.BindSlot");
              var equip = extras[1].ParseToInt("BuildPickup.BindTarget");
              if (!Enum.IsDefined(typeof(EquipmentType), equip)) {
                Randomizer.Log($"invalid equipment type {equip}", false);
                return new Message($"Invalid command {pickupData}!");
              }
              return new BindCommand(slot, (EquipmentType)equip);

            case SysCommandType.StartTimer:
            case SysCommandType.StopTimer:
              if (extras.Count != 2) {
                Randomizer.Log($"malformed command specifier {pickupData}", false);
                return new Message($"Invalid command {pickupData}!");
              }
              var incGroup = extras[0].ParseToInt("BuildPickup.IncGroup");
              var incState = extras[1].ParseToInt("BuildPickup.IncState");
              return new TimerCommand(
                t,
                new UberId(incGroup, incState)
              );
            case SysCommandType.RedirectState:
              if (extras.Count != 2) {
                Randomizer.Log($"malformed command specifier {pickupData}", false);
                return new Message($"Invalid command {pickupData}!");
              }
              var redirectState = extras[0].ParseToInt("BuildPickup.RedirectState");
              var redirectValue = extras[1].ParseToInt("BuildPickup.RedirectValue");
              return new RedirectStateCommand(redirectState, redirectValue);
            default:
              return new SystemCommand((SysCommandType)pickupData.ParseToByte());
          }
        case PickupType.ZoneHint:
          if (extras.Count == 1) return new ZoneHint((ZoneType)pickupData.ParseToByte(), (HintType)extras[0].ParseToByte()); // 12|x|y, y is hint type
          return new ZoneHint((ZoneType)pickupData.ParseToByte());
        case PickupType.CheckableHint:
          return new CheckableHint(pickupData);
        case PickupType.Message:
          var messageParts = pickupData.Split(new string[] { @"`(" }, StringSplitOptions.None).ToList();
          List<string> msgs = new List<string>();
          int frames = 240;
          float? pos = null;
          bool squelch = false;
          bool clear = true;
          bool immediate = false;
          bool mute = false;
          bool prepend = false;
          foreach (string extra in extras.Prepend(messageParts[0])) {
            if (extra.StartsWith("f=")) {
              int.TryParse(extra.Replace("f=", ""), out frames);
              continue;
            }
            else if(extra.StartsWith("p=")) {
              if (float.TryParse(extra.Replace("p=", ""), out float p))
                pos = p;
              else 
                Randomizer.Warn("SeedParse.Message.p=", $"Failed to parse a float from {p}");
              continue;
            }
            else if (extra.ToLowerInvariant() == "mute") {
              squelch = true;
              continue;
            }
            else if (extra.ToLowerInvariant() == "noclear") {
              clear = false;
              continue;
            }
            else if (extra.ToLowerInvariant() == "instant") {
              immediate = true;
              continue;
            }
            else if (extra.ToLowerInvariant() == "quiet") {
              mute = true;
              continue;
            }
            else if (extra.ToLowerInvariant() == "prepend") {
              prepend = true;
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
              else if (cmd.StartsWith("p=")) {
                if (float.TryParse(cmd.Replace("p=", ""), out float p))
                  pos = p;
                else
                  Randomizer.Warn("SeedParse.Message.p=", $"Failed to parse a float from {p}");
                continue;
              }
              else if (cmd.ToLowerInvariant() == "mute") {
                squelch = true;
                continue;
              }
              else if (cmd.ToLowerInvariant() == "noclear") {
                clear = false;
                continue;
              }
              else if (cmd.ToLowerInvariant() == "instant") {
                immediate = true;
                continue;
              }
              else if (cmd.ToLowerInvariant() == "quiet") {
                mute = true;
                continue;
              }
              else if (cmd.ToLowerInvariant() == "prepend") {
                prepend = true;
                continue;
              }
            }
          }
          return new Message(msg, frames, squelch, pos, clear, immediate, mute, prepend);
        case PickupType.UberState:
          var stateParts = pickupData.Split(',').ToList(); // support old syntax
          if (stateParts.Count < 4) {
            if (extras.Count < 3) {
              Randomizer.Log($"malformed Uberstate specifier {pickupData}", false);
              return new Message($"Invalid UberState {pickupData}!");
            }
            stateParts = stateParts.Take(1).ToList();
            stateParts.AddRange(extras);
          }
          var uberId = new UberId(
              stateParts[0].ParseToInt("BuildPickup.UberGroupId"),
              stateParts[1].ParseToInt("BuildPickup.UberId")
            );
          var stateType = uberTypeFromString(stateParts[2]);
          Func<UberValue, float> modifier = GetUberSetter(stateType, stateParts[3]);
          return new UberStateModifier(uberId, modifier, stateParts[3]);
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

    private static Random UberRand = new Random();

    private static Func<UberValue, float> GetUberSetter(UberStateType type, string mod) {
      bool isModifier = mod.StartsWith("+") || mod.StartsWith("-");
      int sign = mod.StartsWith("-") ? -1 : 1;
      if (isModifier)
        mod = mod.Substring(1);
      Regex rangeRegex = new Regex(@"\[([^,\]]+),([^,\]]+)\]");
      var m = rangeRegex.Match(mod);
      var start = genFromFrag(m.Groups[1].Value, type);
      var end = genFromFrag(m.Groups[2].Value, type);

      if (m.Success) {
        switch(type) {
          case UberStateType.SerializedBooleanUberState:
          case UberStateType.SavePedestalUberState:
            if (isModifier)
              Randomizer.Warn("GetUberSetter.Rand", $"Error parsing {mod}: {type} is binary and can't be modded. Randomizing...");
            return (UberValue v) => UberRand.Next(1) > 0 ? 1f : 0f;
          case UberStateType.SerializedByteUberState:
            return (UberValue old) => {
              byte lo = Convert.ToByte(start());
              byte hi = Convert.ToByte(end());
              if (lo > hi)
                (lo, hi) = (hi, lo);
              byte rval = (byte)UberRand.Next(lo, hi);
              if (isModifier)
                return Convert.ToSingle(old.Byte + sign * rval);
              return Convert.ToSingle(rval);
            };
          case UberStateType.SerializedIntUberState:
            return (UberValue old) => {
              int lo = Convert.ToInt32(start());
              int hi = Convert.ToInt32(end());
              if (lo > hi)
                (lo, hi) = (hi, lo);
              int rval = UberRand.Next(lo, hi);
              if (isModifier)
                return Convert.ToSingle(old.Int + sign * rval);
              return Convert.ToSingle(rval);
            };
          case UberStateType.SerializedFloatUberState:
              return (UberValue old) => {
                float lo = start();
                float hi = end();
                if(lo > hi) 
                  (lo, hi) = (hi, lo);
                float rval = lo + (float)UberRand.NextDouble() * (hi - lo);
                if (isModifier)
                  return old.Float + sign * rval;
                return rval;
              };
        }
      }
      var target = genFromFrag(mod, type);
      switch (type) {
        case UberStateType.SerializedBooleanUberState:
        case UberStateType.SavePedestalUberState:
          if (isModifier)
            Randomizer.Warn("GetUberSetter.Rand", $"Error parsing {mod}: {type} is binary and can't be modded. Randomizing...");
          return (UberValue v) => target() > 0 ? 1f : 0f;
        case UberStateType.SerializedByteUberState:
          return (UberValue old) => {
            byte rval = Convert.ToByte(target());
            if (isModifier)
              return Convert.ToSingle(old.Byte + sign * rval);
            return Convert.ToSingle(rval);
          };
        case UberStateType.SerializedIntUberState:
          return (UberValue old) => {
            int rval = Convert.ToInt32(target());
            if (isModifier)
              return Convert.ToSingle(old.Int + sign * rval);
            return Convert.ToSingle(rval);
          };
        case UberStateType.SerializedFloatUberState:
          return (UberValue old) => {
            float rval = target();
            if (isModifier)
              return old.Float + sign * rval;
            return rval;
          };
      }
      Randomizer.Error($"GetUberSetter({type}, {mod})", "fell through all cases, zeroing out...");
      return (UberValue old) => 0f;
    }

    private static Func<float> genFromFrag(string frag, UberStateType targetType) {
      Regex uberMsg = new Regex(@"\$\(([0-9]+);([0-9]+)\)", RegexOptions.Compiled);
      var m = uberMsg.Match(frag);
      if (m.Success) {
        var uid = new UberId(m.Groups[1].Value.ParseToInt("genFromFrag.GID"), m.Groups[2].Value.ParseToInt("genFromFrag.GID"));
        return () => UberGet.AsFloat(uid);
      }
      switch (targetType) {
        case UberStateType.SavePedestalUberState:
        case UberStateType.SerializedBooleanUberState:
          return () => frag.ParseToBool("genFromFragRaw<Bool>") ? 1f : 0f;
        case UberStateType.SerializedByteUberState:
          return () => Convert.ToSingle(frag.ParseToByte("genFromFragRaw<Byte>"));
        case UberStateType.SerializedIntUberState:
          return () => Convert.ToSingle(frag.ParseToInt("genFromFragRaw<Int>"));
        case UberStateType.SerializedFloatUberState:
          return () => frag.ParseToFloat("genFromFragRaw<Float>");
        default:
          Randomizer.Warn("genFromFrag", $"unknown type {targetType}, can't meaningfully parse {frag}");
          return () => 0f;
      }
    }


    public static bool IsHowlDead() => UberGet.Bool(7, 3) || (SeedController.Settings.LegacySeedgen && !Flags.Contains(Flag.RAIN));
    public static bool IsDayTime() => AbilityType.SpiritEdge.HaveTree() || UberGet.Bool(7,2) || (SeedController.Settings.LegacySeedgen && !Flags.Contains(Flag.RAIN));
    public static int Current { get => SaveController.FoundCount; }
    public static int Total = 0;
    public static string Progress {
      get => "Pickups: " + (Current == Total ? $"${Current}/{Total}$" : $"{Current}/{Total}") + GoalModeMessages(progress: true);
    }
    public static string GoalModeMessages(string met = "$", string unmet = "", bool progress = false) {
      if (InterOp.get_game_state() != GameState.Game)
        return ""; // don't even try!
      var msg = "";
      if (Flags.Contains(Flag.ALLWISPS)) {
        var max = UberStateController.Wisps.Count;
        var amount = UberStateController.Wisps.Count((UberState s) => s.ValueOr(new UberValue(false)).Bool);
        var w = amount == max ? met : unmet;
        msg += $", {w}Wisps: {amount}/{max}{w}";
      }
      if (Flags.Contains(Flag.ALLTREES)) {
        var amount = SaveController.TreeCount;
        var w = amount == 14 ? met : unmet;
        msg += $", {w}Trees: {amount}/{14}{w}";
      }
      if (Flags.Contains(Flag.ALLQUESTS)) {
        var max = UberStateController.Quests.Count;
        var amount = UberStateController.Quests.Count((UberState s) => s.ValueOr(new UberValue(0)).Int == s.Value.Int);
        var w = amount == max ? met : unmet;
        msg += $", {w}Quests: {amount}/{max}{w}";
      }
      if (Flags.Contains(Flag.RELIC_HUNT))
        msg += Relic.RelicMessage();
      return msg.StartsWith(", ") ? (progress ? "\n" : "") + msg.Substring(2) : msg;
    }

    public static void UpdateGoal() {
      bool finished = true;
      if (Flags.Contains(Flag.ALLTREES)) {
        finished = finished && SaveController.TreeCount == 14;
      }

      if (finished && Flags.Contains(Flag.ALLWISPS)) {
        foreach (var state in UberStateController.Wisps) {
          finished = finished && state.ValueOr(new UberValue(false)).Bool;
          if (!finished)
            break;
        }
      }

      if (finished && Flags.Contains(Flag.ALLQUESTS)) {
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
