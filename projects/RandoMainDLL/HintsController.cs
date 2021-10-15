using System;
using System.Collections.Generic;
using RandoMainDLL.Memory;
using System.ComponentModel;
using System.Runtime.Remoting.Lifetime;
using System.Runtime.InteropServices.WindowsRuntime;
using System.Linq;
using System.Runtime.InteropServices;
using System.Net.Configuration;

namespace RandoMainDLL {
  public enum ZoneType : byte {
    [Description("Inkwater Marsh")]
    Marsh,
    [Description("Kwolok's Hollow")]
    Hollow,
    [Description("Wellspring Glades")]
    Glades,
    [Description("The Wellspring")]
    Wellspring,
    [Description("Luma Pools")]
    Pools,
    [Description("Midnight Burrows")]
    Burrows,
    [Description("Baur's Reach")]
    Reach,
    [Description("Silent Woods")]
    Woods,
    [Description("Mouldwood Depths")]
    Depths,
    [Description("Windswept Wastes")]
    Wastes,
    [Description("Windtorn Ruins")]
    Ruins,
    [Description("Willow's End")]
    Willow,
    [Description("Shop")]
    Shop,
    [Description("Unknown")]
    Void
  }
  public enum HintType : byte {
    None,
    [Description("Skills")] Skills,
    [Description("Teleporters")] Warps,
    [Description("Key items")]All = 10,
  }

  public static class HintsController {
    public static Dictionary<AreaType, ZoneType> AreaToZone = new Dictionary<AreaType, ZoneType>() {
      {AreaType.InkwaterMarsh, ZoneType.Marsh},
      {AreaType.KwoloksHollow, ZoneType.Hollow},
      {AreaType.WellspringGlades, ZoneType.Glades},
      {AreaType.WaterMill, ZoneType.Wellspring},
      {AreaType.MidnightBurrow, ZoneType.Burrows},
      {AreaType.SilentWoodland, ZoneType.Woods},
      {AreaType.BaursReach, ZoneType.Reach},
      {AreaType.LumaPools, ZoneType.Pools},
      {AreaType.MouldwoodDepths, ZoneType.Depths},
      {AreaType.WeepingRidge, ZoneType.Woods},
      {AreaType.WindsweptWastes, ZoneType.Wastes},
      {AreaType.WindtornRuins, ZoneType.Ruins},
      {AreaType.WillowsEnd, ZoneType.Willow},
    };
    public static Dictionary<ZoneType, UberState> ZoneToState = new Dictionary<ZoneType, UberState>() {
      {ZoneType.Marsh,  new UberState() { Name = "hasMapInkwaterMarsh", ID = 18767, GroupName = "npcsStateGroup", GroupID = 48248, Type = UberStateType.SerializedBooleanUberState }  },
      {ZoneType.Burrows,  new UberState() { Name = "hasMapHowlsOrigin", ID = 45538, GroupName = "npcsStateGroup", GroupID = 48248, Type = UberStateType.SerializedBooleanUberState }  },
      {ZoneType.Hollow,  new UberState() { Name = "hasMapKwoloksHollow", ID = 3638, GroupName = "npcsStateGroup", GroupID = 48248, Type = UberStateType.SerializedBooleanUberState }  },
      {ZoneType.Wellspring,  new UberState() { Name = "hasMapWellspring", ID = 1590, GroupName = "npcsStateGroup", GroupID = 48248, Type = UberStateType.SerializedBooleanUberState }  },
      {ZoneType.Pools,  new UberState() { Name = "hasMapLumaPools", ID = 1557, GroupName = "npcsStateGroup", GroupID = 48248, Type = UberStateType.SerializedBooleanUberState }  },
      {ZoneType.Depths,  new UberState() { Name = "hasMapMouldwoodDepths", ID = 48423, GroupName = "npcsStateGroup", GroupID = 48248, Type = UberStateType.SerializedBooleanUberState }  },
      {ZoneType.Wastes,  new UberState() { Name = "hasMapWindsweptWastes", ID = 61146, GroupName = "npcsStateGroup", GroupID = 48248, Type = UberStateType.SerializedBooleanUberState }  },
      {ZoneType.Ruins,  new UberState() { Name = "hasMapWindsweptWastes", ID = 61146, GroupName = "npcsStateGroup", GroupID = 48248, Type = UberStateType.SerializedBooleanUberState }  },
      {ZoneType.Reach,  new UberState() { Name = "hasMapBaursReach", ID = 29604, GroupName = "npcsStateGroup", GroupID = 48248, Type = UberStateType.SerializedBooleanUberState }  },
      {ZoneType.Willow,  new UberState() { Name = "hasMapWillowsEnd", ID = 4045, GroupName = "npcsStateGroup", GroupID = 48248, Type = UberStateType.SerializedBooleanUberState }  },
      {ZoneType.Glades, new UberState() { Name = "mapmakerShowMapIconEnergyUberState", ID = 19396, GroupName = "npcsStateGroup", GroupID = 48248, Type = UberStateType.SerializedByteUberState } },
      {ZoneType.Woods, new UberState() { Name = "mapmakerShowMapIconHealthUberState", ID = 57987, GroupName = "npcsStateGroup", GroupID = 48248, Type = UberStateType.SerializedByteUberState } },
    };
    // might change later?
    private static HashSet<AbilityType> BadSkills = new HashSet<AbilityType>() { AbilityType.DamageUpgrade1, AbilityType.DamageUpgrade2 };
    public static bool IsKeyItem(this Pickup p) {
      if(p is Ability a) 
        return !BadSkills.Contains(a.type);
      return p is QuestEvent || p is Teleporter;
    }

    public static Dictionary<ZoneType, List<Checkable>> KeyItemsByZone = new Dictionary<ZoneType, List<Checkable>>();
    public static Dictionary<Checkable, ZoneType> CheckableLocs = new Dictionary<Checkable, ZoneType>();
    public static Dictionary<CheckableHint, UberId> CheckableHints = new Dictionary<CheckableHint, UberId>();
    public static Dictionary<TeleporterType, ZoneType> TPLocs = new Dictionary<TeleporterType, ZoneType>();
    public static Dictionary<AbilityType, ZoneType> SkillLocs = new Dictionary<AbilityType, ZoneType>();
    public static ZoneType CleanWaterZone = ZoneType.Void;
    private static int nextCheckable = 0;

    public static void Reset() {
      KeyItemsByZone.Clear();
      CheckableLocs.Clear();
      SkillLocs.Clear();
      TPLocs.Clear();
      CheckableHints.Clear();
      ZoneHints.Clear();
      nextCheckable = 10;
    }

    public static void RegisterCheckable(CheckableHint ch) {
      if(nextCheckable == 20) {
        Randomizer.Error("HC.RegisterCheckable", "Max 10 checkable hints supported");
        return;
      }
      CheckableHints[ch] = new UberId(6, nextCheckable++);
    }

    public static void OnGrantCheckable(CheckableHint ch) {
      UberSet.Bool(CheckableHints[ch], true);
      Msg.SendPlainText(new PlainText($"Bought Hint: {ch.Hint}", 300));
    }

    public static void AddHint(ZoneType zone, Checkable item) {
      if (item is Ability abil)
        SkillLocs[abil.type] = zone;
      else if (item is QuestEvent q && q.type == QuestEventType.Water)
        CleanWaterZone = zone;
      else if (item is Teleporter t)
        TPLocs[t.type] = zone;
      if (KeyItemsByZone.ContainsKey(zone))
        KeyItemsByZone[zone].Add(item);
      else
        KeyItemsByZone[zone] = new List<Checkable>() { item };
    }

    public static void OnMapPan(AreaType type) {
      var pp = new UberId(13, 100 + (int)type.toZone()).toCond().Pickup();
      var msg = pp.NonEmpty ? pp.DisplayName : (getZoneHintMessage(type.toZone(), isOnMap: true) + GetKeySkillHints());
      if (msg.Count(c => c == '\n') == 2) // if there's exactly 3 lines, insert an extra linebreak at the top
        msg = "\n" + msg;                 // so the middle text isn't obscured by the filter button

      InterOp.update_map_hint(msg);
    }

    public static void ProgressWithHints(ZoneType _zone = ZoneType.Void, bool justUnlocked = false) {
      var zone = _zone == ZoneType.Void ? StatsTracking.CurrentZone : _zone;
      var pp = new UberId(13, (int)zone).toCond().Pickup();
      int duration = justUnlocked ? 300 : 240;
      if (pp.NonEmpty) {
        Msg.SendPlainText(new PlainText(pp.DisplayName, duration, pp.Pos, pp.Clear, pp.Immediate, pp.Quiet), justUnlocked);
        return;
      }
      if (InterOp.Utils.get_game_state() != GameState.Game) {
        if (!justUnlocked)
          Msg.SendPlainText(new PlainText(SeedController.Progress, duration), justUnlocked);
        return;
      }

      var msg = getZoneHintMessage(zone);
      if (justUnlocked)
        msg = $"Bought hint: {msg.TrimStart()}";
      else if(zone.BestHint() != HintType.None)
        msg = $"{SeedController.Progress}\n{msg}{GetKeySkillHints()}";
      else
        msg = $"{SeedController.Progress}{GetKeySkillHints()}";
      Msg.SendPlainText(new PlainText(msg, duration), justUnlocked);
    }

    private static string getZoneHintMessage(ZoneType zone, bool isOnMap = false) {
      if (zone == ZoneType.Void) return $"no hint for Void (area {InterOp.get_player_area()})";
      var bestHintKind = zone.BestHint();
      if (bestHintKind == HintType.None)
        return "";
      var items = KeyItemsByZone.GetOrElse(zone, new List<Checkable>()).Where(c => bestHintKind.ValidForType(c)).ToList();
      var found = items.FindAll(i => i.Has());
      var rmsg = isOnMap ? Relic.MapMessage(zone) : "";
      var hint = zone.HintState();
      if (hint == HintType.None) return $"{zone}: {found.Count}/?? Key items{rmsg}{(isOnMap ? "\n" : " ")}(No hint unlocked)";
      var validForCurrent = items.Where(c => hint.ValidForType(c)).ToList();
      found = found.Where(c => hint.ValidForType(c)).ToList();
      var g = found.Count == items.Count ? "$" : "";
      if (found.Count > 0)
        return $"{zone}: {g}{found.Count}/{validForCurrent.Count}{g} {hint.GetDescription()}{rmsg}\nfound: {String.Join(", ", found.Select(i => i.DisplayName))}";
      else
        return $"{zone}: {found.Count}/{items.Count} {hint.GetDescription()}{rmsg}";
    }
    public static ZoneType toZone(this AreaType t) => AreaToZone.GetOrElse(t, ZoneType.Void);
    public static HintType HintState(this ZoneType zone) {
      try {
        if (zone == ZoneType.Void)
          return HintType.None;
        if (zone == ZoneType.Ruins)
          return (HintType)UberGet.Byte(6, 10009);
        return (HintType)UberGet.Byte(6, 10000 + (int)zone);
      }
      catch (Exception e) {
        Randomizer.Error("Hints.HaveHintForZone", e, false);
        return HintType.None;
      }
    }
    public static bool ValidForType(this HintType zhs, Checkable c) {
      switch(zhs) {
        case HintType.Skills:
          return c is Ability || (c is QuestEvent q && q.type == QuestEventType.Water);
        case HintType.Warps:
          return c is Teleporter;
        case HintType.All:
          return HintType.Skills.ValidForType(c) ||
                 HintType.Warps.ValidForType(c);
        default:
          return false;
      }
    }
    public static HintType BestHint(this ZoneType zone) => ZoneHints.GetOrElse(zone, HintType.None);
    //new UberState() { Name = "mapmakerShowMapIconShardUberState", ID = 41666, GroupName = "npcsStateGroup", GroupID = 48248, Type = UberStateType.SerializedByteUberState };
    public static string GetKeySkillHints() {  
      String ret = string.Join("\n", CheckableHints.Where((kv) => kv.Value.GetValue().Bool).Select(kv => kv.Key.Hint));
      if (ret.Length > 0)
        ret = "\n" + ret;
      return ret;
    }

    public static string HintFrag(this Checkable c) {
      var w = c.Has() ? c.DisplayName[0].ToString() : "";
      var loc = CheckableLocs.ContainsKey(c) ? CheckableLocs[c].ToString() : "Unknown";
      return $"{w}{c.Name}: {loc}{w}";
    }

    public static Dictionary<ZoneType, HintType> ZoneHints = new Dictionary<ZoneType, HintType>();

  }
}
