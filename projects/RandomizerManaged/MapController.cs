using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Runtime.InteropServices;
using System.Threading;
using System.Threading.Tasks;
using RandomizerManaged.Memory;

namespace RandomizerManaged {
  public static class MapController {
    public static bool ReachCheckRunning;
    private static bool ReachCheckPending = false;

    public static void FixedUpdate() {
      // Queue up requested reach check.
      if (!ReachCheckRunning && InterOp.Utils.get_game_state() == GameState.Game && ReachCheckPending) {
        ReachCheckPending = false;
        ReachCheckRunning = true;
        
        var args = GetArgs();
        Task.Run(() => UpdateReachableAsync(args));
      }

      // Parse reach check result.
      if (reachCheckResult != null) {
        Reachable.Clear();
        if (reachCheckResult != "")
          foreach (var reachableNodeName in reachCheckResult.Split(',').Select(p => p.Trim())) {
            try {
              var locData = LocDataStatic.ByName[reachableNodeName];
              if (locData.Type == LocType.Shop) {
                if (locData.Condition.Met())
                  continue; // already bought
                if (ShopSlot.Twillen.Any(e => e.State.Equals(locData.Condition.Id)))
                  Reachable.Add(new UberStateCondition(2, "20000"));
                else if (ShopSlot.Opher.Any(e => e.State.Equals(locData.Condition.Id)))
                  Reachable.Add(new UberStateCondition(1, "20000"));
                else if (ShopSlot.LupoStore.Any(e => e.State.Equals(locData.Condition.Id)))
                  Reachable.Add(new UberStateCondition(48248, "20000"));
                //else if (ShopSlot.GromStore.Any(e => e.State.Equals(cond.Id)))
                //  Reachable.Add(new UberStateCondition(3, "20000"));
              }

              Reachable.Add(locData.Condition);
            }
            catch (Exception e) { Randomizer.Error($"MapController.Update, while processing node |{reachableNodeName}|", e); }
          }

        InterOp.Map.refresh_map();
        reachCheckResult = null;
      }
    }

    public static void PopulateTrackedNodes() {
      try {
        foreach (var line in File.ReadAllLines(Path.Combine(Randomizer.BasePath, "state_data.csv")).Skip(1)) {
          var data = line.Split(',').Select(p => p.Trim()).ToArray();

          var conditionString = data[2];
          if (data[3] != "") {
            conditionString += ">=" + data[3];
          }

          _trackedNodes.Add(new TrackedNode(
            data[0],
            new UberStateCondition(data[1].ParseToInt("PopulateTrackedConds.GID"), conditionString)
          ));
        }
      }
      catch (Exception e) { Randomizer.Error("PopulateTrackedConds", e); }
    }

    public class TrackedNode {
      private string _name;
      private UberStateCondition _condition;

      public string Name => _name;

      public UberStateCondition Condition => _condition;

      public TrackedNode(string name, UberStateCondition condition) {
        _name = name;
        _condition = condition;
      }
    }

    private static List<TrackedNode> _trackedNodes = new();

    public static List<TrackedNode> TrackedNodes {
      get {
        if (_trackedNodes.Count == 0)
          PopulateTrackedNodes();
        return _trackedNodes;
      }
    }

    public static List<ShardType> TrackedShards = new() {
      ShardType.TripleJump,
      ShardType.Overcharge,
      ShardType.TripleJump,
      ShardType.Wingclip,
      ShardType.Magnet,
      ShardType.Splinter,
      ShardType.Reckless,
      ShardType.Resilience,
      ShardType.Vitality,
      ShardType.Energy,
      ShardType.LifePact,
      ShardType.LastStand,
      ShardType.UltraBash,
      ShardType.UltraGrapple,
      ShardType.Overflow,
      ShardType.Thorn,
      ShardType.Catalyst,
      ShardType.Sticky,
      ShardType.Finesse,
      ShardType.SpiritSurge,
      ShardType.Lifeforce,
      ShardType.Deflector,
      ShardType.Fracture,
    };

    public static void QueueReachCheck() {
      if (InterOp.Utils.get_game_state() == GameState.Game) {
        ReachCheckPending = true;
      }
    }

    public static void UpdateReachableAsync(List<String> argsList) {
      try {
        var proc = new System.Diagnostics.Process();
        proc.StartInfo.FileName = Path.Combine(Randomizer.BasePath, "seedgen.exe");
        proc.StartInfo.Arguments = String.Join(" ", argsList);
        proc.StartInfo.CreateNoWindow = true;
        proc.StartInfo.UseShellExecute = false;
        proc.StartInfo.RedirectStandardOutput = true;
        proc.StartInfo.RedirectStandardError = true;
        proc.StartInfo.WorkingDirectory = Randomizer.BasePath;
        proc.Start();
        if (!proc.WaitForExit(10000))
          Randomizer.Warn("MapController.waitForProc", "timed out waiting for reach check", false);
        
        reachCheckResult = proc.StandardOutput.ReadToEnd().Trim();
        var reachCheckErrors = proc.StandardError.ReadToEnd().Trim();

        if (reachCheckErrors != "") {
          Randomizer.Warn("MapController.UpdateReachableAsync", reachCheckErrors);
        }
      }
      catch (Exception e) { Randomizer.Error("GetReachableAsync", e); }

      ReachCheckRunning = false;
    }

    private static string reachCheckResult = null;

    private static List<String> GetArgs() {
      var argsList = new List<string> {
        "reach-check",
        // TODO maybe we won't pass these explicitly? since it's samefolder shit
        "--areas",
        $"\"{Path.Combine(Randomizer.BasePath, "areas.wotw")}\"",
        "--locations",
        $"\"{Path.Combine(Randomizer.BasePath, "loc_data.csv")}\"",
        "--uber-states",
        $"\"{Path.Combine(Randomizer.BasePath, "state_data.csv")}\"",
        $"\"{SeedController.SeedFile}\"",
        $"{InterOp.Player.get_max_health()}",
        InterOp.Player.get_max_energy().ToString(System.Globalization.CultureInfo.InvariantCulture),
        $"{InterOp.Player.get_keystones()}",
        $"{UberGet.value(6, 5).Int}",
        $"{UberGet.value(6, 3).Int}",
      };
      argsList.AddRange(
        TrackedNodes
          .Where(node => node.Condition.Met())
          .Select(node => $"n:{node.Name}")
      );
      argsList.AddRange(SaveController.SkillsFound.Select((AbilityType at) => $"s:{(int)at}"));
      argsList.AddRange(Teleporter.TeleporterStates.Keys.Where(t => new Teleporter(t).Has())
        .Select(t => $"t:{(int)t}"));
      if (new QuestEvent(QuestEventType.Water).Has())
        argsList.Add("w:0");
      argsList.AddRange(TrackedShards.Where(sh => new Shard(sh).Has()).Select(t => $"sh:{(int)t}"));
      return argsList;
    }

    public static int FilterIconType(int groupId, int id, int value) {
      var cond = new UberStateCondition(groupId, id, value == 0 ? 1 : value,
        value == -1 ? UberStateCondition.Comparison.Greater : UberStateCondition.Comparison.Equals);
      var pickup = cond.Pickup();

      if (pickup.NonEmpty || cond.Loc() != LocData.Void)
        return (int)pickup.Icon;
      else
        return (int)WorldMapIconType.Eyestone;
    }

    public static void FilterIconText(IntPtr buffer, int length, int groupId, int id, int value, int filterId) {
      var cond = new UberStateCondition(groupId, id, value == 0 ? 1 : value,
        value == -1 ? UberStateCondition.Comparison.Greater : UberStateCondition.Comparison.Equals);
      var pickup = cond.Pickup();
      var f = (FilterType)filterId;

      string text = ((f == FilterType.InLogic || f == FilterType.Spoilers) && UberGet.value(34543, 11226).Bool
        ? cond.SpoilerName(pickup)
        : LocName(cond)) ?? " ";
      length = Math.Min(text.Length, length / sizeof(char));
      Marshal.Copy(text.ToCharArray(), 0, buffer, length);
    }

    public static string SpoilerName(this UberStateCondition cond, Pickup pick) {
      string text = pick.DisplayName;
      if (pick.NonEmpty && text == Pickup.DisplayNameEmpty)
        text = pick.Name;

      if (text == string.Empty || text == Pickup.DisplayNameEmpty)
        text = " ";

      if (!pick.NonEmpty && cond.Loc() == LocData.Void)
        text = " ";

      foreach (var wrap in new string[] {"#", "*", "$", "@"})
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
      Players = 6,
      COUNT = 7,
    };

    public static bool FilterEnabled(int filterId) {
      var f = (FilterType)filterId;
      switch (f) {
        // TODO
        case FilterType.Quests:
          return !Settings.IniFlag("HideQuestFilter");
        case FilterType.Teleports:
          return !Settings.IniFlag("HideWarpFilter");
        case FilterType.Collectibles:
          return !Settings.IniFlag("HideCollectableFilter");
        case FilterType.InLogic:
          return SeedController.EnableLogicFilter;
        case FilterType.Spoilers:
          return UberGet.value(34543, 11226).Bool;
        case FilterType.Players:
          return WebSocketClient.WantConnection && Multiplayer.GetPlayerCount() > 1;
        default:
          return true;
      }
    }

    public static bool NameLabels = false;

    public static bool FilterIconShow(int groupId, int id, int value, UberStateCondition.Comparison comparison) {
      return Reachable.Contains(new UberStateCondition(groupId, id, value, comparison));
    }

    public static HashSet<UberStateCondition> Reachable = new();
  }
}
