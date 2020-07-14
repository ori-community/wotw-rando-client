using System;
using System.Text.RegularExpressions;
using System.Collections.Generic;
using System.IO;
using AutoHotkey.Interop;

namespace RandoMainDLL {
  public static class AHK {
    private static readonly string Program = @"

      signal := ""none""
      gui, add, edit, w50 h20 vextChannel gonSignalExt
      gui, show, hide, wotwRandoSecretChannel

      DoIniRead(Section, Key, iniPath := ""C:/moon/settings.ini"")
      {
        IniRead, out, %iniPath%, %Section%, %Key%
        return out
      }
      Tick() 
      {
        global signal
        return signal
      }
      return	

      !/::signal := ""exitapp""
      #IfWinActive, OriAndTheWilloftheWisps
      !j::signal := ""dev""
      !l::signal := ""reload""
      !t::signal := ""lastPickup""
      !p::signal := ""hintMessage""
      !^d::signal := ""toggleDebug""
      !^l::signal := ""toggleCursorLock""
      !^1::signal := ""test1""
      !^2::signal := ""test2""
      !^3::signal := ""test3""
      !^4::signal := ""test4""
      !^5::signal := ""test5""
      onSignalExt:
      gui, submit
      signal := extChannel
      return
      ";
    public static AutoHotkeyEngine Engine = AutoHotkeyEngine.Instance;
    public static bool Ready = false;

    public static void Init() {
      Engine.ExecRaw(Program);

      Ready = true;
      bool cursorLock = IniFlag("CursorLock");
      bool disableDebug = IniFlag("DisableDebugControls");
      if (cursorLock || disableDebug) {
        Randomizer.TitleScreenCallback = () => {
          if (disableDebug)
            InterOp.set_debug_controls(false);
          if(cursorLock)
            InterOp.toggle_cursorlock();
        };
      }

      if (IniFlag("dev"))
        Randomizer.Dev = true;
    }

    private static readonly HashSet<string> Falsey = new HashSet<string>() { "false", "False", "no", "", "0", "ERROR", null };

    public static bool IniFlag(string Flag) {
      if (!Ready) {
        return false;
      }

      return !Falsey.Contains(Engine.ExecFunction("DoIniRead", "Flags", Flag));
    }

    public static void Tick() {
      var signal = Engine.ExecFunction("Tick");
      if (signal != null && signal != "none") {
        Engine.SetVar("signal", "none");
        switch (signal) {
          case "reload":
            if (FramesTillUnlockReload == 0) {
              FramesTillNextSend = 0;
              SeedController.ReadSeed();
              if (InterOp.get_game_state() == Memory.GameState.Game)
                PsuedoLocs.RELOAD_SEED.OnCollect();
              FramesTillUnlockReload = 60;
            }
            break;
          case "lastPickup":
            FramesTillNextSend = 1; // the only reason this isn't = 0 is that spamming this could get really annoying
            MessageQueue.Enqueue(Last);
            break;
          case "hintMessage":
            HintsController.ProgressWithHints();
            break;
          case "dev":
            Randomizer.Dev = !Randomizer.Dev;
            Randomizer.Log($"Dev: {Randomizer.Dev}");
            break;
          case "exitapp":
            Environment.Exit(Environment.ExitCode);
            break;
          case "toggleDebug":
            InterOp.set_debug_controls(!InterOp.get_debug_controls());
            Print($"Debug {(InterOp.get_debug_controls() ? "enabled" : "disabled")}", toMessageLog: false);
            break;
          case "toggleCursorLock":
            Print($"Cursor Lock {(InterOp.toggle_cursorlock() ? "enabled" : "disabled")}", toMessageLog: false);
            break;
          case "test1":
            PsuedoLocs.BINDING_ONE.OnCollect();
            break;
          case "test2":
            PsuedoLocs.BINDING_TWO.OnCollect();
            break;
          case "test3":
            PsuedoLocs.BINDING_THREE.OnCollect();
            break;
          case "test4":
            Print("magic", 180, false);
            InterOp.magic_function();
            break;
          case "test5":
            tpCheatToggle = !tpCheatToggle;
            Print($"TPCheat {(tpCheatToggle ? "enabled" : "disabled")}");
            break;

          default:
            Randomizer.Log($"Recieved unknown signal {signal}");
            break;
        }
      }
      FramesTillUnlockReload = Math.Max(0, FramesTillUnlockReload - 1);
      if (FramesTillNextSend > 0) {
        FramesTillNextSend--;
      } else {
        if (CanPrint) {
          Current = MessageQueue.Peek();
          FramesTillNextSend = Current.Frames;
          try {
            InterOp.clear_visible_hints();
            InterOp.display_hint(Current.Text, Current.Frames / 60f);
            if (IniFlag("LogOnPrint")) {
              Randomizer.Log($"Sending {Current.Text} for {Current.Frames} ({MessageQueue.Count} remaining in queue)", false);
            }
            MessageQueue.Dequeue();
          } catch (Exception e) { Randomizer.Error("AHK.sendMsg", e, false); }

        } else {
          Current = null;
        }
      }
    }

    public static bool CanPrint { get => MessageQueue.Count > 0 && InterOp.hints_ready(); }
    // public static bool SendMessage
    public static IMessage Current = null;
    public static IMessage Last = new PlainText("*Good Luck! <3*");
    public static Queue<IMessage> MessageQueue = new Queue<IMessage>();
    public static int FramesTillUnlockReload = 0;
    public static int FramesTillNextSend = 0;

    public static void OnNewGame() {
      Last = new PlainText("*Good Luck! <3*");
    }
    public static void Pickup(string message, int frames = 180) {
      var msg = new PlainText(message, frames, SeedController.GrantingGoalModeLoc);
      if(SeedController.GrantingGoalModeLoc) 
        HintsController.ProgressWithHints();
      SendPlainText(msg);
      Last = msg;
    }
    public static void Print(string message, int frames = 180, bool toMessageLog = true) => SendPlainText(new PlainText(message, frames), toMessageLog);
    public static void SendPlainText(PlainText p, bool logMessage = true) {
      if (logMessage)
        File.AppendAllText(Randomizer.MessageLog, $"{Regex.Replace(p.Text, "[$#@*]", "")}\n");

      if (p.Lower) {
        InterOp.display_below(p.Text, p.Frames / 60f);
        return;
      }

      FramesTillNextSend /= 3;
      MessageQueue.Enqueue(p);
    }
    private static bool tpCheatToggle = false;
    public static bool TPToPickupsEnabled { get => tpCheatToggle && InterOp.get_debug_controls(); }
  }
  public interface IMessage {
    bool Lower { get; }
    string Text { get; }
    int Frames { get; }
  };

  public class PlainText : IMessage {
    public PlainText(string text, int frames = 180, bool lower = false) {
      Text = text;
      Frames = frames + (SeedController.GrantingGoalModeLoc ? 120 : 0);
      Lower = lower;
    }

    public string Text { get; }
    public int Frames { get; }
    public bool Lower { get; }
  }

}
