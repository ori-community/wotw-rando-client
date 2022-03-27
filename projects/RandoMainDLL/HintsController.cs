using System.Collections.Generic;
using RandoMainDLL.Memory;
using System.ComponentModel;
using System.Linq;

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

    public static void OnMapPan(AreaType type) {
      var pp = new UberId(13, 100 + (int)type.toZone()).toCond().Pickup();
      var msg = pp.DisplayName;
      if (msg.Count(c => c == '\n') == 2) // if there's exactly 3 lines, insert an extra linebreak at the top
        msg = "\n" + msg;                 // so the middle text isn't obscured by the filter button

      MessageController.SetInfoText(msg);
    }

    public static void ProgressWithHints(ZoneType _zone = ZoneType.Void, bool justUnlocked = false) {
      var zone = _zone == ZoneType.Void ? StatsTracking.CurrentZone : _zone;
      var pp = new UberId(13, (int)zone).toCond().Pickup();
      float duration = justUnlocked ? 5f : 4f;
      if (pp.NonEmpty) {
        Vector2? pos = pp.Pos.HasValue ? new Vector2?(new Vector2() { X = 0.0f, Y = pp.Pos.Value }) : null;
        MessageController.ShowTimedMessage(
          text: pp.DisplayName,
          time: duration,
          position: pos,
          screen: ScreenPosition.TopCenter,
          muted: pp.Quiet,
          log: justUnlocked
        );
      }
      else if (InterOp.Utils.get_game_state() != GameState.Game && !justUnlocked) {
        Vector2? pos = pp.Pos.HasValue ? new Vector2?(new Vector2() { X = 0.0f, Y = pp.Pos.Value }) : null;
        MessageController.ShowTimedMessage(
          text: SeedController.Progress,
          position: pos,
          screen: ScreenPosition.TopCenter,
          time: duration,
          muted: pp.Quiet,
          log: justUnlocked
        );
      }
    }

    public static ZoneType toZone(this AreaType t) => AreaToZone.GetOrElse(t, ZoneType.Void);
  }
}
