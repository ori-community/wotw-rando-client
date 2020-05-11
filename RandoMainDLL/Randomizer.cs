using System;
using System.IO;
using RandoMainDLL.Memory;

namespace RandoMainDLL {
  public static class Randomizer {
    public static string SeedFile = @"C:\moon\.currentseed";
    public static string SeedNameFile = @"C:\moon\.currentseedname";
    public static string MessageLog = @"C:\moon\.messagelog";
    public static string LogFile = @"C:\moon\cs_log.txt";
    public static string SaveFolder = @"C:\moon\saves";
    public static string VersionFile = @"C:\moon\VERSION";
    public static string VERSION => _version ?? (_version = File.Exists(VersionFile) ? File.ReadAllText(VersionFile) : "0.0.0");
    private static string _version; // Opening a txt file every time we want to access this property? Nah.
    public static MemoryManager Memory;

    [DllExport]
    public static bool Initialize() {
      try {
        if (!Directory.Exists(SaveFolder)) {
          Directory.CreateDirectory(SaveFolder);
        }

        foreach (var fileName in new string[] { LogFile, SeedFile, SeedNameFile, MessageLog }) {
          if (!File.Exists(fileName)) {
            File.WriteAllText(fileName, "");
            Log($"Wrote blank {fileName} (normal for first-time init)");
          }
        }

        AHK.Init();
        SeedController.ReadSeed();
        RVAFinder.Init();
        Memory = new MemoryManager();
        if (!Memory.HookProcess()) {
          return false;
        }

        Memory.PatchNoPause(true);
        Log("init complete", false);
        return true;
      }
      catch (Exception e) {
        Log($"init error: {e.Message}\n{e.StackTrace}");
        return true;
      }
    }

    [DllExport]
    public static void Update() {
      try {
        RVAFinder.Update();
        if (!Memory.IsHooked) {
          Memory.HookProcess();
        }

        if (Memory.GameState == GameState.TitleScreen) {
          UberStateController.Ready = false;
        } else if (Memory.GameState == GameState.Game) {
          UberStateController.Update();
          if (InputUnlockCallback != null && InterOp.playerCanMove()) 
              OnInputUnlock();
        }
        AHK.Tick();
      }
      catch (Exception e) {
        Log($"Update error: {e.Message}\n{e.StackTrace}");
      }
    }

    public static bool Dev = false;

    public static void Error(string caller, Exception e, bool printIfDev = true) {
      Log($"{caller}: {e.Message}\n{e.StackTrace}", printIfDev, "ERROR");
    }

    public static void Log(string message, bool printIfDev = true, string level = "INFO") {
      if (AHK.IniFlag("MuteCSLogs")) {
        return;
      }
      File.AppendAllText(LogFile, $"{DateTime.Now.ToString("[yyyy-MM-dd HH:mm:ss.fff]")} ({level}): {message}\n");
      if (Dev && printIfDev) {
        AHK.Print(message, 180, false);
      }
    }


    public delegate void Callback();
    public static Callback InputUnlockCallback;
    public static void OnInputUnlock() {
      InputUnlockCallback?.Invoke();
      InputUnlockCallback = null;
    }

    [DllExport]
    public static int OreCount() => Memory.Ore;

    [DllExport]
    public static bool TreeFulfilled(AbilityType ability) => SaveController.Data.TreesActivated.Contains(ability);

    [DllExport]
    public static void OnTree(AbilityType ability) {
      SaveController.Data.TreesActivated.Add(ability);
      Memory.FillEnergy();
      Memory.FillHealth();
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
