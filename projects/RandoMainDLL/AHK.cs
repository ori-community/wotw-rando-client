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
    // formatting for this looks stupid and unaligned bc of the "" to " conversion, dw about it
    private static readonly string DefaultBinds = @"
;; ============= rando_bindings.ahk ============
;; this autohotkey file does nothing on its own, but is used to pull in keybinding definitions
;; hotkeys are in the form <TRIGGER>::signal := ""<action>"" 
;; where <TRIGGER> is the key or set of keys that trigger the action
;; and <ACTION> is a string of text that tells the randomizer to perform
;; some command. Details on the commands can be found below.
;;
;; restart the game after making changes to this file, if it's running.
;;
;; deleting this file will replace it with the default version.
;;
;; Stuck? head over to the ori discord (orirando.com/discord) and ask in #randomizer 

;; global hotkeys section. Hotkeys can be triggered any time, even if the window isn't open
; !/ => alt + /
!/::signal := ""exitapp""                  ; quits the randomizer instantly



;; the hotkeys below here will only fire if ori is the active window,
;; so you don't have to worry about overlap with other hotkeys on your system
#IfWinActive, OriAndTheWilloftheWisps

;; ====== primary control hotkeys ======
;; These are used regularly throughout normal play

; !l => alt + l
!l::signal := ""reload""                   ; (re)loads the current seed and prints the seed name flagline. 
                                       ; also reconnects the randomizer to the webserver in online modes
                                       ; if your randomizer is behaving wierdly, give this a try

; !t => alt + t
!t::signal := ""lastPickup""               ; re-display the last pickup / message

; !p => alt + p
!p::signal := ""progressAndHints""         ; shows your progress on completing the seed (# of pickups, 
                                       ; goal mode progress) and any hints you've purchased 
; !c => alt + c
!c::signal := ""warpCredits""              ; skips the ending cutscene/crawl and warps you to the credits
                                       ; will not work if you haven't beaten the game yet
                                    
;; ====== variable function hotkeys ======
;; the function of these keys depends on the seed being played. By default they do nothing special, but 
;; some headers or plandos will use them to provide additional functionality.
;; for example, the quest helper header shows which quests need to be completed when you press binding1

; ^!1 => ctrl + alt + 1
^!1::signal := ""binding1""  
^!2::signal := ""binding2""
^!3::signal := ""binding3""
^!4::signal := ""binding4""
^!5::signal := ""binding5""

;; ====== utility hotkeys ======
;; these hotkeys provide quick toggles for various settings or print debug information

; ^!d => ctrl + alt + d
^!d::signal := ""toggleDebug""             ; enables/disables debug controls


; ^!l => ctrl + alt + l
^!l::signal := ""toggleCursorLock""        ; toggles cursor lock

; !j => alt + j
!j::signal := ""dev""                      ; toggles dev mode on or off
                                       ; in dev mode, uberstate changes are logged to cs_log.txt
                                       ; and more error messages are are displayed in-game
; ^!c => ctrl + alt + c
^!c::signal := ""printCoords""           ; display's ori's current position in a messagebox

;; ====== debug / pathfinder hotkeys ======
;; these hotkeys provide auxillary functionality for testers and developers
;; they can be used casually, but are disabled during race seeds

; ^!u => ctrl + alt + u
^!u::signal := ""unlockSpoiers""         ; unlocks the spoiler map filter by setting the game complete
                                       ; uberstate to true (this also enables credit warping)
; +!t => shift + alt + t                 
+^t::signal := ""tpCheat""               ; toggles tp cheat mode on or off. In tp cheat mode, every map
                                       ; icon can be warped to as though they were spirit wells
; ^!n => ctrl + alt + n 
^!n::signal := ""nameSpoilerToggle""     ; adds the name of every pickup location to their spoiler label
                                       ; only really useful for pathfinders
#If
";

    private static string BindsFile => $"{Randomizer.BasePath}rando_binds.ahk";
    private static string Binds {
      get {
        if (!File.Exists(BindsFile)) {
          Randomizer.Log("Wrote default binds file", false, "DEBUG");
          File.WriteAllText(BindsFile, DefaultBinds);
        }
        return String.Join("\n", File.ReadAllLines(BindsFile).Where(l => l != "" && !l.StartsWith(";")));
       }
    }

    private static string Program => ProgramStatic.Replace("$(BASEPATH)", Randomizer.BasePath);

    public static AutoHotkeyEngine Engine = AutoHotkeyEngine.Instance;
    public static bool Ready = false;

    public static void Init() {
      Engine.ExecRaw(Program);
      Engine.ExecRaw(Binds);

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

      int maxLogLines = Randomizer.Dev ? 1000 : 500;
      var logLines = File.ReadAllLines(Randomizer.LogFile);
      if (logLines.Length > maxLogLines) {
        File.WriteAllLines(Randomizer.LogFile, logLines.Skip(logLines.Length / 2));
      }
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

    private static readonly UberId GameComplete = new UberId(34543, 11226);

    public static void HandleSignal(string signal) {
      switch (signal) {
        case "reload":
          if (FramesTillUnlockReload == 0) {
            iniFlagCache.Clear();
            FramesTillNextSend = 0;
            WebSocketClient.Connect();
            SeedController.ReadSeed();
            if (InterOp.get_game_state() == GameState.Game)
              PsuedoLocs.LOAD_SEED.OnCollect();
            FramesTillUnlockReload = 120;
          }
          break;
        case "lastPickup":
          FramesTillNextSend = 1; // the only reason this isn't = 0 is that spamming this could get really annoying
          MessageQueue.Enqueue(Last);
          break;
        case "progressAndHints":
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
        case "toggleAlwaysShowKeystones":
          InterOp.toggle_always_show_keystones();
          break;
        case "binding1":
          PsuedoLocs.BINDING_ONE.OnCollect();
          break;
        case "binding2":
          PsuedoLocs.BINDING_TWO.OnCollect();
          break;
        case "binding3":
          PsuedoLocs.BINDING_THREE.OnCollect();
          break;
        case "binding4":
          PsuedoLocs.BINDING_FOUR.OnCollect();
          break;
        case "binding5":
          PsuedoLocs.BINDING_FIVE.OnCollect();
          break;
        case "unlockSpoiers":
          if (SeedController.Settings.RaceMode) return; // no cheat
            UberSet.Bool(GameComplete, true);
            Print("spoiler unlocked", toMessageLog: false);
          break;
        case "tpCheat":
          if (SeedController.Settings.RaceMode) return; // no cheat
          tpCheatToggle = !tpCheatToggle;
          Print($"TPCheat {(tpCheatToggle ? "enabled" : "disabled")}", toMessageLog: false);
          break;
        case "warpCredits":
          if(UberGet.Bool(GameComplete))
            InterOp.start_credits();
          else
            Print($"Credit warp not unlocked!", toMessageLog: false);
          break;
        case "printCoords":
          var pos = InterOp.get_position();
          Print($"{pos.X}, {pos.Y}", toMessageLog: false);
          break;
        case "nameSpoilerToggle":
          MapController.NameLabels = !MapController.NameLabels;
          Print($"Loc name labels {(MapController.NameLabels ? "enabled" : "disabled")}", toMessageLog: false);
          break;
        case "logicprovidertoggle":
          Print($"Refreshing logic", toMessageLog: false);
          MapController.UpdateReachable();
          break;

        default:
          Randomizer.Log($"Recieved unknown signal {signal}");
          break;
      }
    }

    public static void Tick() {
      var signal = Engine.ExecFunction("Tick");
      if (signal != null && signal != "none") {
        Engine.SetVar("signal", "none");
        HandleSignal(signal);
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
    private static bool tpCheatToggle = false;
    public static bool TPToPickupsEnabled { get => tpCheatToggle && InterOp.get_debug_controls(); }
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
