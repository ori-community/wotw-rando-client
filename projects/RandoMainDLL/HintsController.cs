﻿using System;
using System.Collections.Generic;
using RandoMainDLL.Memory;
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
    public static bool IsHintItem(this Pickup p) => (p is Ability) || (p is QuestEvent);

    public static Dictionary<ZoneType, List<Checkable>> HintObjects = new Dictionary<ZoneType, List<Checkable>>();
    public static ZoneType BurrowZone = ZoneType.Void;
    public static ZoneType WaterDashZone = ZoneType.Void;
    public static ZoneType LightBurstZone = ZoneType.Void;
    public static void Reset() {
      HintObjects.Clear();
    }

    public static void AddHint(ZoneType zone, Checkable item) {
      if(item is Ability abil) 
        switch(abil.type) {
          case AbilityType.Burrow:
            BurrowZone = zone;
            break;
          case AbilityType.LightBurst:
            LightBurstZone = zone;
            break;
          case AbilityType.WaterDash:
            WaterDashZone = zone;
            break;
          default:
            break;
      }
      if (HintObjects.ContainsKey(zone))
        HintObjects[zone].Add(item);
      else
        HintObjects[zone] = new List<Checkable>() { item };
    }

    public static void OnMapPan(AreaType type) {
      if (SeedController.HintsDisabled)
        return;
      InterOp.update_map_hint(getZoneHintMessage(type.toZone(), false) + GetKeySkillHint());
    }

    public static void ShowHintMessage(ZoneType _zone = ZoneType.Void, bool justUnlocked = false) {
      int duration = 240;
      if (justUnlocked)
        duration += 60;
      if (SeedController.HintsDisabled) {
        if(!justUnlocked)
          AHK.SendPlainText(new PlainText(SeedController.Progress, duration), justUnlocked);
        return;
      }

      var zone = _zone == ZoneType.Void ? CurrentZone : _zone;
      var msg = getZoneHintMessage(zone, justUnlocked);
      if (justUnlocked)
        msg = $"Bought hint: {msg}";
      else
        msg = $"{SeedController.Progress}\n{msg}{GetKeySkillHint()}";
      AHK.SendPlainText(new PlainText(msg, duration), justUnlocked);
    }

    private static string getZoneHintMessage(ZoneType zone, bool justUnlocked) {
      if (zone == ZoneType.Void) return $"no hint for Void(area {InterOp.get_player_area()})";
      var items = HintObjects.GetOrElse(zone, new List<Checkable>());
      var found = items.FindAll(i => i.Has());
      if (!justUnlocked && !HaveHintForZone(zone)) return $"{zone}: {found.Count}/?? key items (Hint not unlocked)";
      if(items.Count > 0) {
        if(found.Count == items.Count) 
          return $"{zone}: ${found.Count}/{items.Count} key items$\nfound: {String.Join(", ", found)}";
        else if (found.Count > 0)
          return $"{zone}: {found.Count}/{items.Count} key items\nfound: {String.Join(", ", found)}";
        else
          return $"{zone}: {found.Count}/{items.Count} key items";
      }
      return $"No key items in {zone}";
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
          if (ZoneToState.TryGetValue(zone, out UberState state)) {
            var value = state.CurrentValue();
            return value.HasValue && value.Value.Bool;
          }
          else
            return false;
        }
        catch (Exception e) {
          Randomizer.Error("Hints.HaveHintForZone", e, false);
          return false;
        }
    }
    public static UberState SkillHintState = new UberState() { Name = "mapmakerShowMapIconShardUberState", ID = 41666, GroupName = "npcsStateGroup", GroupID = 48248, Type = UberStateType.SerializedByteUberState };
    public static string GetKeySkillHint() {
      var value = SkillHintState.CurrentValue();
      if(value.HasValue && value.Value.Bool) {
        var b = SaveController.HasAbility(AbilityType.Burrow) ? "$" : "";
        var w = SaveController.HasAbility(AbilityType.WaterDash) ? "$" : "";
        var l = SaveController.HasAbility(AbilityType.LightBurst) ? "$" : "";
        return $"\n{b}Burrow: {BurrowZone}{b}, {w}Water Dash: {WaterDashZone}{w}, {l}Light Burst: {LightBurstZone}{l}";
      }
      return "";
    }
    public static void OnLupoState(UberId id) {
      if (SeedController.HintsDisabled)
        return;
      if (LupoZoneIds.ContainsKey(id)) {
        ShowHintMessage(LupoZoneIds[id], true);
      } else if(id.ID == 41666) {
        AHK.SendPlainText(new PlainText($"Bought Hint: {GetKeySkillHint()}", 300));
      }
    }

    public static Dictionary<UberId, ZoneType> LupoZoneIds = new Dictionary<UberId, ZoneType>() {
      {new UberId(48248, 18767), ZoneType.Marsh},
      {new UberId(48248, 45538), ZoneType.Burrows},
      {new UberId(48248, 3638), ZoneType.Hollow},
      {new UberId(48248, 1590), ZoneType.Wellspring},
      {new UberId(48248, 1557), ZoneType.Pools},
      {new UberId(48248, 48423), ZoneType.Depths},
      {new UberId(48248, 61146), ZoneType.Wastes}, // ruins too but eh
      {new UberId(48248, 29604), ZoneType.Reach},
      {new UberId(48248, 4045), ZoneType.Willow},
      {new UberId(48248, 19396), ZoneType.Glades},
      {new UberId(48248, 57987), ZoneType.Woods},
    };


  }
}
