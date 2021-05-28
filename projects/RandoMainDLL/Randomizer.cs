using System;
using System.Collections.Concurrent;
using System.IO;
using System.Linq;
using System.Threading;
using RandoMainDLL.Memory;

namespace RandoMainDLL {
  public static class Randomizer {
    public static string BasePath = @"C:\moon\";
    public static string SeedPathFile => BasePath + ".currentseedpath"; 
    public static string MessageLog => BasePath + ".messagelog"; 
    public static string LogFile => BasePath + "cs_log.txt"; 
    public static string SaveFolder => BasePath + "saves"; 
    public static string VersionFile => BasePath + "VERSION"; 
    public static string VERSION => _version ?? (_version = File.Exists(VersionFile) ? File.ReadAllText(VersionFile) : "0.0.0");
    private static string _version;

    private static BlockingCollection<String> logQueue = new BlockingCollection<string>();

    public static int Bootstrap(string dllPath) {
       if (!Initialize())
        return 1;

      InterOp.RegisterCSharpBindings();
      return 0;
    }

    public static void OnNewGame(int slot) {
      try {
        // overwrite the message log TODO: save a backup maybe?
        File.WriteAllText(Randomizer.MessageLog, "");
        SeedController.ReadSeed();
        UberStateController.NeedsNewGameInit = true;
        UberStateController.UberStates.Clear();
        UberStateController.TickingUberStates.Clear();
        AHK.OnNewGame();
        SaveController.NewGame(slot);
        BonusItemController.Refresh();
      }
      catch (Exception e) {
        Randomizer.Error("OnNewGame", e);
      }
    }
    public static Thread logThread;
    public static bool Initialize() {
      try {
        if (logThread == null) {
          logThread = new Thread(() => {
            while (true) {
              try {
                var txt = logQueue.Take();
                while (logQueue.TryTake(out var line))
                  txt += line;
                File.AppendAllText(LogFile, txt);
              } catch (Exception e) {
                if (Dev) AHK.Print($"error logging: {e}", toMessageLog: false);
              }
            }
          });
          logThread.Start();
        }

        BasePath = System.Runtime.InteropServices.Marshal.PtrToStringAnsi(InterOp.get_base_path());
        Debug($"Init: set base path to {BasePath}");

        if (!Directory.Exists(SaveFolder)) 
          Directory.CreateDirectory(SaveFolder);
        
        if (!File.Exists(SeedPathFile)) 
          File.WriteAllText(SeedPathFile, BasePath + ".currentseed");
        
        foreach (var fileName in new string[] { LogFile, MessageLog }) {
          if (!File.Exists(fileName)) {
            File.WriteAllText(fileName, "");
            Log($"Wrote blank {fileName} (normal for first-time init)");
          }
        }

        AHK.Init();
        SeedController.ReadSeed(true);
        Debug("Init: Complete", false);
        return true;
      } catch (Exception e) {
        Log($"init error: {e.Message}\n{e.StackTrace}");
        return true;
      }
    }

    public static void Update() {
      try {
        var gs = InterOp.get_game_state();
        if (gs == GameState.TitleScreen) {
          UberStateController.SkipListeners = true;
          if (TitleScreenCallback != null)
            OnTitleScreen();
        } else if (gs == GameState.Game) {
          UberStateController.SkipListeners = false;
          UberStateController.Update();
          if (InputUnlockCallback != null && InterOp.player_can_move())
            OnInputUnlock();
          SeedController.UpdateGoal();
          TrackFileController.Update();
        }
        AHK.Tick();
        BonusItemController.Update();
        DiscordController.Update();
        WebSocketClient.Update();
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
    public static void Debug(string message, bool printIfDev = false) {
      Log(message, printIfDev, "DEBUG");
    }



    public static void Log(string message, bool printIfDev = true, string level = "INFO") {
      if (AHK.IniFlag("MuteCSLogs"))
        return;
      logQueue.Add($"{DateTime.Now:[yyyy-MM-dd HH:mm:ss.fff]} [{level}]: {message}\n");
      if (Dev && printIfDev)
        AHK.Print(message, 180, toMessageLog: false);
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
