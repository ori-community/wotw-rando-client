using System;
using System.Collections.Generic;
using RandoMainDLL.Memory;
using System.Text;
using System.ComponentModel;

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
    public static bool IsHintItem(this Pickup p) => (p is Ability) || (p is WorldEvent);

    public static Dictionary<ZoneType, List<Checkable>> HintObjects = new Dictionary<ZoneType, List<Checkable>>();
    public static ZoneType BurrowZone = ZoneType.Void;
    public static ZoneType WaterDashZone = ZoneType.Void;
    public static ZoneType LightBurstZone = ZoneType.Void;
    public static void Reset() {
      HintObjects.Clear();
    }

    public static void AddHint(ZoneType zone, Checkable item) {
      if(item.me is Ability) {
        AbilityType i = (item.me as Ability).type;
        if (i == AbilityType.Burrow)
          BurrowZone = zone;
        else if (i == AbilityType.LightBurst)
          LightBurstZone = zone;
        else if (i == AbilityType.WaterDash)
          WaterDashZone = zone;
      }
      if (HintObjects.ContainsKey(zone))
        HintObjects[zone].Add(item);
      else
        HintObjects[zone] = new List<Checkable>() { item };
    }

    public static void ShowHintMessage(ZoneType _zone = ZoneType.Void, bool justUnlocked = false) {
      var zone = _zone == ZoneType.Void ? CurrentZone : _zone;
      var msg = GetZoneHintMessage(zone, justUnlocked);
      if (justUnlocked)
        msg = $"Bought hint: {msg}";
      else
        msg = $"{SeedController.Progress}\n{msg}{GetKeySkillHint()}";
      AHK.SendPlainText(new PlainText(msg, 240), justUnlocked);
    }

    public static string GetZoneHintMessage(ZoneType zone, bool justUnlocked = false) {
      if (zone == ZoneType.Void) return $"Can't give hint for unknown zone (area {Randomizer.Memory.PlayerArea()})";
      if (!justUnlocked && !HaveHintForZone) return $"{zone}: 0/?? key items (Hint not unlocked)";
      if(HintObjects.TryGetValue(zone, out var items) && items.Count > 0) {
        var found = new List<String>();
        foreach(var item in items) 
          if (item.Has())
            found.Add(item.ToString());        
        if(found.Count == items.Count) 
          return $"{zone}: ${found.Count}/{items.Count} key items$\nfound: {String.Join(", ", found)}";
        else if (found.Count > 0)
          return $"{zone}: {found.Count}/{items.Count} key items\nfound: {String.Join(", ", found)}";
        else
          return $"{zone}: {found.Count}/{items.Count} key items";
      }
      return $"No key items in ${zone}";
    }
    // the two below shouldn't be properties, but i wanted to make the one above a property too?
    // so this was a compromise, if you think about it.
    public static ZoneType CurrentZone  {
      get {
        try {
          if (AreaToZone.TryGetValue(Randomizer.Memory.PlayerArea(), out ZoneType zone)) 
            return zone;
          else
            return ZoneType.Void;          
        } catch (Exception e) { 
          Randomizer.Error("Hints.CurrentZone", e, false);
          return ZoneType.Void;
        }
      }
    }
    public static bool HaveHintForZone {
      get {
        try {
          var zone = CurrentZone;
          if (zone == ZoneType.Void)
            return false;
          if (ZoneToState.TryGetValue(zone, out UberState state)) {
            var value = state.CurrentValue();
            if (!value.HasValue) return false;
            return value.Value.Bool;
          }
          else
            return false;
        }
        catch (Exception e) {
          Randomizer.Error("Hints.HaveHintForZone", e, false);
          return false;
        }
      }
    }
    public static UberState SkillHintState = new UberState() { Name = "mapmakerShowMapIconShardUberState", ID = 41666, GroupName = "npcsStateGroup", GroupID = 48248, Type = UberStateType.SerializedByteUberState };
    public static string GetKeySkillHint() {
      var value = SkillHintState.CurrentValue();
      if(value.HasValue && value.Value.Bool) {
        var b = Randomizer.Memory.HasAbility(AbilityType.Burrow) ? "$" : "";
        var w = Randomizer.Memory.HasAbility(AbilityType.WaterDash) ? "$" : "";
        var l = Randomizer.Memory.HasAbility(AbilityType.LightBurst) ? "$" : "";
        return $"\n{b}Burrow: {BurrowZone}{b}, {w}Water Dash: {WaterDashZone}{w}, {l}Light Burst: {LightBurstZone}{l}";
      }
      return "";
    }
    public static void OnLupoState(UberId id) {
      if(LupoZoneIds.ContainsKey(id)) {
        ShowHintMessage(LupoZoneIds[id], true);
      }
    }

    public static Dictionary<UberId, ZoneType> LupoZoneIds = new Dictionary<UberId, ZoneType>() {
      {new UberId(18767, 48248), ZoneType.Marsh},
      {new UberId(45538, 48248), ZoneType.Burrows},
      {new UberId(3638, 48248), ZoneType.Hollow},
      {new UberId(1590, 48248), ZoneType.Wellspring},
      {new UberId(1557, 48248), ZoneType.Pools},
      {new UberId(48423, 48248), ZoneType.Depths},
      {new UberId(61146, 48248), ZoneType.Wastes},
//      {new UberId(61146, 48248), ZoneType.Ruins}, 
      {new UberId(29604, 48248), ZoneType.Reach},
      {new UberId(4045, 48248), ZoneType.Willow},
      {new UberId(19396, 48248), ZoneType.Glades},
      {new UberId(57987, 48248), ZoneType.Woods},
    };


  }
}
