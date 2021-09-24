using System;
using System.Collections.Generic;
using System.Drawing;
using System.Runtime.InteropServices;

namespace RandoMainDLL {
  static class WheelManager {
    public delegate void Callback(int wheel, int item, int binding);

    private static List<GCHandle> handles = new List<GCHandle>();

    public static void ResetWheels() {
      InterOp.Wheel.clear_wheels();
      Wheel.ActionCommand.linkedPickups.Clear();
      foreach (var handle in handles)
        handle.Free();

      handles.Clear();
      InitializeDefaultWheels();
    }

    public static IntPtr CallbackHandle(Callback callback) {
      handles.Add(GCHandle.Alloc(callback));
      return Marshal.GetFunctionPointerForDelegate(callback);
    }

    public static void CreateWheelItem(int wheel, int item, string name, string desc, string texture, Color color, Callback callback) {
      handles.Add(GCHandle.Alloc(callback));
      CreateWheelItemInternal(wheel, item, name, desc, texture, color, Marshal.GetFunctionPointerForDelegate(callback));
    }

    private static void CreateWheelItemInternal(int wheel, int item, string name, string desc, string texture, Color color, IntPtr callback) {
      InterOp.Wheel.set_wheel_item_name(wheel, item, name);
      InterOp.Wheel.set_wheel_item_description(wheel, item, desc);
      InterOp.Wheel.set_wheel_item_texture(wheel, item, texture);
      InterOp.Wheel.set_wheel_item_color(wheel, item, color.R, color.G, color.B, color.A);
      InterOp.Wheel.set_wheel_item_callback(wheel, item, callback);
    }

    public static void InitializeDefaultWheels() {
      var callback = new Callback(handleDefaultActions);
      handles.Add(GCHandle.Alloc(callback));
      var ptr = Marshal.GetFunctionPointerForDelegate(callback);

      CreateWheelItemInternal(0, 11, "Rando Actions", "Contains default\nrandomizer actions", "file:assets/icons/wheel/menu.blue.png", Color.White, ptr);
      CreateWheelItemInternal(9000, 0, "Show last pickup", "Displays the message associated\nwith the last pickup.", "file:assets/icons/wheel/show_last_pickup.blue.png", Color.White, ptr);
      CreateWheelItemInternal(9000, 1, "Show progress, with hints.", "Displays current goal mode progress and bought hints.", "file:assets/icons/wheel/progress_summary.blue.png", Color.White, ptr);
      CreateWheelItemInternal(9000, 2, "Warp to credits", "Warp directly to the credits,\nonly works if you have finished the bingo.", "file:assets/icons/wheel/warp_to_credits.blue.png", Color.White, ptr);
      CreateWheelItemInternal(9000, 3, "Toggle keystones", "Toggle to always show the keystone ui.", "shard:1", Color.White, ptr);
      CreateWheelItemInternal(9000, 4, "Toggle cursor lock", "Toggle to confine the mouse cursor to the window.", "file:assets/icons/wheel/cursor_lock.blue.png", Color.White, ptr);
      CreateWheelItemInternal(9000, 5, "Toggle autoaim", "Toggle autoaim for bow/shuriken/spear.", "file:assets/icons/wheel/toggle_autoaim.blue.png", Color.White, ptr);
      CreateWheelItemInternal(9000, 6, "TEST PICKUP MESSAGE", "Testing, remove this.", "file:assets/icons/wheel/toggle_autoaim.blue.png", Color.White, ptr);
      CreateWheelItemInternal(9000, 10, "Reload", "Reloads the seed file", "file:assets/icons/wheel/reload_seed.blue.png", Color.White, ptr);
      CreateWheelItemInternal(9000, 11, "Next", "Go to next page of actions", "file:assets/icons/wheel/menu.blue.png", Color.White, ptr);
      CreateWheelItemInternal(9001, 0, "Toggle dev", "Toggles the dev flag.", "file:assets/icons/wheel/dev_mode.blue.png", Color.White, ptr);
      CreateWheelItemInternal(9001, 1, "Toggle debug", "Toggle debug controls", "file:assets/icons/wheel/toggle_debug.blue.png", Color.White, ptr);
      CreateWheelItemInternal(9001, 2, "Reload file textures", "Reloads all textures with the file: designation", "file:assets/icons/wheel/reload_file_textures.blue.png", Color.White, ptr);
      CreateWheelItemInternal(9001, 4, "Display coordinates", "Displays your current/ncoordinates as a message", "file:assets/icons/wheel/show_coordinates.blue.png", Color.White, ptr);
      CreateWheelItemInternal(9001, 5, "Teleport cheat", "Toggles cheat to teleport\nanywhere on the map", "file:assets/icons/wheel/teleport_cheat.blue.png", Color.White, ptr);
      CreateWheelItemInternal(9001, 6, "Unlock spoilers", "Unlock spoilers filter on the map", "file:assets/icons/wheel/unlock_spoilers.blue.png", Color.White, ptr);
      CreateWheelItemInternal(9001, 7, "Toggle pickup names", "Sets the labels of pickups\non the spoiler/in logic filter\nto be the name of the pickup location.", "file:assets/icons/wheel/toggle_pickup_names.blue.png", Color.White, ptr);
      CreateWheelItemInternal(9001, 8, "Reload credits", "Reloads the credits file", "file:assets/icons/wheel/reload_credits.blue.png", Color.White, ptr);
      CreateWheelItemInternal(9001, 9, "Force Exit", "Forcibly exit the game.", "file:assets/icons/wheel/force_exit.blue.png", Color.White, ptr);
      CreateWheelItemInternal(9001, 10, "Clear messages", "Clears the message queue.", "file:assets/icons/wheel/clear_messages.blue.png", Color.White, ptr);
      CreateWheelItemInternal(9001, 11, "Next", "Go to next page of actions", "file:assets/icons/wheel/menu.blue.png", Color.White, ptr);
      OnDevChanged();
    }

    public static void OnDevChanged() {
      InterOp.Wheel.set_wheel_item_enabled(9001, 1, Randomizer.Dev);
      InterOp.Wheel.set_wheel_item_enabled(9001, 2, Randomizer.Dev);
      InterOp.Wheel.set_wheel_item_enabled(9001, 4, Randomizer.Dev);
      InterOp.Wheel.set_wheel_item_enabled(9001, 5, Randomizer.Dev);
      InterOp.Wheel.set_wheel_item_enabled(9001, 6, Randomizer.Dev);
      InterOp.Wheel.set_wheel_item_enabled(9001, 7, Randomizer.Dev);
      InterOp.Wheel.set_wheel_item_enabled(9001, 8, Randomizer.Dev);
      InterOp.Wheel.set_wheel_item_enabled(9001, 9, Randomizer.Dev);
      InterOp.Wheel.set_wheel_item_enabled(9001, 10, Randomizer.Dev);
      InterOp.Wheel.refresh_wheel();
    }

    private static void handleDefaultActions(int wheel, int item, int binding) {
      switch (wheel) {
        case 0:
          InterOp.Wheel.set_active_wheel(9000);
          break;
        case 9000:
          switch (item) {
            case 0:
              Input.OnActionTriggered(Input.Action.ShowLastPickup);
              break;
            case 1:
              Input.OnActionTriggered(Input.Action.ShowProgressWithHints);
              break;
            case 2:
              Input.OnActionTriggered(Input.Action.WarpCredits);
              break;
            case 3:
              Input.OnActionTriggered(Input.Action.ToggleAlwaysShowKeystones);
              break;
            case 4:
              Input.OnActionTriggered(Input.Action.ToggleCursorLock);
              break;
            case 5:
              Input.OnActionTriggered(Input.Action.ToggleAutoaim);
              break;
            case 6:
              MessageController.ShowPickup("We are running a test.");
              break;
            case 10:
              Input.OnActionTriggered(Input.Action.Reload);
              break;
            case 11:
              InterOp.Wheel.set_active_wheel(9001);
              break;
            default:
              // Unhandled item.
              break;
          }
          break;
        case 9001:
          switch (item) {
            case 0:
              Input.OnActionTriggered(Input.Action.ShowDevFlag);
              break;
            case 1:
              Input.OnActionTriggered(Input.Action.ToggleDebug);
              break;
            case 2:
              MessageController.ShowSingleMessage($"Reloading file textures", list: ListType.Debug);
              InterOp.Utils.reload_all_file_textures();
              break;
            case 4:
              Input.OnActionTriggered(Input.Action.PrintCoordinates);
              break;
            case 5:
              Input.OnActionTriggered(Input.Action.TeleportCheat);
              break;
            case 6:
              Input.OnActionTriggered(Input.Action.UnlockSpoilers);
              break;
            case 7:
              Input.OnActionTriggered(Input.Action.TogglePickupNamesOnSpoiler);
              break;
            case 8:
              MessageController.ShowSingleMessage("Reloading credits file", list: ListType.Debug);
              CreditsController.ReloadFile();
              break;
            case 9:
              Input.OnActionTriggered(Input.Action.ForceExit);
              break;
            case 10:
              Input.OnActionTriggered(Input.Action.ClearMessages);
              break;
            case 11:
              InterOp.Wheel.set_active_wheel(9000);
              break;
            default:
              // Unhandled item.
              break;
          }
          break;
        default:
          // Unhandled wheel.
          break;
      }
    }
  }
}
