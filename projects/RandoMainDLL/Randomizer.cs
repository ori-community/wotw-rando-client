using System;
using System.Collections.Concurrent;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Threading;
using RandoMainDLL.Memory;

namespace RandoMainDLL {
  public static class Randomizer {
    public static Random R;
    public static string BasePath = @"C:\moon\";
    public static string SeedPathFile => BasePath + ".currentseedpath"; 
    public static string MessageLog => BasePath + ".messagelog"; 
    public static string LogFile => BasePath + "cs_log.txt"; 
    public static string SaveFolder => BasePath + "saves"; 
    public static string VersionFile => BasePath + "VERSION"; 
    public static string VERSION => _version ?? (_version = File.Exists(VersionFile) ? File.ReadAllText(VersionFile) : "0.0.0");
    private static string _version;

    private static BlockingCollection<string> logQueue = new BlockingCollection<string>();

    public static int Bootstrap(string dllPath) {
       if (!Initialize())
        return 1;

      InterOp.RegisterCSharpBindings();
      return 0;
    }

    public static void OnNewGame(int slot) {
      try {
        // overwrite the message log TODO: save a backup maybe?
        File.WriteAllText(MessageLog, "");
        StatsTracking.OnNewGame();
        SeedController.ReadSeed();
        UberStateController.NeedsNewGameInit = true;
        UberStateController.UberStates.Clear();
        UberStateController.TimerUberStates.Clear();
        SaveController.NewGame(slot);
        BonusItemController.Refresh();
        MessageController.ShowTimedMessage("*Good Luck! <3*", position: new Vector2(0f, -3f));
      }
      catch (Exception e) {
        Randomizer.Error("OnNewGame", e);
      }
    }
    public static Thread logThread;
    public static bool ClearLog = false;
    public static bool Initialize() {
      try {
        if (logThread == null) {
          logThread = new Thread(() => {
            while (true) {
              try {
                if (ClearLog) {
                  int maxLogLines = Dev ? 1000 : 500;
                  var logLines = File.ReadAllLines(LogFile);
                  if (logLines.Length > maxLogLines)
                    File.WriteAllLines(LogFile, logLines.Skip(logLines.Length / 2));
                }

                var txt = logQueue.Take();
                while (logQueue.TryTake(out var line))
                  txt += line;
                File.AppendAllText(LogFile, txt);
              } catch (Exception e) {
                if (Dev)
                  MessageController.ShowTimedMessage($"error logging: {e}", log: false, queue: "debug");
              }
            }
          });
          logThread.Start();
        }

        R = new Random();

        BasePath = System.Runtime.InteropServices.Marshal.PtrToStringAnsi(InterOp.Utils.get_base_path());
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
        CreditsController.ReloadFile();
        Debug("Init: Complete", false);
        return true;
      } catch (Exception e) {
        Log($"init error: {e.Message}\n{e.StackTrace}");
        return true;
      }
    }

    public static void PostInitialize() {
      SeedController.ReadSeed(true);
    }

    private delegate void queuedCommand();
    private static BlockingCollection<queuedCommand> queuedCommands = new BlockingCollection<queuedCommand>();

    public static void Update(float delta) {
      try {
        var gs = InterOp.Utils.get_game_state();
        if (gs == GameState.TitleScreen) {
          UberStateController.SkipListeners = true;
          if (TitleScreenCallback != null)
            OnTitleScreen();
        } else if (gs == GameState.Game) {
          UberStateController.SkipListeners = false;
          UberStateController.Update(delta);
          if (InputUnlockCallback.Count != 0 && InterOp.player_can_move())
            OnInputUnlock();

          SeedController.UpdateGoal();
          MapController.Update();
          TrackFileController.Update();
        }

        while (queuedCommands.TryTake(out var command))
          command();

        AHK.Tick();
        MessageController.Tick();
        BonusItemController.Update();
        WebSocketClient.Update();
        Multiplayer.Update();
        StatsTracking.Update(gs, delta);
      } catch (Exception e) {
        Log($"Update error: {e.Message}\n{e.StackTrace}");
      }
    }

    public static void Shutdown() {
      WebSocketClient.Disconnect();
      UDPSocketClient.Stop();
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
        queuedCommands.Add(() => MessageController.ShowTimedMessage(text: message, queue: "debug"));
    }

    public delegate void Callback();
    public static List<Callback> InputUnlockCallback = new List<Callback>();
    public static Callback TitleScreenCallback;
    public static void OnTitleScreen() {
      TitleScreenCallback?.Invoke();
      TitleScreenCallback = null;
    }
    public static void OnInputUnlock() {
      for (var i = 0; i < InputUnlockCallback.Count; ++i) {
        var callback = InputUnlockCallback[i];
        callback.Invoke();
      }

      InputUnlockCallback.Clear();
    }
  }

}
