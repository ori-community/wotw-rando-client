using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Runtime.InteropServices;
using System.Threading;
using RandoMainDLL.Memory;

namespace RandoMainDLL {

  public static class MapController {

    public static void PopulateTrackedConds() {
      try {
        foreach (var line in File.ReadAllLines(Randomizer.BasePath + "state_data.csv")) {
          var data = line.Split(',');
          _trackedConds.Add(new UberStateCondition(data[1].ParseToInt("PopulateTrackedConds.GID"), data[2]));
        }
      } catch (Exception e) { Randomizer.Error("PopulateTrackedConds", e); }
    }
    private static List<UberStateCondition> _trackedConds = new List<UberStateCondition>();
    public static List<UberStateCondition> TrackedConds {
      get {
        if (_trackedConds.Count == 0)
          PopulateTrackedConds();
        return _trackedConds;
      }
    }

    public static List<ShardType> TrackedShards = new List<ShardType>() { ShardType.TripleJump };
    public static void UpdateReachable(int sleepTime = 30) {
      if (InterOp.get_game_state() == GameState.Game) {
        var t = new Thread(() => UpdateReachableAsync(sleepTime));
        t.Start();
      }
    }
    public static bool Updating;
    public static bool RustLogic = false;
    public static void UpdateReachableAsync(int sleepTime = 30) {
      try {
        Thread.Sleep(sleepTime); // wait to let values update
        if (Updating)
          return;
        Updating = true;
        var argsList = RustLogic ? new List<string> {
          "reach-check",
          // TODO maybe we won't pass these explicitly? since it's samefolder shit
          "--areas",
          $"\"{Randomizer.BasePath}areas.wotw\"",
          "--locations",
          $"\"{Randomizer.BasePath}loc_data.csv\"",
          "--uber-states",
          $"\"{Randomizer.BasePath}state_data.csv\"",

        } : new List<string> {
          "-jar",
          $"\"{Randomizer.BasePath}SeedGen.jar\" ",
          "ReachCheck"
          };
        argsList.AddRange(new List<string> {
          $"\"{SeedController.SeedFile}\"",
          $"{InterOp.get_max_health()}",
          $"{Convert.ToInt32(10*InterOp.get_max_energy())}",
          $"{UberGet.value(6, 0).Int}",
          $"{InterOp.get_ore()}",
          $"{InterOp.get_experience()}",
        });
        if (RustLogic)
          argsList.AddRange(TrackedConds.Where(c => c.Met()).Select(t => $"u:{t.Id.GroupID},{t.Id.ID}"));
        argsList.AddRange(SaveController.SkillsFound.Select((AbilityType at) => $"s:{(int)at}"));
        argsList.AddRange(Teleporter.TeleporterStates.Keys.Where(t => new Teleporter(t).Has()).Select(t => $"t:{(int)t}"));
        if (new QuestEvent(QuestEventType.Water).Has())
          argsList.Add("w:0");
        argsList.AddRange(TrackedShards.Where(sh => new Shard(sh).Has()).Select(t => $"sh:{(int)t}"));
        var proc = new System.Diagnostics.Process();
        proc.StartInfo.FileName = RustLogic ? @"seedgen.exe" : @"java.exe";
        proc.StartInfo.Arguments = String.Join(" ", argsList);
        proc.StartInfo.CreateNoWindow = true;
        proc.StartInfo.UseShellExecute = false;
        proc.StartInfo.RedirectStandardOutput = true;
        proc.StartInfo.RedirectStandardError = true;
        proc.StartInfo.WorkingDirectory = Randomizer.BasePath;
        proc.Start();
        if (!proc.WaitForExit(10000))
          Randomizer.Warn("MapController.waitForProc", "timed out waiting for reach check", false);
        Reachable.Clear();
        var rawOutput = proc.StandardOutput.ReadToEnd();
        if (rawOutput.Trim() != "")
          foreach (var rawCond in rawOutput.Split(',')) {
            try {
              var frags = rawCond.Split('|');
              var cond = new UberStateCondition(int.Parse(frags[0]), frags[1]);
              if (cond.Loc().Type == LocType.Shop) {
                if (cond.Met() || hintTypes.Contains(cond.Pickup().Type))
                  continue; // bought it or it's a hint. Either way it's known to be non progression, so it does not show on the map
                if(ShopSlot.Twillen.Any(e => e.State.Equals(cond.Id))) 
                  Reachable.Add(new UberStateCondition(2, "20000"));
                 else if (ShopSlot.Opher.Any(e => e.State.Equals(cond.Id))) 
                  Reachable.Add(new UberStateCondition(1, "20000"));
                 else if (ShopSlot.LupoStore.Any(e => e.State.Equals(cond.Id))) 
                  Reachable.Add(new UberStateCondition(48248, "20000"));
              }
              Reachable.Add(cond);
            }
            catch (Exception e) { Randomizer.Error($"GetReachableAsync (post-return) while parsing |{rawCond}|", e); }
          }
        /*
        if(Randomizer.Dev)
          Randomizer.Log($"Reach check:\nseed_gen_cli.exe {String.Join(" ", argsList)}\n gave output: \n{rawOutput}\n stderr was {proc.StandardError.ReadToEnd()}\nReachable after: {String.Join(" ", Reachable.Select(r => r.ToString()))}", false);
        */
        InterOp.refresh_inlogic_filter();
      }
      catch (Exception e) { Randomizer.Error("GetReachableAsync", e); }
      Updating = false;
    }
    private static readonly List<PickupType> hintTypes = new List<PickupType>() { PickupType.CheckableHint, PickupType.ZoneHint };
    public static int FilterIconType(int groupId, int id, int value) {
      var cond = new UberStateCondition(groupId, id, value);
      if (cond.Pickup().NonEmpty || cond.Loc() != LocData.Void)
        return (int)cond.Pickup().Icon;
      else
        return (int)WorldMapIconType.Eyestone;
    }
    public static void FilterIconText(IntPtr buffer, int length, int groupId, int id, int value, int filterId) {
      var cond = new UberStateCondition(groupId, id, value);
      var f = (FilterType)filterId;

      string text = ((f == FilterType.InLogic || f == FilterType.Spoilers) && UberGet.value(34543, 11226).Bool ? cond.SpoilerName() : LocName(cond)) ?? " ";
      length = Math.Min(text.Length, length);
      Marshal.Copy(text.ToCharArray(), 0, buffer, length);
    }

    public static void InitLupoPrices() {
      foreach (var lp in lupoPrices)
        InterOp.set_lupo_area_price(lp.Key, lp.Value);
    }

    private static readonly Dictionary<AreaType, int> lupoPrices = new Dictionary<AreaType, int>() {
      {AreaType.InkwaterMarsh, 200},
      {AreaType.KwoloksHollow, 150},
      {AreaType.WellspringGlades, 200},
      {AreaType.WaterMill, 150},
      {AreaType.MidnightBurrow, 50},
      {AreaType.SilentWoodland, 150},
      {AreaType.BaursReach, 150},
      {AreaType.LumaPools, 150},
      {AreaType.MouldwoodDepths, 150},
      {AreaType.WindsweptWastes, 150},
      {AreaType.WillowsEnd, 50},
    };


    public static string SpoilerName(this UberStateCondition cond) {
      var pick = cond.Pickup();
      string text = pick.Name;
      if (!pick.NonEmpty && cond.Loc() == LocData.Void)
        text = " ";

      foreach (var wrap in new string[] { "#", "*", "$", "@" })
        text = text.Replace(wrap, "");
      if (NameLabels)
        text = $"{cond.Loc().FullName}\n{text}";
      return text;
    }
    public static string LocName(this UberStateCondition cond) => NameLabels ? cond.Loc().FullName : cond.Loc()?.Name;
    enum FilterType {
        All = 0,
        Quests = 1,
        Teleports = 2,
        Collectibles = 3,
        InLogic = 4,
        Spoilers = 5,
        COUNT = 6,
    };
    public static bool FilterEnabled(int filterId) {
      var f = (FilterType)filterId;
      switch(f) {
        // TODO
        case FilterType.Quests:
          return !AHK.IniFlag("HideQuestFilter");
        case FilterType.Teleports:
          return !AHK.IniFlag("HideWarpFilter");
        case FilterType.Collectibles:
          return !AHK.IniFlag("HideCollectableFilter");
        case FilterType.InLogic:
          return SeedController.HasInternalSpoilers;
        case FilterType.Spoilers:
          return UberGet.value(34543, 11226).Bool;
        default:
          return true;
      }
    }
    public static bool NameLabels = false;
    public static bool FilterIconShow(int groupId, int id, int value) => Reachable.Contains(new UberStateCondition(groupId, id, value));
    public static HashSet<UberStateCondition> Reachable = new HashSet<UberStateCondition>();
  }
}
