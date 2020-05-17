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
      {ZoneType.Woods, new UberState() { Name = "mapmakerShowMapIconEnergyUberState", ID = 19396, GroupName = "npcsStateGroup", GroupID = 48248, Type = UberStateType.SerializedByteUberState } },
    }; 
    // might change later?
    public static bool IsHintItem(this Pickup p) => (p is Ability) || (p is WorldEvent);

    public static Dictionary<ZoneType, List<Checkable>> HintObjects = new Dictionary<ZoneType, List<Checkable>>();

    public static void Reset() {
      HintObjects.Clear();
    }

    public static void AddHint(ZoneType zone, Checkable item) {
      if (HintObjects.ContainsKey(zone))
        HintObjects[zone].Add(item);
      else
        HintObjects[zone] = new List<Checkable>() { item };
    }

    public static void ShowHintMessage(bool justUnlocked = false) {
      var msg = GetHintMessage(justUnlocked);
      if (justUnlocked)
        msg = $"Bought hint: {msg}";
      else
        msg = $"{SeedController.Progress}\n{msg}";
      AHK.SendPlainText(new PlainText(msg, 240), justUnlocked);
    }

    public static string GetHintMessage(bool justUnlocked = false) {
      var zone = CurrentZone;
      if (!zone.HasValue) return $"Can't give hint for unknown zone (area {Randomizer.Memory.PlayerArea()})";
      if (!justUnlocked && !HaveHintForZone) return $"{zone.Value}: 0/?? key items (Hint not unlocked)";
      if(HintObjects.TryGetValue(zone.Value, out var items) && items.Count > 0) {
        var found = new List<String>();
        foreach(var item in items) 
          if (item.Has()) 
            found.Add(item.ToString());        
        if(found.Count == items.Count) 
          return $"{zone.Value}: ${found.Count}/{items.Count} key items$\nfound: {String.Join(", ", found)}";
        else if (found.Count > 0)
          return $"{zone.Value}: {found.Count}/{items.Count} key items\nfound: {String.Join(", ", found)}";
        else
          return $"{zone.Value}: {found.Count}/{items.Count} key items";
      }
      return $"No key items in ${zone.Value}";
    }
    // the two below shouldn't be properties, but i wanted to make the one above a property too?
    // so this was a compromise, if you think about it.
    public static ZoneType? CurrentZone  {
      get {
        try {
          if (AreaToZone.TryGetValue(Randomizer.Memory.PlayerArea(), out ZoneType zone)) 
            return zone;
          else
            return null;          
        } catch (Exception e) { 
          Randomizer.Error("Hints.CurrentZone", e, false);
          return null;
        }
      }
    }
    public static bool HaveHintForZone {
      get {
        try {
          var zone = CurrentZone;
          if (!zone.HasValue)
            return false;
          if (ZoneToState.TryGetValue(zone.Value, out UberState state)) {
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
    public static HashSet<UberId> LupoZoneIds = new HashSet<UberId>() {
      new UberId(48248, 18767),
      new UberId(48248, 45538),
      new UberId(48248, 3638),
      new UberId(48248, 1590),
      new UberId(48248, 1557),
      new UberId(48248, 29604),
      new UberId(48248, 48423),
      new UberId(48248, 61146),
    };


  }
}
