using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Globalization;
using System.IO;
using System.Linq;
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
    LOAD_FILE  = 7,  // TODO: implement this lmao
    GOAL_MODES_COMPLETED = 11,
    ON_TELEPORT = 20
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
        Id = new UberId(groupId,idAndTarget[0].ParseToInt("UberStateCondition.Id"));
        Target = idAndTarget[1].ParseToInt("UberStateCondition.Target");
        if (Target == 0)
          Target = null;
      }
      else {
        Id = new UberId(groupId, int.Parse(rawTarget));
        Target = null;
      }
    }
    public bool Met() {
      var value = UberGet.AsDouble(Id);
      return Target.HasValue ? value >= Target.Value : value > 0;
    }
    
    public override string ToString() => $"({Id.GroupID}, {Id.ID}){(Target.HasValue ?  $"={Target.Value}" : "")}";
    public override int GetHashCode() => Id.GetHashCode() + Target.GetValueOrDefault(-1);
    public override bool Equals(object obj) => obj is UberStateCondition other && (Id.Equals(other.Id) && Target == other.Target);
  }

  public class TimerDefinition {
    public TimerDefinition(int toggleGroup, int toggleState, int incGroup, int incState) {
      Toggle = new UberId(toggleGroup, toggleState);
      Increment = new UberId(incGroup, incState);
    }

    public UberId Toggle;
    public UberId Increment;
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


    public static bool HasPickup(this UberStateCondition cond) => PickupMap.ContainsKey(cond);
    public static Pickup Pickup(this UberStateCondition cond) => PickupMap.GetOrElse(cond, Multi.Empty);
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

    public static bool OnCollect(this UberStateCondition cond) => PickupMap.GetOrElse(cond, Multi.Empty).Collect(cond);
    public static bool OnCollect(this PsuedoLocs gameCond) => new UberId((int)FakeUberGroups.MISC_CONTROL, (int)gameCond).toCond().OnCollect();

    public static Dictionary<UberStateCondition, Pickup> PickupMap = new Dictionary<UberStateCondition, Pickup>();
    public static List<TimerDefinition> TimerList = new List<TimerDefinition>();
    public static HashSet<Flag> Flags = new HashSet<Flag>();
    public static string SeedFile = "";
    public static String SeedName { get => SeedFile.Contains("\\") ? SeedFile.Substring(1 + SeedFile.LastIndexOf('\\')) : SeedFile; }
    public static void ReadSeed(bool init = false) {
      SeedFile = File.ReadAllText(Randomizer.SeedPathFile);
      if (File.Exists(SeedFile)) {
        PickupMap.Clear();
        TimerList.Clear();
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
              try {
                Settings = JsonConvert.DeserializeObject<SeedGenSettings>(configRaw);
              } catch(Exception e) { Randomizer.Error("SeedController.ReadSeed<Settings>", e, true); }
            } else if (rawLine.StartsWith("MULTISTATES: ")) {
              InterOp.set_multi_bool_count(rawLine.Replace("MULTISTATES: ", "").ParseToInt("ReadSeed.Multistates"));
              continue;
            } else if (rawLine.StartsWith("timer: ")) {
              ProcessTimer(rawLine.Substring("timer: ".Length));
            }
            line = rawLine.Split(new string[] { "//" }, StringSplitOptions.None)[0].Trim();
            if (line == "") continue;
            var ptrRegex = new Regex(@"\$\(([0-9]+)\|([0-9]+)\)", RegexOptions.Compiled);
            ptrRegex.Replace(line, (Match m) => m.Groups[1].Value.Replace("|", ";"));
            line = ptrRegex.Replace(line, "$($1;$2)");
            var frags = line.Split('|').ToList();
            var cond = new UberStateCondition(frags[0].ParseToInt(), frags[1]);
            var pickupType = (PickupType)frags[2].ParseToByte();

            // legacy shop cost support
            if (pickupType != PickupType.UberState && cond.Id.GroupID == (int)FakeUberGroups.OPHER_WEAPON && cond.Id.ID < 10000 && frags.Count() > 4 && float.TryParse(frags.Last(), NumberStyles.Number, CultureInfo.GetCultureInfo("en-US"), out float oMulti)) {
              ((AbilityType)cond.Id.ID).Slot().CostMultiplier = oMulti + 1; 
              frags.RemoveAt(frags.Count() - 1);
            }
            if (pickupType != PickupType.UberState && cond.Id.GroupID == (int)FakeUberGroups.TWILLEN_SHARD && cond.Id.ID < 100 && frags.Count() > 4 && float.TryParse(frags.Last(), NumberStyles.Number, CultureInfo.GetCultureInfo("en-US"), out float tMulti)) {
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
            PickupMap[cond] = cond.Pickup().Concat(pickup);
          }
          catch (Exception e) {
            Randomizer.Log($"Error parsing line: '{line}'\nError: {e.Message} \nStacktrace: {e.StackTrace}", false);
          }
        }
        Total = PickupMap.Count(p => p.Key.Loc() != LocData.Void);
        if(Settings.NetcodeEnabled) {
          if(AHK.IniFlag("DisableNetcode")) {
            AHK.Print("Warning: can't connect because netcode is disabled via settings");
          }
          WebSocketClient.Connect();
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

    public static void ProcessTimer(string timer) {
      var entries = timer.Split('|');
      if (entries.Length != 4)
        throw new Exception("Malformed timer expression: Too many |");

      if (!int.TryParse(entries[0], out int toggleGroup))
        throw new Exception("Malformed timer expression: non integer group");

      if (!int.TryParse(entries[1], out int toggleState))
        throw new Exception("Malformed timer expression: non integer state");

      if (!int.TryParse(entries[2], out int incGroup))
        throw new Exception("Malformed timer expression: non integer group");

      if (!int.TryParse(entries[3], out int incState))
        throw new Exception("Malformed timer expression: non integer state");

      if (InterOp.get_uber_state_type(toggleGroup, toggleState) != UberStateType.SerializedBooleanUberState)
        throw new Exception("Malformed timer expression: toggle state not a boolean");

      TimerList.Add(new TimerDefinition(toggleGroup, toggleState, incGroup, incState));
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
          if(cond == null)
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
            case SysCommandType.AHKSignal: {
                if (extras.Count != 1) {
                  Randomizer.Log($"malformed command specifier {pickupData}", false);
                  return new Message($"Invalid command {pickupData}!");
                }
                var value = (Input.Action)Enum.Parse(typeof(Input.Action), extras[0]);
                return new SendInputSignal(value);
              }
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
              return new ConditionalStop(t, uid, extras[2].ParseToDouble("BuildPickup.InterruptCondValue"));
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
              return new GrantIf(t, guid, extras[2].ParseToDouble("BuildPickup.GrantIfTargetValue"), p);

            case SysCommandType.SetState: {
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
              }
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
            case SysCommandType.EnableSync:
            case SysCommandType.DisableSync:
              if (extras.Count != 2) {
                Randomizer.Log($"malformed command specifier {pickupData}", false);
                return new Message($"Invalid command {pickupData}!");
              }
              var suid = new UberId(
                extras[0].ParseToInt("BuildPickup.UberGroupId"),
                extras[1].ParseToInt("BuildPickup.UberId")
              );
              return new SyncToggler(t, suid);
            case SysCommandType.CreateWarp:
            case SysCommandType.DestroyWarp: {
                if (extras.Count != (t == SysCommandType.CreateWarp ? 4 : 2)) {
                  Randomizer.Log($"malformed command specifier {pickupData}", false);
                  return new Message($"Invalid command {pickupData}!");
                }
                var area = (AreaType)extras[0].ParseToInt("BuildPickup.AreaType");
                if (area <= AreaType.None || area >= AreaType.TOTAL) {
                  Randomizer.Log($"invalid area {pickupData}", false);
                  return new Message($"Invalid command {pickupData}!");
                }
                var id = extras[1].ParseToInt("BuildPickup.Id");
                if (t == SysCommandType.CreateWarp) {
                  var x = extras[2].ParseToFloat("BuildPickup.X");
                  var y = extras[3].ParseToFloat("BuildPickup.Y");
                  return new Icon(area, id, x, y);
                }
                else {
                  return new Icon(area, id);
                }
              }
            default:
              return new SystemCommand((SysCommandType)pickupData.ParseToByte());
          }
        case PickupType.SysMessage:
          return SysMessage.Build((SysMessageType)pickupData.ParseToByte(), extras.FirstOrElse(""));
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
                  Randomizer.Log($"malformed wheel command specifier {pickupData}", false);
                  return new Message($"Invalid wheel command {pickupData}!");
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
                  Randomizer.Log($"malformed wheel command specifier {pickupData}", false);
                  return new Message($"Invalid wheel command {pickupData}!");
                }
                var wheel = extras[0].ParseToInt("BuildPickup.Wheel");
                var item = extras[1].ParseToInt("BuildPickup.Item");
                var r = extras[2].ParseToByte("BuildPickup.R");
                var g = extras[3].ParseToByte("BuildPickup.G");
                var b = extras[4].ParseToByte("BuildPickup.B");
                var a = extras[5].ParseToByte("BuildPickup.A");
                return new Wheel.SetColorCommand(wheel, item, r, g, b, a);
              }
            case WheelCommandType.SetActive: {
                if (extras.Count != 3) {
                  Randomizer.Log($"malformed wheel command specifier {pickupData}", false);
                  return new Message($"Invalid wheel command {pickupData}!");
                }
                var wheel = extras[0].ParseToInt("BuildPickup.Wheel");
                var item = extras[1].ParseToInt("BuildPickup.Item");
                var active = extras[2].ParseToBool("BuildPickup.Active");
                return new Wheel.SetActiveCommand(wheel, item, active);
              }
            case WheelCommandType.SetSticky: {
                if (extras.Count != 1) {
                  Randomizer.Log($"malformed wheel command specifier {pickupData}", false);
                  return new Message($"Invalid wheel command {pickupData}!");
                }
                var sticky = extras[0].ParseToBool("BuildPickup.Active");
                return new Wheel.SetStickyWheelCommand(sticky);
              }
            case WheelCommandType.Action: {
                // Check if we have everything before the pickup part.
                if (extras.Count < 5) {
                  Randomizer.Log($"malformed wheel command specifier {pickupData}", false);
                  return new Message($"Invalid wheel command {pickupData}!");
                }

                var wheel = extras[0].ParseToInt("BuildPickup.Wheel");
                var item = extras[1].ParseToInt("BuildPickup.Item");
                var binding = extras[2].ParseToInt("BuildPickup.Binding");
                var p = BuildPickup((PickupType)extras[3].ParseToByte("BuildPickup.WheelAction"), extras[4], extras.Skip(5).ToList(), cond);
                return new Wheel.ActionCommand(wheel, item, binding, p);
              }
            case WheelCommandType.ClearItem: {
                if (extras.Count != 2) {
                  Randomizer.Log($"malformed wheel command specifier {pickupData}", false);
                  return new Message($"Invalid wheel command {pickupData}!");
                }
                var wheel = extras[0].ParseToInt("BuildPickup.Wheel");
                var item = extras[1].ParseToInt("BuildPickup.Item");
                return new Wheel.ClearCommand(wheel, item);
              }
            case WheelCommandType.SetActiveWheel: {
                if (extras.Count != 1) {
                  Randomizer.Log($"malformed wheel command specifier {pickupData}", false);
                  return new Message($"Invalid wheel command {pickupData}!");
                }
                var wheel = extras[0].ParseToInt("BuildPickup.Wheel");
                return new Wheel.SetActiveWheelCommand(wheel);
              }
            case WheelCommandType.SetBehavior: {
                if (extras.Count != 1) {
                  Randomizer.Log($"malformed wheel command specifier {pickupData}", false);
                  return new Message($"Invalid wheel command {pickupData}!");
                }
                var behavior = extras[0].ParseToInt("BuildPickup.Behavior");
                return new Wheel.SetBehaviorCommand(behavior);
              }
            case WheelCommandType.ClearAll:
            case WheelCommandType.Refresh:
              return new Wheel.WheelCommand(w);
            default: {
                var err = $"Unknown pickup {type}|{pickupData}|{String.Join("|", extras)}";
                Randomizer.Error("BuildPickup", err, false);
                return new Message(err);
              }
          }
        case PickupType.UberState:
          extras.Insert(0, pickupData);
          if (extras.Count < 4 || extras.Count > 5) {
              var bad = String.Join("|", extras);
              Randomizer.Log($"malformed UberModifier specifier {bad}", false);
              return new Message($"Invalid UberModifier specifier {bad}!");
          }
          var uberId = new UberId(
              extras[0].ParseToInt("BuildPickup.UberGroupId"),
              extras[1].ParseToInt("BuildPickup.UberId")
            );
          var stateType = uberTypeFromString(extras[2]);
          Func<UberValue, double> modifier = GetUberSetter(stateType, extras[3]);
          return new UberStateModifier(uberId, modifier, extras[3], extras.Count == 5 ? extras[4].Replace("skip=", "").ParseToInt("BuildPickup.SupCount") : 0);
        default: {
            var err = $"Unknown pickup {type}|{pickupData}|{String.Join("|", extras)}";
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
                if(lo > hi) 
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
      Regex uberMsg = new Regex(@"\$\(([0-9]+);([0-9]+)\)", RegexOptions.Compiled);
      var m = uberMsg.Match(frag);
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
    public static bool IsDayTime() => AbilityType.SpiritEdge.HaveTree() || UberGet.Bool(7,2) || (Settings.LegacySeedgen && !Flags.Contains(Flag.RAIN));
    public static int Current { get => SaveController.FoundCount; }
    public static int Total = 0;

    public static string PickupCount => "Pickups: " + (Current == Total ? $"${Current}/{Total}$" : $"{Current}/{Total}");
    public static string Progress => PickupCount + GoalModeMessages(progress: true);
    public static string GoalModeMessages(string met = "$", string unmet = "", bool progress = false, bool withRelics = true) {
      if (InterOp.get_game_state() != GameState.Game)
        return ""; // don't even try!
      var goalMsgs = new List<String>();
      if (Flags.Contains(Flag.ALLWISPS)) {
        var max = UberStateController.Wisps.Count;
        var amount = UberStateController.Wisps.Count((UberState s) => s.ValueOr(new UberValue(false)).Bool);
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
        var amount = UberStateController.Quests.Count((UberState s) => s.ValueOr(new UberValue(0)).Int == s.Value.Int);
        var w = amount == max ? met : unmet;
        goalMsgs.Add($"{w}Quests: {amount}/{max}{w}");
      }
      var msg = String.Join(", ", goalMsgs);
      if (withRelics && Flags.Contains(Flag.RELIC_HUNT))
        msg += "\n"+Relic.RelicMessage();
      return goalMsgs.Count > 0 ? (progress ? "\n" : "") + msg : msg;
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
