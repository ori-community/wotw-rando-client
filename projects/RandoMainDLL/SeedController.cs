using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Globalization;
using System.IO;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text.RegularExpressions;
using Newtonsoft.Json;
using RandoMainDLL.Memory;

namespace RandoMainDLL {
  public enum PsuedoLocs {
    GAME_START = 0,
    LOAD_SEED = 1,
    BINDING_ONE = 2,
    BINDING_TWO = 3,
    BINDING_THREE = 4,
    BINDING_FOUR = 5,
    BINDING_FIVE = 6,
    LOAD_FILE = 7,  // TODO: implement this lmao
    GOAL_MODES_COMPLETED = 11,
    ON_TELEPORT = 20
  }

  public static class Flag {
    public const string NOHINTS = "No Hints";
    public const string NOKEYSTONES = "No KS Doors";
    public const string ALLWISPS = "Force Wisps";
    public const string ALLTREES = "Force Trees";
    public const string ALLQUESTS = "Force Quests";
    public const string NOSWORD = "No Free Sword";
    public const string RAIN = "Rainy Marsh";
    public const string RAND = "Random Spawn";
    public const string RELIC_HUNT = "World Tour";

    public static readonly Dictionary<string, string> FALLBACK_NAMES = new Dictionary<string, string>() {
      { "NoHints", "No Hints" },
      { "NoKSDoors", "No KS Doors" },
      { "ForceWisps", "Force Wisps" },
      { "ForceTrees", "Force Trees" },
      { "ForceQuests", "Force Quests" },
      { "NoFreeSword", "No Free Sword" },
      { "RainyMarsh", "Rainy Marsh" },
      { "RandomSpawn", "Random Spawn" },
      { "WorldTour", "World Tour" },
    };
  }

  public class UberStateCondition {
    public enum Handler {
      Less,
      LessOrEquals,
      Greater,
      GreaterOrEquals,
      Equals
    }

    public UberId Id;
    public int Target;
    public Handler TargetHandler;
    public UberStateCondition(UberId id, int target, Handler handler) {
      TargetHandler = handler;
      Id = id;
      Target = target;
    }
    public UberStateCondition(int groupId, int id, int target, Handler handler) {
      TargetHandler = handler;
      Id = new UberId(groupId, id);
      if (target > 0)
        Target = target;
    }
    public UberStateCondition(int groupId, string rawTarget) {
      foreach (Handler value in Enum.GetValues(typeof(Handler))) {
        var symbol = value.Symbol();
        if (rawTarget.Contains(symbol)) {
          var idAndTarget = rawTarget.Split(new string[] { symbol }, StringSplitOptions.None);
          Id = new UberId(groupId, idAndTarget[0].ParseToInt("UberStateCondition.Id"));
          Target = idAndTarget[1].ParseToInt("UberStateCondition.Target");
          TargetHandler = value;
          return;
        }
      }

      Id = new UberId(groupId, int.Parse(rawTarget));
      Target = 0;
      TargetHandler = Handler.Greater;
    }

    private bool CheckTarget(double value) {
      switch (TargetHandler) {
        case Handler.Less:
          return value < Target;
        case Handler.LessOrEquals:
          return value <= Target;
        case Handler.Greater:
          return value > Target;
        case Handler.GreaterOrEquals:
          return value >= Target;
        case Handler.Equals:
          return value == Target;
        default:
          return false;
      }

    }
    public bool Met() {
      return CheckTarget(UberGet.AsDouble(Id));
    }
    public bool Met(double value) {
      return CheckTarget(value);
    }
    // Check if this condition just got satisfied by this uberstate change.
    public bool Met(UberState state, UberValue old) {
      if (state.GroupID != Id.GroupID || state.ID != Id.ID)
        return false;

      var prev = CheckTarget(old.AsDouble(state.Type));
      var next = CheckTarget(state.ValueAsDouble());
      return !prev && next;
    }

    public override string ToString() => $"{Id}{TargetHandler.Symbol()}{Target}";
    public override int GetHashCode() => Id.GetHashCode() + TargetHandler.GetHashCode() + Target;
    public override bool Equals(object obj) => obj is UberStateCondition other && (Id.Equals(other.Id) && Target == other.Target);
  }

  public class TimerDefinition {
    public TimerDefinition(UberStateCondition toggle, int incGroup, int incState) {
      Toggle = toggle;
      Increment = new UberId(incGroup, incState);
    }

    public UberStateCondition Toggle;
    public UberId Increment;
  }

  public static class SeedController {

    public static bool GrantingGoalModeLoc = false;

    public static readonly Regex PTR_REGEX = new Regex(@"\$\(([0-9]+)\|([0-9]+)\)", RegexOptions.Compiled);
    public static readonly Regex RANGE_REGEX = new Regex(@"\[([^,\]]+),([^,\]]+)\]", RegexOptions.Compiled);
    public static readonly Regex UBER_MSG_REGEX = new Regex(@"\$\(([0-9]+);([0-9]+)\)", RegexOptions.Compiled);

    public static SeedGenSettings Settings = new SeedGenSettings();
    public enum FakeUberGroups {
      TREE = 0,
      OPHER_WEAPON = 1,
      TWILLEN_SHARD = 2,
      MISC_CONTROL = 3
    }

    public static bool HasPickup(this UberId id) => PickupMap.TryGetValue(id, out var value);
    public static bool HasPickup(this UberStateCondition cond) => PickupMap.GetOrElse(cond.Id, null).CallOrElse((d) => d.ContainsKey(cond), false);
    public static Tuple<UberStateCondition, Pickup> PickupWithCondition(this UberId id, int value) {
      var dict = PickupMap.GetOrElse(id, null);
      if (dict != null)
        foreach (var cond in dict)
          if (cond.Key.Met(value))
            return Tuple.Create(cond.Key, cond.Value);

      return Tuple.Create((UberStateCondition)null, (Pickup)Multi.Empty);
    }
    public static Pickup Pickup(this UberStateCondition cond) => PickupMap.GetOrElse(cond.Id, null).GetOrElse(cond, Multi.Empty);
    public static Pickup Pickup(this PsuedoLocs gameCond) => new UberId((int)FakeUberGroups.MISC_CONTROL, (int)gameCond).toCond().Pickup();

    public static bool IsGoal(this UberStateCondition goalCond) {
      var loc = goalCond.Loc();
      if (loc.Type == LocType.Tree /*&& flags.Contains(Flag.ALLTREES) */)
        return true;
      if (Flags.Contains(Flag.ALLWISPS) && UberStateController.Wisps.Exists(w => w.GetUberId().Equals(goalCond.Id)))
        return true;
      if (Flags.Contains(Flag.ALLQUESTS) && UberStateController.Quests.Exists(q => q.GetUberId().Equals(goalCond.Id) && q.ValueAsInt() == goalCond.Target))
        return true;
      return false;
    }

    public static bool HasPickup(this UberState state) => PickupMap.ContainsKey(state.GetUberId());
    public static bool OnCollect(this UberState state, UberValue old) {
      var output = false;
      var refreshShards = false;
      Dictionary<UberStateCondition, Pickup> conditions;
      if (PickupMap.TryGetValue(state.GetUberId(), out conditions)) {
        foreach (var entry in conditions)
          if (entry.Key.Met(state, old)) {
            output |= entry.Value.Collect(entry.Key);
            if (entry.Key.Loc().Type == LocType.Shard)
              refreshShards = true;
          }
      }

      if (refreshShards)
        InterOp.Shard.refresh_shards();

      return output;
    }

    public static bool OnCollect(this UberStateCondition cond) {
      var dict = PickupMap.GetOrElse(cond.Id, null);
      return dict == null ? false : dict.GetOrElse(cond, Multi.Empty).Collect(cond);
    }

    public static bool OnCollect(this PsuedoLocs gameCond) => new UberId((int)FakeUberGroups.MISC_CONTROL, (int)gameCond).toCond().OnCollect();
    private static string slug = "";
    private static string seedName = "";
    public static Dictionary<UberId, Dictionary<UberStateCondition, Pickup>> PickupMap = new Dictionary<UberId, Dictionary<UberStateCondition, Pickup>>();
    public static List<TimerDefinition> TimerList = new List<TimerDefinition>();
    public static HashSet<String> Flags = new HashSet<String>();
    public static string SeedFile = "";
    public static string SeedName { get => SeedFile.Contains("\\") ? SeedFile.Substring(1 + SeedFile.LastIndexOf('\\')) : SeedFile; }

    public static int GetFlagCount() {
      return Flags.Count;
    }
    public static void GetFlag(int flag, IntPtr buffer, int size) {
      var flagName = Flags.ElementAt(flag);
      Marshal.Copy(flagName.ToCharArray(), 0, buffer, Math.Min(flagName.Length, size));
    }

    public static void ParseLines(string[] lines, bool init) {
      PickupMap.Clear();
      TimerList.Clear();
      Flags.Clear();
      Relic.Reset();
      InterOp.Map.clear_icons();
      InterOp.TextDatabase.text_database_clear_dynamic();
      string line = "";
      string coordsRaw = "";
      foreach (string rawLine in lines) {
        try {
          if (rawLine.StartsWith("Flags: ")) {
            ProcessFlags(rawLine);
            continue;
          }
          else if (rawLine.StartsWith("Spawn: ")) {
            coordsRaw = rawLine.Split(new string[] { "//" }, StringSplitOptions.None)[0].Trim().Substring(6);
            continue;
          }
          else if (rawLine.StartsWith("// Seed: ")) {
            seedName = rawLine.Replace("// Seed: ", "");
            continue;
          }
          else if (rawLine.StartsWith("// Slug: ")) {
            slug = rawLine.Replace("// Slug: ", "");
            continue;
          }
          else if (rawLine.StartsWith("// Config: ")) {
            var configRaw = rawLine.Replace("// Config: ", "");
            try {
              Settings = JsonConvert.DeserializeObject<SeedGenSettings>(configRaw);
            }
            catch (Exception e) { Randomizer.Error("SeedController.ReadSeed<Settings>", e, true); }
          }
          else if (rawLine.StartsWith("MULTISTATES: ")) {
            continue;
          }
          else if (rawLine.StartsWith("timer: ")) {
            ProcessTimer(rawLine.Substring("timer: ".Length));
            continue;
          }
          line = rawLine.Split(new string[] { "//" }, StringSplitOptions.None)[0].Trim();
          if (line == "") continue;
          PTR_REGEX.Replace(line, (Match m) => m.Groups[1].Value.Replace("|", ";"));
          line = PTR_REGEX.Replace(line, "$($1;$2)");
          var frags = line.Split('|').ToList();
          var cond = new UberStateCondition(frags[0].ParseToInt(), frags[1]);
          var pickupType = (PickupType)frags[2].ParseToByte();

          var extras = frags.Skip(4).ToList();
          bool needsMute = false;
          if (pickupType != PickupType.Message && extras.Contains("mute")) {
            extras.Remove("mute");
            needsMute = true;
          }
          var pickup = BuildPickup(pickupType, frags[3], extras, cond);
          pickup.Muted = needsMute;
          if (!PickupMap.ContainsKey(cond.Id))
            PickupMap[cond.Id] = new Dictionary<UberStateCondition, Pickup>();

          PickupMap[cond.Id][cond] = cond.Pickup().Concat(pickup);
        }
        catch (Exception e) {
          Randomizer.Log($"Error parsing line: '{line}'\nError: {e.Message} \nStacktrace: {e.StackTrace}", false);
        }
      }
      Total = 0;
      foreach (ZoneType z in Enum.GetValues(typeof(ZoneType))) {
        CountByZone[z] = PickupMap.Aggregate(0, (s, d) => s + d.Value.Count(p => p.Key.Loc().Zone == z));
        if (z != ZoneType.Void)
          Total += CountByZone[z];
      }
      if (Settings.NetcodeEnabled) {
        if (AHK.IniFlag("DisableNetcode"))
          MessageController.ShowMessage("Warning: can't connect because netcode is disabled via settings", queue: "debug", log: true);

        WebSocketClient.Connect();
      }
      else
        WebSocketClient.Disconnect();

      if (coordsRaw != "") {
        var coords = coordsRaw.Split(',').ToList();
        var x = coords[0].ParseToFloat("SpawnX");
        var y = coords[1].ParseToFloat("SpawnY");
        InterOp.Player.set_start_position(x, y);
      }
      else
        InterOp.Player.clear_start_position();

      InterOp.System.report_seed_reload();
      if (!init) {
        var flagPart = Flags.Count > 0 ? $"\nFlags: {string.Join(", ", Flags)}" : "";
        MessageController.ShowPickup($"v{Randomizer.VERSION} - Loaded {SeedName}{flagPart}", 5f, true, true);
        MapController.UpdateReachable();
      }
    }

    public static void ReadSeed(bool init = false) {
      SeedFile = File.ReadAllText(Randomizer.SeedPathFile);
      if (SeedFile.StartsWith("server:"))
        WebSocketClient.SendSeedRequest(init);
      else if (File.Exists(SeedFile))
        ParseLines(File.ReadAllLines(SeedFile), init);
      else
        MessageController.ShowPickup($"v{Randomizer.VERSION} - No seed found! Download a .wotwr file\nand double-click it to load", 6f, true, true);
    }

    public static bool EnableLogicFilter { get => !Settings.DisableLogicFilter; }
    public static bool HasInternalSpoilers { get => !Settings.RaceMode; }
    public static bool KSDoorsOpen { get => Flags.Contains(Flag.NOKEYSTONES); }
    public static void ProcessFlags(string flagline) {
      if (Flags.Count > 0)
        Randomizer.Warn("ProcessFlags", "called with non-empty flagline. Check seed for extra flaglines");
      foreach (var rawFlag in flagline.Replace("Flags:", "").Trim().Split(',')) {
        var flag = rawFlag.Trim();
        if (flag.ToLower() == "nosword")
          Flags.Add(Flag.NOSWORD);
        else {
          // TODO: Remove with 2.0
          if (Flag.FALLBACK_NAMES.ContainsKey(flag))
            flag = Flag.FALLBACK_NAMES[flag];

          Flags.Add(flag);
        }
      }
    }

    public static void ProcessTimer(string timer) {
      var entries = timer.Split('|');
      if (entries.Length != 4)
        throw new Exception("Malformed timer expression: Too many |");

      if (!int.TryParse(entries[0], out int toggleGroup))
        throw new Exception("Malformed timer expression: non integer group");

      if (!int.TryParse(entries[2], out int incGroup))
        throw new Exception("Malformed timer expression: non integer group");

      if (!int.TryParse(entries[3], out int incState))
        throw new Exception("Malformed timer expression: non integer state");

      TimerList.Add(new TimerDefinition(new UberStateCondition(toggleGroup, entries[1]), incGroup, incState));
    }

    public static bool OnUberState(UberState state, UberValue old) {
      state.OnCollect(old);
      return state.HasPickup();
    }

    public static Pickup BuildPickup(PickupType type, string pickupData, List<string> extras, UberStateCondition cond) {
      var command = pickupData;
      if (extras.Count > 0)
        command += "|" + string.Join("|", extras);

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
          return new Cash(pickupData.ParseToInt(), cond.GetHashCode() + seedName.GetHashCode() + slug.GetHashCode());
        case PickupType.Resource:
          return new Resource((ResourceType)pickupData.ParseToByte());
        case PickupType.WeaponUpgrade:
          return WeaponUpgrade.ById[(WeaponUpgradeType)pickupData.ParseToInt()];
        case PickupType.BonusItem:
          if (cond == null)
            return BonusItem.Build((BonusType)pickupData.ParseToInt(), ZoneType.Void);
          return BonusItem.Build((BonusType)pickupData.ParseToInt(), cond.Loc().Zone);
        case PickupType.Relic:
          return Relic.Build((ZoneType)pickupData.ParseToByte("BuildPickup.RelicZone"), extras.FirstOrElse(""));
        case PickupType.SystemCommand:
          var t = (SysCommandType)pickupData.ParseToByte();
          switch (t) {
            case SysCommandType.SetResource:
              if (extras.Count != 2) {
                Randomizer.Log($"malformed command specifier {pickupData}", false);
                return new Message($"Invalid command {command}!");
              }
              return new SetResource((ResourceType)extras[0].ParseToByte("BuildPickup.SetResourceType"), extras[1].ParseToInt("BuildPickup.SetResourceValue"));
            case SysCommandType.SetHealth:
              if (extras.Count != 1) {
                Randomizer.Log($"malformed command specifier {pickupData}", false);
                return new Message($"Invalid command {command}!");
              }
              return new SetHealth(extras[0].ParseToFloat("BuildPickup.SetHealthValue"));
            case SysCommandType.SetEnergy:
              if (extras.Count != 1) {
                Randomizer.Log($"malformed command specifier {command}", false);
                return new Message($"Invalid command {command}!");
              }
              return new SetEnergy(extras[0].ParseToFloat("BuildPickup.SetEnergyValue"));
            case SysCommandType.AHKSignal: {
                if (extras.Count != 1) {
                  Randomizer.Log($"malformed command specifier {command}", false);
                  return new Message($"Invalid command {command}!");
                }
                var value = (Input.Action)Enum.Parse(typeof(Input.Action), extras[0], true);
                return new SendInputSignal(value);
              }
            case SysCommandType.SetSpiritLight:
              if (extras.Count != 1) {
                Randomizer.Log($"malformed command specifier {command}", false);
                return new Message($"Invalid command {command}!");
              }
              return new SetSpiritLight(extras[0].ParseToInt("BuildPickup.SetSpiritLightValue"));
            case SysCommandType.StopIfEqual:
            case SysCommandType.StopIfGreater:
            case SysCommandType.StopIfLess:
              if (extras.Count != 3) {
                Randomizer.Log($"malformed command specifier {command}", false);
                return new Message($"Invalid command {command}!");
              }
              var uid = new UberId(
                extras[0].ParseToInt("BuildPickup.UberGroupId"),
                extras[1].ParseToInt("BuildPickup.UberId")
              );
              return new ConditionalStop(t, uid, extras[2].ParseToDouble("BuildPickup.InterruptCondValue"));
            case SysCommandType.GrantIfEqual:
            case SysCommandType.GrantIfGreater:
            case SysCommandType.GrantIfLess:
              if (extras.Count < 5) {
                Randomizer.Log($"malformed command specifier {command}", false);
                return new Message($"Invalid command {command}!");
              }
              var guid = new UberId(
                extras[0].ParseToInt("BuildPickup.UberGroupId"),
                extras[1].ParseToInt("BuildPickup.UberId")
              );
              var p = BuildPickup((PickupType)extras[3].ParseToByte("BuildPickup.GrantIfValType"), extras[4], extras.Skip(5).ToList(), cond);
              return new GrantIfVal(t, guid, extras[2].ParseToDouble("BuildPickup.GrantIfValTargetValue"), p);
            case SysCommandType.GrantIfCondEqual:
            case SysCommandType.GrantIfCondGreater:
            case SysCommandType.GrantIfCondLess:
              if (extras.Count < 3) {
                Randomizer.Log($"malformed command specifier {command}", false);
                return new Message($"Invalid command {command}!");
              }
              return new GrantIfVal(t, 
                cond.Id, 
                extras[0].ParseToDouble("BuildPickup.GrantIfValTargetValue"), 
                BuildPickup((PickupType)extras[1].ParseToByte("BuildPickup.GrantIfValType"), extras[2], extras.Skip(3).ToList(), cond)
              );
            case SysCommandType.GrantIfBounds:
              if (extras.Count < 6) {
                Randomizer.Log($"malformed command specifier {command}", false);
                return new Message($"Invalid command {command}!");
              }
              return new GrantIfBounds(t,
                extras[0].ParseToFloat("BuildPickup.GrantIfBoundsX1"),
                extras[1].ParseToFloat("BuildPickup.GrantIfBoundsY1"),
                extras[2].ParseToFloat("BuildPickup.GrantIfBoundsX2"),
                extras[3].ParseToFloat("BuildPickup.GrantIfBoundsY2"),
                BuildPickup((PickupType)extras[4].ParseToByte("BuildPickup.GrantIfValType"), extras[5], extras.Skip(6).ToList(), cond)
              );
            case SysCommandType.SetState: {
                if (extras.Count != 2) {
                  Randomizer.Log($"malformed command specifier {command}", false);
                  return new Message($"Invalid command {command}!");
                }
                var sysState = extras[0].ParseToByte("BuildPickup.SysState");
                if (!Enum.IsDefined(typeof(SysState), sysState)) {
                  Randomizer.Log($"invalid state {sysState} in {command}", false);
                  return new Message($"Invalid command {command}!");
                }

                var value = extras[1].ParseToInt("BuildPickup.Value");
                return new SetStateCommand((SysState)sysState, value);
              }
            case SysCommandType.Warp:
              if (extras.Count != 2) {
                Randomizer.Log($"malformed command specifier {command}", false);
                return new Message($"Invalid command {command}!");
              }
              var warpX = extras[0].ParseToFloat("BuildPickup.PositionX");
              var warpY = extras[1].ParseToFloat("BuildPickup.PositionY");
              return new WarpCommand(warpX, warpY);
            case SysCommandType.Bind: {
                if (extras.Count != 2) {
                  Randomizer.Log($"malformed command specifier {command}", false);
                  return new Message($"Invalid command {command}!");
                }
                var slot = extras[0].ParseToByte("BuildPickup.BindSlot");
                var equip = extras[1].ParseToInt("BuildPickup.BindTarget");
                if (!Enum.IsDefined(typeof(EquipmentType), equip)) {
                  Randomizer.Log($"invalid equipment type {equip} in {command}", false);
                  return new Message($"Invalid command {command}!");
                }
                return new BindCommand(slot, (EquipmentType)equip);
              }
            case SysCommandType.Unbind: {
              if (extras.Count != 1) {
                Randomizer.Log($"malformed command specifier {command}", false);
                return new Message($"Invalid command {command}!");
              }
              var equip = extras[0].ParseToInt("BuildPickup.UnbindTarget");
              if (!Enum.IsDefined(typeof(EquipmentType), equip)) {
                Randomizer.Log($"invalid equipment type {equip} in {command}", false);
                return new Message($"Invalid command {command}!");
              }
              return new UnbindCommand((EquipmentType)equip);
              }

            case SysCommandType.StartTimer:
            case SysCommandType.StopTimer:
              if (extras.Count != 2) {
                Randomizer.Log($"malformed command specifier {command}", false);
                return new Message($"Invalid command {command}!");
              }
              var incGroup = extras[0].ParseToInt("BuildPickup.IncGroup");
              var incState = extras[1].ParseToInt("BuildPickup.IncState");
              return new TimerCommand(
                t,
                new UberId(incGroup, incState)
              );
            case SysCommandType.RedirectState:
              if (extras.Count != 2) {
                Randomizer.Log($"malformed command specifier {command}", false);
                return new Message($"Invalid command {command}!");
              }
              var redirectState = extras[0].ParseToInt("BuildPickup.RedirectState");
              var redirectValue = extras[1].ParseToInt("BuildPickup.RedirectValue");
              return new RedirectStateCommand(redirectState, redirectValue);
            case SysCommandType.EnableSync:
            case SysCommandType.DisableSync:
              if (extras.Count != 2) {
                Randomizer.Log($"malformed command specifier {command}", false);
                return new Message($"Invalid command {command}!");
              }
              var suid = new UberId(
                extras[0].ParseToInt("BuildPickup.UberGroupId"),
                extras[1].ParseToInt("BuildPickup.UberId")
              );
              return new SyncToggler(t, suid);
            case SysCommandType.CreateWarp:
            case SysCommandType.DestroyWarp: {
                if (t == SysCommandType.CreateWarp ? !extras.Count.In(3, 4) : extras.Count != 1) {
                  Randomizer.Log($"malformed command specifier {command}", false);
                  return new Message($"Invalid command {command}!");
                }

                var id = extras[0].ParseToInt("BuildPickup.Id");
                if (t == SysCommandType.CreateWarp) {
                  var x = extras[1].ParseToFloat("BuildPickup.X");
                  var y = extras[2].ParseToFloat("BuildPickup.Y");
                  var label = "";
                  if (extras.Count > 3)
                    label = extras[3];
                  
                  return new Icon(id, x, y, label);
                }
                else {
                  return new Icon(id);
                }
              }
            case SysCommandType.SaveString: {
                var id = extras[0].ParseToInt("BuildPickup.Id");
                var text = string.Join("|", extras.Skip(1));
                return new SaveStringCommand(id, text);
              }
            case SysCommandType.AppendString: {
                var id = extras[0].ParseToInt("BuildPickup.Id");
                var text = string.Join("|", extras.Skip(1));
                return new AppendStringCommand(id, text);
              }
            default:
              return new SystemCommand((SysCommandType)pickupData.ParseToByte());
          }
        case PickupType.SysMessage:
          return SysMessage.Build((SysMessageType)pickupData.ParseToByte(), extras.FirstOrElse(""));
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
            else if (extra.StartsWith("p=")) {
              if (float.TryParse(extra.Replace("p=", ""), NumberStyles.Number, CultureInfo.GetCultureInfo("en-US"), out float p))
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
                if (float.TryParse(cmd.Replace("p=", ""), NumberStyles.Number, CultureInfo.GetCultureInfo("en-US"), out float p))
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
        case PickupType.Wheel:
          var w = (WheelCommandType)pickupData.ParseToByte();
          switch (w) {
            case WheelCommandType.SetName:
            case WheelCommandType.SetDescription:
            case WheelCommandType.SetTexture: {
                if (extras.Count != 3) {
                  Randomizer.Log($"malformed wheel command specifier {command}", false);
                  return new Message($"Invalid wheel command {command}!");
                }
                var wheel = extras[0].ParseToInt("BuildPickup.Wheel");
                var item = extras[1].ParseToInt("BuildPickup.Item");
                var str = extras[2];
                if (w == WheelCommandType.SetName)
                  return new Wheel.SetNameCommand(wheel, item, str);
                else if (w == WheelCommandType.SetDescription)
                  return new Wheel.SetDescriptionCommand(wheel, item, str);
                else
                  return new Wheel.SetTextureCommand(wheel, item, str);
              }
            case WheelCommandType.SetColor: {
                if (extras.Count != 6) {
                  Randomizer.Log($"malformed wheel command specifier {command}", false);
                  return new Message($"Invalid wheel command {command}!");
                }
                var wheel = extras[0].ParseToInt("BuildPickup.Wheel");
                var item = extras[1].ParseToInt("BuildPickup.Item");
                var r = extras[2].ParseToByte("BuildPickup.R");
                var g = extras[3].ParseToByte("BuildPickup.G");
                var b = extras[4].ParseToByte("BuildPickup.B");
                var a = extras[5].ParseToByte("BuildPickup.A");
                return new Wheel.SetColorCommand(wheel, item, r, g, b, a);
              }
            case WheelCommandType.SetSticky: {
                if (extras.Count != 2) {
                  Randomizer.Log($"malformed wheel command specifier {command}", false);
                  return new Message($"Invalid wheel command {command}!");
                }
                var wheel = extras[0].ParseToInt("BuildPickup.Wheel");
                var sticky = extras[1].ParseToBool("BuildPickup.Sticky");
                return new Wheel.SetStickyWheelCommand(wheel, sticky);
              }
            case WheelCommandType.Action: {
                // Check if we have everything before the pickup part.
                if (extras.Count < 5) {
                  Randomizer.Log($"malformed wheel command specifier {command}", false);
                  return new Message($"Invalid wheel command {command}!");
                }

                var wheel = extras[0].ParseToInt("BuildPickup.Wheel");
                var item = extras[1].ParseToInt("BuildPickup.Item");
                var binding = extras[2].ParseToInt("BuildPickup.Binding");
                var p = BuildPickup((PickupType)extras[3].ParseToByte("BuildPickup.WheelAction"), extras[4], extras.Skip(5).ToList(), cond);
                return new Wheel.ActionCommand(wheel, item, binding, p);
              }
            case WheelCommandType.ClearItem: {
                if (extras.Count != 2) {
                  Randomizer.Log($"malformed wheel command specifier {command}", false);
                  return new Message($"Invalid wheel command {command}!");
                }
                var wheel = extras[0].ParseToInt("BuildPickup.Wheel");
                var item = extras[1].ParseToInt("BuildPickup.Item");
                return new Wheel.ClearCommand(wheel, item);
              }
            case WheelCommandType.SetActiveWheel: {
                if (extras.Count != 1) {
                  Randomizer.Log($"malformed wheel command specifier {command}", false);
                  return new Message($"Invalid wheel command {command}!");
                }
                var wheel = extras[0].ParseToInt("BuildPickup.Wheel");
                return new Wheel.SetActiveWheelCommand(wheel);
              }
            case WheelCommandType.ClearAll:
              return new Wheel.WheelCommand(w);
            default: {
                var err = $"Unknown pickup {type}|{command}";
                Randomizer.Error("BuildPickup", err, false);
                return new Message(err);
              }
          }
        case PickupType.Shop: {
            var s = (ShopCommandType)pickupData.ParseToByte();
            switch (s) {
              case ShopCommandType.Icon: {
                  if (extras.Count != 3) {
                    Randomizer.Log($"malformed shop command specifier {command}", false);
                    return new Message($"Invalid shop command {command}!");
                  }

                  var group = extras[0].ParseToInt("BuildPickup.ShopGroup");
                  var state = extras[1].ParseToInt("BuildPickup.ShopState");
                  var texture = extras[2];
                  var uberId = new UberId(group, state);
                  if (ShopSlot.GetSlot(uberId) == null) {
                    Randomizer.Log($"invalid shop id {group}|{state} in {pickupData}", false);
                    return new Message($"Invalid shop command {command}!");
                  }

                  return new Shop.IconCommand(uberId, texture);
                }
              case ShopCommandType.Title: {
                  if (!extras.Count.In(2, 3)) {
                    Randomizer.Log($"malformed shop command specifier {command}", false);
                    return new Message($"Invalid shop command {command}!");
                  }

                  var group = extras[0].ParseToInt("BuildPickup.ShopGroup");
                  var state = extras[1].ParseToInt("BuildPickup.ShopState");
                  var title = extras.Count == 3 ? extras[2] : null;
                  var uberId = new UberId(group, state);
                  if (ShopSlot.GetSlot(uberId) == null) {
                    Randomizer.Log($"invalid shop id {group}|{state} in {pickupData}", false);
                    return new Message($"Invalid shop command {command}!");
                  }

                  return new Shop.TitleCommand(uberId, title);
                }
              case ShopCommandType.Description: {
                  if (!extras.Count.In(2, 3)) {
                    Randomizer.Log($"malformed shop command specifier {command}", false);
                    return new Message($"Invalid shop command {command}!");
                  }

                  var group = extras[0].ParseToInt("BuildPickup.ShopGroup");
                  var state = extras[1].ParseToInt("BuildPickup.ShopState");
                  var description = extras.Count == 3 ? extras[2] : null;
                  var uberId = new UberId(group, state);
                  if (ShopSlot.GetSlot(uberId) == null) {
                    Randomizer.Log($"invalid shop id {group}|{state} in {pickupData}", false);
                    return new Message($"Invalid shop command {command}!");
                  }

                  return new Shop.DescriptionCommand(uberId, description);
                }
              case ShopCommandType.Locked: {
                  if (extras.Count != 3) {
                    Randomizer.Log($"malformed shop command specifier {command}", false);
                    return new Message($"Invalid shop command {command}!");
                  }

                  var group = extras[0].ParseToInt("BuildPickup.ShopGroup");
                  var state = extras[1].ParseToInt("BuildPickup.ShopState");
                  var isLocked = extras[2].ParseToBool("BuildPickup.Locked");
                  var uberId = new UberId(group, state);
                  if (ShopSlot.GetSlot(uberId) == null) {
                    Randomizer.Log($"invalid shop id {group}|{state} in {pickupData}", false);
                    return new Message($"Invalid shop command {command}!");
                  }

                  return new Shop.LockedCommand(uberId, isLocked);
                }
              case ShopCommandType.Visible: {
                  if (extras.Count != 3) {
                    Randomizer.Log($"malformed shop command specifier {command}", false);
                    return new Message($"Invalid shop command {command}!");
                  }

                  var group = extras[0].ParseToInt("BuildPickup.ShopGroup");
                  var state = extras[1].ParseToInt("BuildPickup.ShopState");
                  var isVisible = extras[2].ParseToBool("BuildPickup.Visible");
                  var uberId = new UberId(group, state);
                  if (ShopSlot.GetSlot(uberId) == null) {
                    Randomizer.Log($"invalid shop id {group}|{state} in {pickupData}", false);
                    return new Message($"Invalid shop command {command}!");
                  }

                  return new Shop.VisibleCommand(uberId, isVisible);
                }
              default: {
                  var err = $"Unknown pickup {type}|{command}";
                  Randomizer.Error("BuildPickup", err, false);
                  return new Message(err);
                }
            }
          }
        case PickupType.UberState: {
            extras.Insert(0, pickupData);
            if (extras.Count < 4 || extras.Count > 5) {
              Randomizer.Log($"malformed UberModifier specifier {command}", false);
              return new Message($"Invalid UberModifier specifier {command}!");
            }
            var uberId = new UberId(
                extras[0].ParseToInt("BuildPickup.UberGroupId"),
                extras[1].ParseToInt("BuildPickup.UberId")
              );
            var stateType = uberTypeFromString(extras[2]);
            Func<UberValue, double> modifier = GetUberSetter(stateType, extras[3]);
            return new UberStateModifier(uberId, modifier, extras[3], extras.Count == 5 ? extras[4].Replace("skip=", "").ParseToInt("BuildPickup.SupCount") : 0);
          }
        default: {
            var err = $"Unknown pickup {type}|{command}";
            Randomizer.Error("BuildPickup", err, false);
            return new Message(err);
          }
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

    private static Func<UberValue, double> GetUberSetter(UberStateType type, string mod) {
      bool isModifier = mod.StartsWith("+") || mod.StartsWith("-");
      int sign = mod.StartsWith("-") ? -1 : 1;
      if (isModifier)
        mod = mod.Substring(1);
      var m = RANGE_REGEX.Match(mod);
      var start = genFromFrag(m.Groups[1].Value, type);
      var end = genFromFrag(m.Groups[2].Value, type);

      if (m.Success) {
        switch (type) {
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
                return Convert.ToDouble(old.Byte + sign * rval);
              return Convert.ToDouble(rval);
            };
          case UberStateType.SerializedIntUberState:
            return (UberValue old) => {
              int lo = Convert.ToInt32(start());
              int hi = Convert.ToInt32(end());
              if (lo > hi)
                (lo, hi) = (hi, lo);
              int rval = UberRand.Next(lo, hi);
              if (isModifier)
                return Convert.ToDouble(old.Int + sign * rval);
              return Convert.ToDouble(rval);
            };
          case UberStateType.SerializedFloatUberState:
            return (UberValue old) => {
              double lo = start();
              double hi = end();
              if (lo > hi)
                (lo, hi) = (hi, lo);
              double rval = lo + (float)UberRand.NextDouble() * (hi - lo);
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
              return Convert.ToDouble(old.Byte + sign * rval);
            return Convert.ToDouble(rval);
          };
        case UberStateType.SerializedIntUberState:
          return (UberValue old) => {
            int rval = Convert.ToInt32(target());
            if (isModifier)
              return Convert.ToDouble(old.Int + sign * rval);
            return Convert.ToDouble(rval);
          };
        case UberStateType.SerializedFloatUberState:
          return (UberValue old) => {
            double rval = target();
            if (isModifier)
              return old.Float + sign * rval;
            return rval;
          };
      }
      Randomizer.Error($"GetUberSetter({type}, {mod})", "fell through all cases, zeroing out...");
      return (UberValue old) => 0f;
    }

    private static Func<double> genFromFrag(string frag, UberStateType targetType) {
      var m = UBER_MSG_REGEX.Match(frag);
      if (m.Success) {
        var uid = new UberId(m.Groups[1].Value.ParseToInt("genFromFrag.GID"), m.Groups[2].Value.ParseToInt("genFromFrag.GID"));
        return () => UberGet.AsDouble(uid);
      }
      switch (targetType) {
        case UberStateType.SavePedestalUberState:
        case UberStateType.SerializedBooleanUberState:
          return () => frag.ParseToBool("genFromFragRaw<Bool>") ? 1f : 0f;
        case UberStateType.SerializedByteUberState:
          return () => Convert.ToDouble(frag.ParseToByte("genFromFragRaw<Byte>"));
        case UberStateType.SerializedIntUberState:
          return () => Convert.ToDouble(frag.ParseToInt("genFromFragRaw<Int>"));
        case UberStateType.SerializedFloatUberState:
          return () => frag.ParseToDouble("genFromFragRaw<Float>");
        default:
          Randomizer.Warn("genFromFrag", $"unknown type {targetType}, can't meaningfully parse {frag}");
          return () => 0f;
      }
    }


    public static bool IsHowlDead() => UberGet.Bool(7, 3) || (Settings.LegacySeedgen && !Flags.Contains(Flag.RAIN));
    public static bool IsDayTime() => (!UberGet.Bool(7, 5) && AbilityType.SpiritEdge.HaveTree()) || UberGet.Bool(7, 2) || (Settings.LegacySeedgen && !Flags.Contains(Flag.RAIN));
    public static int Current { get => SaveController.FoundCount; }
    public static Dictionary<ZoneType, int> CountByZone = new Dictionary<ZoneType, int>();
    public static int Total = 0;

    public static string PickupCount => "Pickups: " + (Current == Total ? $"${Current}/{Total}$" : $"{Current}/{Total}");
    public static string Progress => PickupCount + GoalModeMessages(progress: true);
    public static string GoalModeMessages(string met = "$", string unmet = "", bool progress = false, bool withRelics = true) {
      if (InterOp.Utils.get_game_state() != GameState.Game)
        return ""; // don't even try!
      var goalMsgs = new List<String>();
      if (Flags.Contains(Flag.ALLWISPS)) {
        var max = UberStateController.Wisps.Count;
        var amount = UberStateController.Wisps.Count((UberState s) => s.GetValue().Bool);
        var w = amount == max ? met : unmet;
        goalMsgs.Add($"{w}Wisps: {amount}/{max}{w}");
      }
      if (Flags.Contains(Flag.ALLTREES)) {
        var amount = SaveController.TreeCount;
        var w = amount == 14 ? met : unmet;
        goalMsgs.Add($"{w}Trees: {amount}/{14}{w}");
      }
      if (Flags.Contains(Flag.ALLQUESTS)) {
        var max = UberStateController.Quests.Count;
        var amount = UberStateController.Quests.Count((UberState s) => s.GetValue().Int == s.Value.Int);
        var w = amount == max ? met : unmet;
        goalMsgs.Add($"{w}Quests: {amount}/{max}{w}");
      }
      var msg = String.Join(", ", goalMsgs);
      if (withRelics && Flags.Contains(Flag.RELIC_HUNT))
        msg += "\n" + Relic.RelicMessage();
      return goalMsgs.Count > 0 ? (progress ? "\n" : "") + msg : msg;
    }

    public static void UpdateGoal() {
      bool finished = true;
      if (Flags.Contains(Flag.ALLTREES)) {
        finished = finished && SaveController.TreeCount == 14;
      }

      if (finished && Flags.Contains(Flag.ALLWISPS)) {
        foreach (var state in UberStateController.Wisps) {
          finished = finished && state.GetValue().Bool;
          if (!finished)
            break;
        }
      }

      if (finished && Flags.Contains(Flag.ALLQUESTS)) {
        foreach (var state in UberStateController.Quests) {
          finished = finished && state.GetValue().Int == state.Value.Int;
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
