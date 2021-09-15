using System;
using System.Text.RegularExpressions;
using System.Collections.Generic;
using System.IO;
using AutoHotkey.Interop;
using RandoMainDLL.Memory;
using System.Linq;

namespace RandoMainDLL {
  public static class AHK {
    private static readonly string ProgramStatic = @"
      SetBatchLines -1
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
      onSignalExt:
      gui, submit
      signal := extChannel
      return
      ";

    private static string Program => ProgramStatic.Replace("$(BASEPATH)", Randomizer.BasePath);

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
          if (cursorLock)
            InterOp.toggle_cursorlock();
        };
      }

      if (IniFlag("AlwaysShowKeystones"))
        InterOp.toggle_always_show_keystones();

      if (IniFlag("dev")) {
        InterOp.set_real_uberstate_names(true);
        Randomizer.Dev = true;
      }

      InterOp.set_start_in_logic_filter(IniFlag("DisableStartingInLogicFilter"));
        

      int maxLogLines = Randomizer.Dev ? 1000 : 500;
      var logLines = File.ReadAllLines(Randomizer.LogFile);
      if (logLines.Length > maxLogLines) {
        File.WriteAllLines(Randomizer.LogFile, logLines.Skip(logLines.Length / 2));
      }
    }

    public static bool CanReload() {
      return FramesTillUnlockReload <= 0;
    }

    public static void Reload() {
      iniFlagCache.Clear();
      FramesTillNextSend = 0;
      FramesTillUnlockReload = 120;
    }

    public static void ShowLastPickup() {
      FramesTillNextSend = 1; // the only reason this isn't = 0 is that spamming this could get really annoying
      MessageQueue.Enqueue(Last);
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
        if (signal == "reload") {
          Input.OnActionTriggered(Input.Action.Reload);
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
            if(Current.Clear) InterOp.clear_visible_hints();
            InterOp.display_hint(Current.Text, Current.Frames / 60f, Current.Pos, Current.Mute);
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
    public static PlainText Current = null;
    public static PlainText Last = new PlainText("*Good Luck! <3*");
    public static Queue<PlainText> MessageQueue = new Queue<PlainText>();
    public static int FramesTillUnlockReload = 0;
    public static int FramesTillNextSend = 0;

    public static void OnNewGame() {
      Last = new PlainText("*Good Luck! <3*");
    }
    public static string preText = String.Empty;
    public static void Pickup(string message, int frames = 180, float? pos = null, bool clear = true, bool immediate = false, bool mute = false) {
      PlainText msg;
      if(SeedController.GrantingGoalModeLoc && pos == null) {
        msg = new PlainText(preText + message, frames, -2f, clear, immediate, mute);
        HintsController.ProgressWithHints();
      } else 
        msg = new PlainText(preText + message, frames, pos, clear, immediate, mute);
      
      SendPlainText(msg);
      Last = msg;
      preText = String.Empty;
    }
    public static void Print(string message, int frames = 180, float pos = 3f, bool toMessageLog = true, bool clearPrior = true) => SendPlainText(new PlainText(message, frames, pos, clearPrior), toMessageLog);
    public static void SendPlainText(PlainText p, bool logMessage = true) {
      if (logMessage)
        File.AppendAllText(Randomizer.MessageLog, $"{Regex.Replace(p.Text, "[$#@*]", "")}\n");

      if(p.Immediate) {
        try {
          if (p.Clear) InterOp.clear_visible_hints();
          InterOp.display_hint(p.Text, p.Frames / 60f, p.Pos, p.Mute);
          if (IniFlag("LogOnPrint")) {
            Randomizer.Log($"Sending {p.Text} for {p.Frames} (skipped queue)", false);
          }
        } catch (Exception e) { Randomizer.Error("AHK.sendInstant", e, false); }
      }
      else {
        if (p.Pos == -2f) { // todo; maybe clean this up?
          InterOp.display_below(p.Text, p.Frames / 60f, p.Mute);
          return;
        }
        if (p.Clear)
        FramesTillNextSend /= 3;
        MessageQueue.Enqueue(p);
      }
    }
    public static void PrependToNextText(string text) {
      preText += text;
    }
  }

  public class PlainText {
    public PlainText(string text, int frames = 180, float? pos = null, bool clear = true, bool immediate = false, bool mute = false) {
      Text = text;
      Frames = frames + (SeedController.GrantingGoalModeLoc ? 120 : 0);
      Pos = pos.HasValue ? pos.Value : (3.2f - .2f * Text.Split(new string[] { "\n", Environment.NewLine }, StringSplitOptions.None).Length);
      Clear = clear;
      Immediate = immediate;
      Mute = mute;
    }
    public string Text { get; }
    public bool Clear { get; }
    public bool Immediate { get; }
    public bool Mute { get; }
    public int Frames { get; }
    public float Pos { get; }
  }

}
