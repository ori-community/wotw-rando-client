using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.InteropServices;
using System.Threading;
using RandoMainDLL.Memory;

namespace RandoMainDLL {

  public static class MapController {
    public static void UpdateReachable() {
      if(InterOp.get_game_state() == GameState.Game && !Updating) {
      var t = new Thread(UpdateReachableAsync);
      t.Start();
      }
    }
    public static bool Updating;
    public static void UpdateReachableAsync() {
      try {
        Updating = true;
        Thread.Sleep(30); // wait a frame or two to let values update
        var argsList = new List<string> {
          "-jar",
          $"{Randomizer.BasePath}SeedGen.jar ",
          "ReachCheck",
          SeedController.SeedFile,
          $"{InterOp.get_max_health()}",
          $"{Convert.ToInt32(10*InterOp.get_max_energy())}",
          $"{UberGet.value(6, 0).Int}",
          $"{InterOp.get_ore()}",
          $"{InterOp.get_experience()}",
        };
        // ^ this should probably be an array at this point...
        // TODO: send which key doors are already open
        argsList.AddRange(SaveController.Data.SkillsFound.Select((AbilityType at) => $"s:{(int)at}"));
        argsList.AddRange(Teleporter.TeleporterStates.Keys.Where(t => new Teleporter(t).Has()).Select(t => $"t:{(int)t}"));
        if (new QuestEvent(QuestEventType.Water).Has())
          argsList.Add("w:0");
        var proc = new System.Diagnostics.Process();
        proc.StartInfo.FileName = @"java.exe";
        proc.StartInfo.Arguments = String.Join(" ", argsList);
        proc.StartInfo.CreateNoWindow = true;
        proc.StartInfo.UseShellExecute = false;
        proc.StartInfo.RedirectStandardOutput = true;
        proc.StartInfo.WorkingDirectory = Randomizer.BasePath;
        proc.Start();
        proc.WaitForExit();
        Reachable.Clear();
        var rawOutput = proc.StandardOutput.ReadToEnd();
        foreach (var rawCond in rawOutput.Split(',')) {
          try {
            var frags = rawCond.Split('|');
            var cond = new UberStateCondition(int.Parse(frags[0]), frags[1]);
            Reachable.Add(cond.Id);
          } catch (Exception e) { Randomizer.Error($"GetReachableAsync (post-return) while parsing {rawCond}", e); }
        }
        InterOp.refresh_inlogic_filter();
      }
      catch (Exception e) { Randomizer.Error("GetReachableAsync", e); }
      Updating = false;
    }
    public static int FilterIconType(int groupId, int id) {
      var cond = new UberId(groupId, id).toCond();
      if (cond.Pickup().NonEmpty || cond.Loc() != LocData.Void)
        return (int)cond.Pickup().Icon;
      else
        return (int)WorldMapIconType.Eyestone;
    }

    public static void FilterIconText(IntPtr buffer, int length, int groupId, int id) {
      var cond = new UberId(groupId, id).toCond();
      var pick = cond.Pickup();
      string text = pick is Cash c ? $"{c.Amount} Spirit Light" : pick.ToString();
      if (!pick.NonEmpty && cond.Loc() == LocData.Void) 
        text = " ";
      
      foreach (var wrap in new string[] { "#", "*", "$", "@" })
        text = text.Replace(wrap, "");
      length = Math.Min(text.Length, length);
      Marshal.Copy(text.ToCharArray(), 0, buffer, length);
    }
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
    public static bool FilterIconShow(int groupId, int id) {
      // Show Icon (in logic)
      return Reachable.Contains(new UberId(groupId, id));
    }
    public static HashSet<UberId> Reachable = new HashSet<UberId>();
  }
}
