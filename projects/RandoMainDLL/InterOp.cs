using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using RandoMainDLL.Memory;

namespace RandoMainDLL {

  enum SoundEvent {
    QuestComplete
  }

  static class InterOp {

    [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
    public extern static void set_kvolok_door_availability(bool value);

    [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
    public extern static void play_sound(SoundEvent evt);
    [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
    public extern static void clear_quest_messages();
    [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
    public extern static IntPtr display_hint([MarshalAs(UnmanagedType.LPWStr)] string hint, float duration);
    [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
    public extern static IntPtr display_below([MarshalAs(UnmanagedType.LPWStr)] string hint, float duration);
    [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
    public extern static IntPtr update_map_hint([MarshalAs(UnmanagedType.LPWStr)] string info);
    [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
    public extern static void clear_visible_hints();
    [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
    public extern static void shake_spiritlight();
    [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
    public extern static void shake_keystone();
    [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
    public extern static void shake_ore();

    [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
    public extern static void set_ability(AbilityType ability, bool value);
    [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
    public extern static void set_equipment(EquipmentType ability, bool value);

    [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
    public extern static IntPtr get_current_hint();
    [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
    [return: MarshalAs(UnmanagedType.U1)]
    public extern static bool hints_ready();
    [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
    public extern static void discover_everything();
    [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
    public extern static void save();

    [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
    [return: MarshalAs(UnmanagedType.U1)]
    public extern static bool player_can_move();
    [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
    public extern static void lock_shriek_goal(bool value);
    [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
    public extern static void magic_function();
    [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
    [return: MarshalAs(UnmanagedType.U1)]
    public extern static bool toggle_cursorlock();
    [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
    public extern static void bind_sword();
    [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
    public extern static void refresh_uber_state(int group_id, int id);
    [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
    public extern static void set_uber_state_value(int group, int state, float value);
    [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
    public extern static float get_uber_state_value(int group, int state);
    [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
    unsafe public extern static UberStateDef* get_uber_states(ref int size);
    [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
    [return: MarshalAs(UnmanagedType.U1)]
    public extern static bool get_uber_state_exists(int group, int state);
    [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
    public extern static int get_uber_state_name(int group, int state, byte[] buf, int len);
    [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
    public extern static int get_uber_state_group_name(int group, int state, byte[] buf, int len);
    [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
    public extern static UberStateType get_uber_state_type(int group, int state);
    [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
    [return: MarshalAs(UnmanagedType.U1)]
    public extern static bool get_debug_controls();
    [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
    public extern static void set_debug_controls(bool value);
    [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
    public extern static void fill_health();
    [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
    public extern static void fill_energy();
    [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
    public extern static void add_health(float inc);
    [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
    public extern static void add_energy(float inc);
    [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
    public extern static int get_health();
    [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
    public extern static float get_energy();
    [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
    public extern static void set_max_health(int value);
    [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
    public extern static void set_max_energy(float value);
    [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
    public extern static int get_max_health();
    [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
    public extern static float get_max_energy();

    [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
    public extern static int get_ore();
    [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
    public extern static void set_ore(int value);
    [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
    public extern static void set_extra_jumps(int value);
    [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
    public extern static void set_extra_dashes(int value);
    [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
    public extern static int get_experience();
    [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
    public extern static void set_experience(int value);
    [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
    public extern static int get_keystones();
    [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
    public extern static void set_keystones(int value);
    [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
    public extern static int get_shard_slots();
    [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
    public extern static void set_shard_slots(int value);
    [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
    [return: MarshalAs(UnmanagedType.U1)]
    public extern static bool has_shard(ShardType type);
    [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
    public extern static void set_shard(ShardType type, bool value);
    [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
    public extern static void refresh_shards();

    [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
    public extern static Vector2 get_position();

    [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
    public extern static GameState get_game_state();
    [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
    public extern static AreaType get_player_area();
    [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
    [return: MarshalAs(UnmanagedType.U1)]
    public extern static bool is_loading_game();
    [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
    unsafe public extern static void message_item_callback([MarshalAs(UnmanagedType.LPWStr)] string s);

    [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
    public extern static void register_delegate([MarshalAs(UnmanagedType.LPStr)] string s, IntPtr del);
    
    private static List<GCHandle> handles;
    public static void RegisterCSharpBindings() {
      handles = new List<GCHandle>();
      var infos = CppCallbacks.MethodInfos;
      foreach (var info in infos) {
        handles.Add(GCHandle.Alloc(info.Delegate, GCHandleType.Normal));
        register_delegate(
          info.CallbackName,
          Marshal.GetFunctionPointerForDelegate(info.Delegate)
        );
      }
    }
  }
}

