using System;
using System.Text.RegularExpressions;
using System.Collections.Generic;
using System.IO;
using AutoHotkey.Interop;
using RandoMainDLL.Memory;
using System.Linq;

namespace RandoMainDLL {
  public static class Input {
    // Mirrors C++ definition in InjectDll/input/enums/actions.h
    public enum Action {
      MainMenuSaveCopy,
      MainMenuSaveDelete,
      Interact,
      Jump,
      Ability1,
      Ability2,
      Ability3,
      Glide,
      Grab,
      Dash,
      Burrow,
      Bash,
      Grapple,
      DialogueAdvance,
      DialogueOption1,
      DialogueOption2,
      DialogueOption3,
      DialogueExit,
      OpenMapsShardsInventory,
      OpenWeaponWheel,
      PauseScreen,
      LiveSignIn,
      MapZoomIn,
      MapZoomOut,
      MenuSelect,
      MenuBack,
      MenuClose,
      MenuDown,
      MenuUp,
      MenuLeft,
      MenuRight,
      MenuPageLeft,
      MenuPageRight,
      LeaderboardCycleFilter,
      MapFilter,
      MapDetails,
      MapFocusOri,
      MapFocusObjective,

      OpenRandoWheel,

      // Legacy actions.
      Binding1,
      Binding2,
      Binding3,
      Binding4,
      Binding5,
      Reload,
      ShowLastPickup,
      ShowProgressWithHints,
      WarpToCredits,

      ToggleCursorLock,
      ToggleAlwaysShowKeystones,

      ShowDevFlag,
      ToggleDebug,
      PrintCoordinates,
      TeleportCheat,
      UnlockSpoilers,
      TogglePickupNamesOnSpoiler,
      ForceExit,

      TOTAL
    }

    private static readonly UberId GameComplete = new UberId(34543, 11226);

    public static void OnActionTriggered(Action action) {
      switch (action) {
        case Action.Reload:
          if (AHK.CanReload()) {
            AHK.Reload();
            WebSocketClient.Connect();
            SeedController.ReadSeed();
            if (InterOp.get_game_state() == GameState.Game) {
              InterOpWeaponWheel.clear_wheels();
              InterOpWeaponWheel.initialize_default_wheel();
              PsuedoLocs.LOAD_SEED.OnCollect();
            }
          }
          break;
        case Action.ShowLastPickup:
          AHK.ShowLastPickup();
          break;
        case Action.ShowProgressWithHints:
          HintsController.ProgressWithHints();
          break;
        case Action.ShowDevFlag:
          Randomizer.Dev = !Randomizer.Dev;
          Randomizer.Log($"Dev: {Randomizer.Dev}");
          break;
        case Action.ForceExit:
          Environment.Exit(Environment.ExitCode);
          break;
        case Action.ToggleDebug:
          InterOp.set_debug_controls(!InterOp.get_debug_controls());
          AHK.Print($"Debug {(InterOp.get_debug_controls() ? "enabled" : "disabled")}", toMessageLog: false);
          break;
        case Action.ToggleCursorLock:
          AHK.Print($"Cursor Lock {(InterOp.toggle_cursorlock() ? "enabled" : "disabled")}", toMessageLog: false);
          break;
        case Action.ToggleAlwaysShowKeystones:
          InterOp.toggle_always_show_keystones();
          break;
        case Action.Binding1:
          PsuedoLocs.BINDING_ONE.OnCollect();
          break;
        case Action.Binding2:
          PsuedoLocs.BINDING_TWO.OnCollect();
          break;
        case Action.Binding3:
          PsuedoLocs.BINDING_THREE.OnCollect();
          break;
        case Action.Binding4:
          PsuedoLocs.BINDING_FOUR.OnCollect();
          break;
        case Action.Binding5:
          PsuedoLocs.BINDING_FIVE.OnCollect();
          break;
        case Action.UnlockSpoilers:
          if (SeedController.Settings.RaceMode) return; // no cheat
          UberSet.Bool(GameComplete, true);
          AHK.Print("spoiler unlocked", toMessageLog: false);
          break;
        case Action.TeleportCheat:
          if (SeedController.Settings.RaceMode) return; // no cheat
          tpCheatToggle = !tpCheatToggle;
          AHK.Print($"TPCheat {(tpCheatToggle ? "enabled" : "disabled")}", toMessageLog: false);
          break;
        case Action.WarpToCredits:
          if (UberGet.Bool(GameComplete))
            InterOp.start_credits();
          else
            AHK.Print($"Credit warp not unlocked!", toMessageLog: false);
          break;
        case Action.PrintCoordinates:
          var pos = InterOp.get_position();
          AHK.Print($"{pos.X}, {pos.Y}", toMessageLog: false);
          break;
        case Action.TogglePickupNamesOnSpoiler:
          MapController.NameLabels = !MapController.NameLabels;
          AHK.Print($"Loc name labels {(MapController.NameLabels ? "enabled" : "disabled")}", toMessageLog: false);
          break;
        default:
          Randomizer.Log("Unhandled action triggered.");
          break;
      }
    }

    public static bool tpCheatToggle = false;
    public static bool TPToPickupsEnabled { get => tpCheatToggle && InterOp.get_debug_controls(); }
  }
}
