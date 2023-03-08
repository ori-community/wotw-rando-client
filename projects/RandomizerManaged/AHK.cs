using System;
using System.Collections.Generic;
using System.Text;
using IniParser;
using IniParser.Model;
using System.IO;

namespace RandomizerManaged {
  public static class Settings {
    public static int FramesTillUnlockReload = 0;
    private static IniData SettingsData = null;

    public static void Init() {
      Reload();
      
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

      if (IniFlag("Dev")) {
        Randomizer.Dev = true;
      }

      InterOp.Map.set_start_in_logic_filter(IniFlag("SelectInLogicFilterByDefault"));
    }

    public static bool CanReload() {
      return FramesTillUnlockReload <= 0;
    }

    public static void Reload() {
      try {
        var reader = new FileIniDataParser();
        SettingsData = reader.ReadFile(Path.Combine(Randomizer.BasePath, "settings.ini"), Encoding.Unicode);
      }
      catch (Exception e) {
        Randomizer.Log(e.Message);
      }
      
      FramesTillUnlockReload = 120;
    }

    private static readonly HashSet<string> FalsyValues = new() { "false", "False", "no", "", "0", "ERROR", null };

    public static bool IniFlag(string flag) {
      if (SettingsData?.TryGetKey("Flags." + flag, out string value) == true) {
        return !FalsyValues.Contains(value);
      }

      return false;
    }

    public static string IniString(string section, string name, string def = "") {
      if (SettingsData?.TryGetKey(section + "." + name, out string value) == true) {
        return FalsyValues.Contains(value) ? def : value;
      }

      return def;
    }

    public static int IniInt(string section, string name, int def = 0) {
      if (SettingsData?.TryGetKey(section + "." + name, out string value) == true) {
        return int.TryParse(value, out var result) ? result : def;
      }

      return def;
    }

    public static void FixedUpdate() {
      FramesTillUnlockReload = Math.Max(0, FramesTillUnlockReload - 1);
    }
  }
}
