using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.InteropServices;
using System.Threading;
using RandoMainDLL.Memory;

namespace RandoMainDLL {

  public static class MapController {
    public static void Update() {
      if(FrameLockout > 0)
        FrameLockout--;
    }
    public static void UpdateReachable() {
      if(InterOp.get_game_state() == GameState.Game && FrameLockout < 1) {
      var t = new Thread(UpdateReachableAsync);
      t.Start();
      }
    }
    public static int FrameLockout = 0;
    public static void UpdateReachableAsync() {
      try {
        FrameLockout = 240;
        String args = $"-jar C:\\moon\\SeedGen.jar ReachCheck {InterOp.get_max_health()} {Convert.ToInt32(InterOp.get_max_energy())} {InterOp.get_keystones()} {InterOp.get_ore()} {InterOp.get_experience()} ";
        args += String.Join(" ", SaveController.Data.SkillsFound.Select((AbilityType at) => at.GetDescription().Replace(" ", "")));
        var proc = new System.Diagnostics.Process();
        proc.StartInfo.FileName = @"java.exe";
        proc.StartInfo.Arguments = args;
        Randomizer.Log(args, false);
        proc.StartInfo.CreateNoWindow = true;
        proc.StartInfo.UseShellExecute = false;
        proc.StartInfo.RedirectStandardOutput = true;
        proc.StartInfo.WorkingDirectory = @"C:\moon\";
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
      }
      catch (Exception e) { Randomizer.Error("GetReachableAsync", e); }
    }
    public static int FilterIconType(int groupId, int id) => (int) new UberId(groupId, id).toCond().Pickup().Icon;

    public static void FilterIconText(IntPtr buffer, int length, int groupId, int id) {
      string text = new UberId(groupId, id).toCond().Pickup().ToString();
      length = Math.Min(text.Length, length);
      Marshal.Copy(text.ToCharArray(), 0, buffer, length);
    }

    public static bool FilterIconShow(int groupId, int id) {
      // Show Icon (in logic)
      return Reachable.Contains(new UberId(groupId, id));
    }
    public static HashSet<UberId> Reachable = new HashSet<UberId>();
  }
}
