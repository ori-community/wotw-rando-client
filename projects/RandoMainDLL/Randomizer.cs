using System;
using System.IO;
using RandoMainDLL.Memory;

namespace RandoMainDLL {
  public static class Randomizer {
    public static string SeedPathFile = @"C:\moon\.currentseedpath";
    public static string MessageLog = @"C:\moon\.messagelog";
    public static string LogFile = @"C:\moon\cs_log.txt";
    public static string SaveFolder = @"C:\moon\saves";
    public static string VersionFile = @"C:\moon\VERSION";
    public static string VERSION => _version ?? (_version = File.Exists(VersionFile) ? File.ReadAllText(VersionFile) : "0.0.0");
    private static string _version;

    public static int Bootstrap(string dllPath) {
       if (!Initialize())
        return 1;

      InterOp.RegisterCSharpBindings();
      return 0;
    }

    public static void OnNewGame(int slot) {
      // overwrite the message log TODO: save a backup maybe?
      File.WriteAllText(Randomizer.MessageLog, "");
      SeedController.ReadSeed();
      UberStateController.NeedsNewGameInit = true;
      AHK.OnNewGame();
      SaveController.NewGame(slot);
    }

    public static bool Initialize() {
      try {
        if (!Directory.Exists(SaveFolder)) 
          Directory.CreateDirectory(SaveFolder);
        
        if (!File.Exists(SeedPathFile)) 
          File.WriteAllText(SeedPathFile, @"C:\moon\.currentseed");
        
        foreach (var fileName in new string[] { LogFile, MessageLog }) {
          if (!File.Exists(fileName)) {
            File.WriteAllText(fileName, "");
            Log($"Wrote blank {fileName} (normal for first-time init)");
          }
        }

        AHK.Init();
        SeedController.ReadSeed(true);
        RVAFinder.Init();
        Log("init complete", false);
        return true;
      } catch (Exception e) {
        Log($"init error: {e.Message}\n{e.StackTrace}");
        return true;
      }
    }

    public static void Update() {
      try {
        RVAFinder.Update();
        if (InterOp.get_game_state() == GameState.TitleScreen) {
          if (TitleScreenCallback != null)
            OnTitleScreen();
          UberStateController.SkipListenersNextUpdate = true;
        } else if (InterOp.get_game_state() == GameState.Game) {
          UberStateController.Update();
          if (InputUnlockCallback != null && InterOp.player_can_move())
            OnInputUnlock();
          SeedController.UpdateGoal();
          TrackFileController.Update();
        }
        AHK.Tick();
        BonusItemController.Update();
      } catch (Exception e) {
        Log($"Update error: {e.Message}\n{e.StackTrace}");
      }
    }

    public static bool Dev = false;

    public static void Error(string caller, Exception e, bool printIfDev = true) {
      Log($"{caller}: {e.Message}\n{e.StackTrace}", printIfDev, "ERROR");
    }
    public static void Error(string caller, string message, bool printIfDev = true) {
      Log($"{caller}: {message}", printIfDev, "WARN");
    }
    public static void Warn(string caller, string message, bool printIfDev = true) {
      Log($"{caller}: {message}", printIfDev, "WARN");
    }

    public static void Log(string message, bool printIfDev = true, string level = "INFO") {
      if (AHK.IniFlag("MuteCSLogs"))
        return;
      if (level == "DEBUG" && !Dev)
        return;
      File.AppendAllText(LogFile, $"{DateTime.Now.ToString("[yyyy-MM-dd HH:mm:ss.fff]")} [{level}]: {message}\n");
      if (Dev && printIfDev)
        AHK.Print(message, 180, false);
    }


    public delegate void Callback();
    public static Callback InputUnlockCallback;
    public static Callback TitleScreenCallback;
    public static void OnTitleScreen() {
      TitleScreenCallback?.Invoke();
      TitleScreenCallback = null;
    }
    public static void OnInputUnlock() {
      InputUnlockCallback?.Invoke();
      InputUnlockCallback = null;
    }
  }

}
