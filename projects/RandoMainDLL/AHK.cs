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
    public static int FramesTillUnlockReload = 0;

    public static void Init() {
      Engine.ExecRaw(Program);

      Ready = true;
      bool cursorLock = IniFlag("CursorLock");
      bool disableDebug = IniFlag("DisableDebugControls");
      if (cursorLock || disableDebug) {
        Randomizer.TitleScreenCallback = () => {
          if (disableDebug)
            InterOp.Utils.set_debug_controls(false);
          if (cursorLock)
            InterOp.toggle_cursorlock();
        };
      }

      if (IniFlag("AlwaysShowKeystones"))
        InterOp.UI.toggle_always_show_keystones();

      if (IniFlag("dev")) {
        Randomizer.Dev = true;
      }

      InterOp.Map.set_start_in_logic_filter(IniFlag("DisableStartingInLogicFilter"));
    }

    public static bool CanReload() {
      return FramesTillUnlockReload <= 0;
    }

    public static void Reload() {
      iniFlagCache.Clear();
      FramesTillUnlockReload = 120;
    }

    private static readonly HashSet<string> Falsey = new HashSet<string>() { "false", "False", "no", "", "0", "ERROR", null };
    private static Dictionary<string, Boolean> iniFlagCache = new Dictionary<string, bool>();

    public static bool IniFlag(string flag) {
      if (!Ready)
        return false;

      if(!iniFlagCache.ContainsKey(flag))
        iniFlagCache[flag] = !Falsey.Contains(Engine.ExecFunction("DoIniRead", "Flags", flag));

      return iniFlagCache[flag];
    }

    public static string IniString(string section, string name, string def = "") {
      var raw = Engine.ExecFunction("DoIniRead", section, name);
      return Falsey.Contains(raw) ? def : raw;
    }

    public static int IniInt(string section, string name, int def = 0) {
      var raw = Engine.ExecFunction("DoIniRead", section, name);
      return int.TryParse(raw, out var result) ? result : def;
    }

    public static void Tick() {
      var signal = Engine.ExecFunction("Tick");
      if (signal != null && signal != "none") {
        Engine.SetVar("signal", "none");
        if (signal == "reload")
          Input.OnActionTriggered(Input.Action.Reload);
      }

      FramesTillUnlockReload = Math.Max(0, FramesTillUnlockReload - 1);
    }
  }
}
