using System;
using System.Text.RegularExpressions;
using System.Collections.Generic;
using System.IO;
using AutoHotkey.Interop;
using RandoMainDLL.Memory;

namespace RandoMainDLL {
  public static class AHK {
    private static readonly string Program = @"
      #MenuMaskKey vkE8
      signal := ""none""
      gui, add, edit, w50 h20 vextChannel gonSignalExt
      gui, show, hide, wotwRandoSecretChannel

      DoIniRead(Section, Key, iniPath := ""$(BASEPATH)settings.ini"")
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
      !^c::signal := ""printcoords""
      !^n::signal := ""namespoilertoggle""
      onSignalExt:
      gui, submit
      signal := extChannel
      return
      ";
    public static AutoHotkeyEngine Engine = AutoHotkeyEngine.Instance;
    public static bool Ready = false;

    public static void Init() {
      Engine.ExecRaw(Program.Replace("$(BASEPATH)", Randomizer.BasePath));

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
    private static Dictionary<string, Boolean> iniFlagCache = new Dictionary<string, bool>();
    public static bool IniFlag(string flag) {
      if (!Ready) {
        return false;
      }
      if(!iniFlagCache.ContainsKey(flag))
        iniFlagCache[flag] = !Falsey.Contains(Engine.ExecFunction("DoIniRead", "Flags", flag));
      return iniFlagCache[flag];
    }

    public static string IniString(string section, string name, string def = "") {
      var raw = Engine.ExecFunction("DoIniRead", section, name);
      return Falsey.Contains(raw) ? def : raw;
    }

    public static void Tick() {
      var signal = Engine.ExecFunction("Tick");
      if (signal != null && signal != "none") {
        Engine.SetVar("signal", "none");
        switch (signal) {
          case "reload":
            if (FramesTillUnlockReload == 0) {

              iniFlagCache.Clear();
              FramesTillNextSend = 0;
              Randomizer.Client.Connect();
              SeedController.ReadSeed();
              if (InterOp.get_game_state() == GameState.Game)
                PsuedoLocs.RELOAD_SEED.OnCollect();
              FramesTillUnlockReload = 120;
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
            if (SeedController.HasInternalSpoilers) {
              UberSet.Bool(34543, 11226, true);
              Print("spoiler unlocked", toMessageLog: false);
            }
            break;
          case "test5":
            tpCheatToggle = !tpCheatToggle;
            Print($"TPCheat {(tpCheatToggle ? "enabled" : "disabled")}", toMessageLog: false);
            break;
          case "printcoords":
            var pos = InterOp.get_position();
            Print($"{pos.X}, {pos.Y}", toMessageLog: false);
            break;
          case "namespoilertoggle":
            MapController.NameLabels = !MapController.NameLabels;
            Print($"Loc name labels {(MapController.NameLabels ? "enabled" : "disabled")}", toMessageLog: false);
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
            InterOp.display_hint(Current.Text, Current.Frames / 60f, Current.Pos);
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
      PlainText msg;
      if(SeedController.GrantingGoalModeLoc) {
        msg = new PlainText(message, frames, -2f);
        HintsController.ProgressWithHints();
      } else 
        msg = new PlainText(message, frames);
      
      SendPlainText(msg);
      Last = msg;
    }
    public static void Print(string message, int frames = 180, float pos = 3f, bool toMessageLog = true) => SendPlainText(new PlainText(message, frames, pos), toMessageLog);
    public static void SendPlainText(PlainText p, bool logMessage = true) {
      if (logMessage)
        File.AppendAllText(Randomizer.MessageLog, $"{Regex.Replace(p.Text, "[$#@*]", "")}\n");

      if (p.Pos == -2f) {
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
    float Pos { get; }
    string Text { get; }
    int Frames { get; }
  };

  public class PlainText : IMessage {
    public PlainText(string text, int frames = 180, float? pos = null) {
      Text = text;
      Frames = frames + (SeedController.GrantingGoalModeLoc ? 120 : 0);
      Pos = pos.HasValue ? pos.Value : (3.2f - .2f * Text.Split(new string[] { "\n", Environment.NewLine }, StringSplitOptions.None).Length);
    }

    public string Text { get; }
    public int Frames { get; }
    public float Pos { get; }
  }

}
