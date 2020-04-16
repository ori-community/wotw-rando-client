using System;
using System.IO;
using RandoMainDLL.Memory;

namespace RandoMainDLL {
  public static class Randomizer {
    public static string SeedFile = @"C:\moon\.currentseed";
    public static string SeedNameFile = @"C:\moon\.currentseedname";
    public static string LogFile = @"C:\moon\cs_log.txt";
    public static string SaveFolder = @"C:\moon\saves";
    public static string VersionFile = @"C:\moon\VERSION";
    public static string VERSION => _version ?? (_version = File.Exists(VersionFile) ? File.ReadAllText(VersionFile) : "0.0.0");
    private static string _version;
    public static MemoryManager Memory;

    [DllExport]
    public static bool Initialize() {
      try {
        if (!Directory.Exists(SaveFolder)) {
          Directory.CreateDirectory(SaveFolder);
        }

        foreach (var fileName in new string[] { LogFile, SeedFile, SeedNameFile }) {
          if (!File.Exists(fileName)) {
            File.WriteAllText(fileName, "");
            Log($"Wrote blank {fileName} (normal for first-time init)");
          }
        }

        AHK.Init();
        SeedController.ReadSeed();
        Memory = new MemoryManager();
        if (!Memory.HookProcess()) {
          return false;
        }

        Memory.PatchNoPause(true);
        return true;
      }
      catch (Exception e) {
        Log($"init error: {e.Message}\n{e.StackTrace}");
        return true;
      }
    }

    [DllExport]
    public static int Update() {
      try {
        if (!Memory.IsHooked) {
          Memory.HookProcess();
          return 2;
        }
        AHK.Tick();
        if (Memory.GameState == GameState.TitleScreen) {
          UberStateController.Ready = false;
        }
        else if (Memory.GameState == GameState.Game) {
          UberStateController.Update();
          return -2;
        }
        return -1;
      }
      catch (Exception e) {
        Log($"Update error: {e.Message}\n{e.StackTrace}");
      }
      return 4;
    }

    public static bool Dev = false;

    public static void Error(string caller, Exception e) {
      Log($"{caller}: {e.Message}\n{e.StackTrace}");
    }

    public static void Log(string message, bool printIfDev = true) {
      if (AHK.IniFlag("MuteCSLogs")) {
        return;
      }

      if (LastMessage == message && message.Length > 60) {
        repeats++;
        if (repeats > 180) {
          repeats = 0;
          File.AppendAllText(LogFile, "suppressed repeats x180\n");
        }
        return;
      }
      LastMessage = message;
      File.AppendAllText(LogFile, message + "\n");
      if (Dev && printIfDev) {
        AHK.Print(message);
      }
    }

    public static string LastMessage = "";
    public static int repeats = 0;

    // interop flag system (reserve the right at any time to change this to a dict)
    public static bool OreFound = false;
    public static bool PleaseSave = false;
    public static bool BlackSheepWall = false;

    public delegate void Callback();
    public static Callback InputUnlockCallback;

    public enum FlagCode : int {
      Save = 0,
      Ore = 1,
      UnlockMap = 2,
      InputLockListener = 3,
    }

    [DllExport]
    public static int OreCount() => Memory.Ore;

    [DllExport]
    public static bool CheckFlag(FlagCode flag) {
      switch (flag) {
        case FlagCode.Ore:
          if (OreFound) {
            OreFound = false;
            return true;
          }
          return false;
        case FlagCode.Save:
          if (PleaseSave) {
            PleaseSave = false;
            return true;
          }
          return false;
        case FlagCode.UnlockMap:
          if (BlackSheepWall) {
            BlackSheepWall = false;
            return true;
          }
          return false;
        case FlagCode.InputLockListener:
          return Memory.GameState == GameState.Game && InputUnlockCallback != null;
        default:
          Log($"Unknown Flag code {flag}");
          return false;
      }
    }

    [DllExport]
    public static void OnInputUnlock() {
      InputUnlockCallback?.Invoke();
      InputUnlockCallback = null;
    }

    [DllExport]
    public static bool TreeFulfilled(AbilityType ability) => SaveController.Data.TreesActivated.Contains(ability);

    [DllExport]
    public static void OnTree(AbilityType ability) {
      SaveController.Data.TreesActivated.Add(ability);
      SeedController.OnTree(ability);
    }

    [DllExport]
    public static ulong GetShardSlotPtr() => Memory.ShardSlotPtr();

    [DllExport]
    public static bool InjectLogEnabled() => !AHK.IniFlag("MuteInjectLogs");

    [DllExport]
    public static bool InjectDebugEnabled() => AHK.IniFlag("DebugInjectLogs");

    [DllExport]
    public static bool DoInvertTree(AbilityType ability) => SaveController.Data.TreesActivated.Contains(ability) ^ Memory.HasAbility(ability);
  }
}
