using System;
using System.Collections.Generic;
using RandoMainDLL.Memory;
using System.ComponentModel;
using System.Runtime.Remoting.Lifetime;
using System.Runtime.InteropServices.WindowsRuntime;
using System.Linq;
using System.Runtime.InteropServices;

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
    [Description("Unknown")]
    Void
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
      return (p is QuestEvent);
    }

    public static Dictionary<ZoneType, List<Checkable>> KeyItemsByZone = new Dictionary<ZoneType, List<Checkable>>();
    public static Dictionary<Checkable, ZoneType> CheckableLocs = new Dictionary<Checkable, ZoneType>();
    public static Dictionary<CheckableHint, UberId> CheckableHints = new Dictionary<CheckableHint, UberId>();

    public static Dictionary<AbilityType, ZoneType> SkillLocs = new Dictionary<AbilityType, ZoneType>();
    public static ZoneType CleanWaterZone = ZoneType.Void;
    private static int nextCheckable = 0;

    public static void Reset() {
      KeyItemsByZone.Clear();
      CheckableLocs.Clear();
      SkillLocs.Clear();
      CheckableHints.Clear();
      ZoneHints.Clear();
      nextCheckable = 10;
    }

    public static void RegisterCheckable(CheckableHint ch) {
      if(nextCheckable == 14) {
        Randomizer.Error("HC.RegisterCheckable", "Max 5 checkable hints supported");
        return;
      }
      CheckableHints[ch] = new UberId(6, nextCheckable++);
    }

    public static void OnGrantCheckable(CheckableHint ch) {
      CheckableHints[ch].State().Write(new UberValue(true));
      AHK.SendPlainText(new PlainText($"Bought Hint: {ch.Hint}", 300));
    }

    public static void AddHint(ZoneType zone, Checkable item) {
      if (item is Ability abil)
        SkillLocs[abil.type] = zone;
      else if (item is QuestEvent q && q.type == QuestEventType.Water)
        CleanWaterZone = zone;

      if (KeyItemsByZone.ContainsKey(zone))
        KeyItemsByZone[zone].Add(item);
      else
        KeyItemsByZone[zone] = new List<Checkable>() { item };
    }

    public static void OnMapPan(AreaType type) {
      var msg = getZoneHintMessage(type.toZone(), isOnMap: true) + GetKeySkillHints();
      if (msg.Count(c => c == '\n') == 2) // if there's exactly 3 lines, insert an extra linebreak at the top
        msg = "\n" + msg;                 // so the middle text isn't obscured by the filter button
      InterOp.update_map_hint(msg);
    }

    public static void ProgressWithHints(ZoneType _zone = ZoneType.Void, bool justUnlocked = false) {
      int duration = justUnlocked ? 300 : 240;
      if (InterOp.get_game_state() != GameState.Game) {
        if (!justUnlocked)
          AHK.SendPlainText(new PlainText(SeedController.Progress, duration), justUnlocked);
        return;
      }

      var zone = _zone == ZoneType.Void ? CurrentZone : _zone;
      var msg = getZoneHintMessage(zone, justUnlocked);
      if (justUnlocked)
        msg = $"Bought hint: {msg.TrimStart()}";
      else if(ZoneHints.Contains(zone))
        msg = $"{SeedController.Progress}\n{msg}{GetKeySkillHints()}";
      else
        msg = $"{SeedController.Progress}{GetKeySkillHints()}";
      AHK.SendPlainText(new PlainText(msg, duration), justUnlocked);
    }

    private static string getZoneHintMessage(ZoneType zone, bool justUnlocked = false, bool isOnMap = false) {
      if (zone == ZoneType.Void) return $"no hint for Void (area {InterOp.get_player_area()})";
      if (!justUnlocked && !ZoneHints.Contains(zone))
        return "";
      var items = KeyItemsByZone.GetOrElse(zone, new List<Checkable>());
      var found = items.FindAll(i => i.Has());
      var rmsg = isOnMap ? Relic.MapMessage(zone) : "";
      if (!justUnlocked && !HaveHintForZone(zone)) return $"{zone}: {found.Count}/?? key items{rmsg}{(isOnMap ? "\n" : " ")}(Hint not unlocked)";

      var g = found.Count == items.Count ? "$" : "";
      if (found.Count > 0)
        return $"{zone}: {g}{found.Count}/{items.Count}{g} key items{rmsg}\nfound: {String.Join(", ", found.Select(i => i.DisplayName))}";
      else
        return $"{zone}: {found.Count}/{items.Count} key items{rmsg}";
    }
    public static ZoneType toZone(this AreaType t) => AreaToZone.GetOrElse(t, ZoneType.Void);
    // the two below shouldn't be properties, but i wanted to make the one above a property too?
    // so this was a compromise, if you think about it.
    public static ZoneType CurrentZone  {
      get {
        try {
           return InterOp.get_player_area().toZone();          
        } catch (Exception e) { 
          Randomizer.Error("Hints.CurrentZone", e, false);
          return ZoneType.Void;
        }
      }
    }
    public static bool HaveHintForZone(ZoneType zone) {
        try {
          if (zone == ZoneType.Void)
            return false;
          if (zone == ZoneType.Ruins)
            return UberGet.value(6, 10009).Bool;
          return UberGet.value(6, 10000 + (int)zone).Bool;
        }
        catch (Exception e) {
          Randomizer.Error("Hints.HaveHintForZone", e, false);
          return false;
        }
    }
      //new UberState() { Name = "mapmakerShowMapIconShardUberState", ID = 41666, GroupName = "npcsStateGroup", GroupID = 48248, Type = UberStateType.SerializedByteUberState };
    public static string GetKeySkillHints() {  
      foreach(var x in CheckableHints) {
        Randomizer.Log($"{x.Key.Name}: {x.Value} ({x.Value.GetValue().Bool}, {UberGet.value(x.Value)}", false);
      }
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

    public static HashSet<ZoneType> ZoneHints = new HashSet<ZoneType>();

  }
}
