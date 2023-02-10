using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using RandomizerManaged.Memory;

namespace RandomizerManaged {

  public enum SoundEvent {
    QuestComplete
  }

  public static class InterOp {
    public static class Ability {
      public delegate void ability_override(AbilityType type);

      [DllImport("Randomizer.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void register_ability_override(AbilityType type, IntPtr callback);
      [DllImport("Randomizer.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void clear_ability_override(AbilityType type);
      [DllImport("Randomizer.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void refresh_ability_energy_modifiers();
      [DllImport("Core.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void set_ability(AbilityType ability, bool value);
      [DllImport("Core.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void set_equipment(EquipmentType ability, bool value);
      [DllImport("Core.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void bind(int slot, EquipmentType equip_type);
      [DllImport("Core.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void unbind(EquipmentType equip_type);
      [DllImport("Randomizer.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void set_ability_level(AbilityType type, int value);
      [DllImport("Randomizer.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void explode_grenades();
    }

    public static class Animation {
      [DllImport("Core.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void timeline_preload([MarshalAs(UnmanagedType.LPStr)] string path);
      [DllImport("Core.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static int timeline_create([MarshalAs(UnmanagedType.LPStr)] string path);
      [DllImport("Core.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void timeline_destroy(int id);
      [DllImport("Core.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void timeline_start(int id);
      [DllImport("Core.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void timeline_attach(int id, [MarshalAs(UnmanagedType.LPStr)] string path);
      [DllImport("Core.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void timeline_position(int id, Vector3 value);
      [DllImport("Core.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void timeline_rotation(int id, Vector3 value);
      [DllImport("Core.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void timeline_local_position(int id, Vector3 value);
      [DllImport("Core.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void timeline_local_scale(int id, Vector3 value);
      [DllImport("Core.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void timeline_local_rotation(int id, Vector3 value);
      [DllImport("Core.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void timeline_variable_float(int id, [MarshalAs(UnmanagedType.LPStr)] string path, float value);
    }

    public static class TextDatabase {
      [DllImport("Core.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void text_database_register_text(int id, bool dynamic, [MarshalAs(UnmanagedType.LPWStr)] string text);
      [DllImport("Core.dll", CallingConvention = CallingConvention.Cdecl)]
      [return: MarshalAs(UnmanagedType.U1)]
      public extern static bool text_database_has_text(int id, bool dynamic);
      [DllImport("Core.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static IntPtr text_database_get_text(int id, bool dynamic);
      [DllImport("Core.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void text_database_clear_text(int id, bool dynamic);
      [DllImport("Core.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void text_database_clear_dynamic();
      [DllImport("Core.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void text_database_reset_static();
    }

    public static class Messaging {
      [DllImport("Core.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static int reserve_id();
      [DllImport("Core.dll", CallingConvention = CallingConvention.Cdecl)]
      [return: MarshalAs(UnmanagedType.U1)]
      public extern static bool text_box_create(int id, float fadein, float fadeout, bool should_show_box, bool should_play_sound);
      [DllImport("Core.dll", CallingConvention = CallingConvention.Cdecl)]
      [return: MarshalAs(UnmanagedType.U1)]
      public extern static bool text_box_text(int id, [MarshalAs(UnmanagedType.LPWStr)] string text);
      [DllImport("Core.dll", CallingConvention = CallingConvention.Cdecl)]
      [return: MarshalAs(UnmanagedType.U1)]
      public extern static bool text_box_position(int id, float x, float y, float z, bool use_in_game_coordinates);
      [DllImport("Core.dll", CallingConvention = CallingConvention.Cdecl)]
      [return: MarshalAs(UnmanagedType.U1)]
      public extern static bool text_box_padding(int id, float top, float left, float right, float bottom);
      [DllImport("Core.dll", CallingConvention = CallingConvention.Cdecl)]
      [return: MarshalAs(UnmanagedType.U1)]
      public extern static bool text_box_fade(int id, float fadeIn, float fadeOut);
      [DllImport("Core.dll", CallingConvention = CallingConvention.Cdecl)]
      [return: MarshalAs(UnmanagedType.U1)]
      public extern static bool text_box_size(int id, float size);
      [DllImport("Core.dll", CallingConvention = CallingConvention.Cdecl)]
      [return: MarshalAs(UnmanagedType.U1)]
      public extern static bool text_box_color(int id, int r, int g, int b, int a);
      [DllImport("Core.dll", CallingConvention = CallingConvention.Cdecl)]
      [return: MarshalAs(UnmanagedType.U1)]
      public extern static bool text_box_alignment(int id, Alignment alignment);
      [DllImport("Core.dll", CallingConvention = CallingConvention.Cdecl)]
      [return: MarshalAs(UnmanagedType.U1)]
      public extern static bool text_box_anchor(int id, HorizontalAnchor horizontal, VerticalAnchor vertical);
      [DllImport("Core.dll", CallingConvention = CallingConvention.Cdecl)]
      [return: MarshalAs(UnmanagedType.U1)]
      public extern static bool text_box_line_spacing(int id, float spacing);
      [DllImport("Core.dll", CallingConvention = CallingConvention.Cdecl)]
      [return: MarshalAs(UnmanagedType.U1)]
      public extern static bool text_box_visibility(int id, bool value);
      [DllImport("Core.dll", CallingConvention = CallingConvention.Cdecl)]
      [return: MarshalAs(UnmanagedType.U1)]
      public extern static bool text_box_is_delayed(int id);
      [DllImport("Core.dll", CallingConvention = CallingConvention.Cdecl)]
      [return: MarshalAs(UnmanagedType.U1)]
      public extern static bool text_box_destroy(int id);

      [DllImport("Core.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void clear_quest_messages();
      [DllImport("Randomizer.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void update_map_hint([MarshalAs(UnmanagedType.LPWStr)] string info);
      [DllImport("Core.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void get_screen_position(ScreenPosition position, ref Vector3 output);
      [DllImport("Core.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static Vector2 world_to_ui_position_2d(ref Vector2 pos);
      [DllImport("Core.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static Vector2 ui_to_world_position_2d(ref Vector2 pos);
      [DllImport("Randomizer.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static bool messages_is_showing_hint();
      [DllImport("Randomizer.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static int messages_active_hint_lines();
    }

    public static class Map {
      [DllImport("Randomizer.dll", CallingConvention = CallingConvention.Cdecl)]
      [return: MarshalAs(UnmanagedType.U1)]
      public extern static bool is_visited(AreaType area, int index);
      [DllImport("Randomizer.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void add_icon(AreaType area, int id, WorldMapIconType icon, float x, float y, int group_id, int state_id, bool allow_teleport);
      [DllImport("Randomizer.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void set_icon_label(AreaType area, int id, [MarshalAs(UnmanagedType.LPWStr)] string label);
      [DllImport("Randomizer.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void remove_icon(AreaType area, int id);
      [DllImport("Randomizer.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void clear_icons();
      [DllImport("Randomizer.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void discover_everything();

      [DllImport("Randomizer.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static ZoneType get_player_area();
      [DllImport("Randomizer.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void refresh_map();
      [DllImport("Randomizer.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void set_start_in_logic_filter(bool value);
      }

    public static class Multiplayer {
      public enum PlayerIcon : int { 
        Moki,
        Kii
      }

      [DllImport("Randomizer.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void add_player([MarshalAs(UnmanagedType.LPWStr)] string id, [MarshalAs(UnmanagedType.LPWStr)] string name, PlayerIcon icon);
      [DllImport("Randomizer.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void set_player_icon([MarshalAs(UnmanagedType.LPWStr)] string id, PlayerIcon icon);
      [DllImport("Randomizer.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void set_player_color([MarshalAs(UnmanagedType.LPWStr)] string id, float r, float g, float b, float a);
      [DllImport("Randomizer.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void set_local_player_color(float r, float g, float b, float a);
      [DllImport("Randomizer.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void remove_player([MarshalAs(UnmanagedType.LPWStr)] string id);
      [DllImport("Randomizer.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void clear_players();
      [DllImport("Randomizer.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void update_player_position([MarshalAs(UnmanagedType.LPWStr)] string id, float x, float y, byte[] buf, int len);
      [DllImport("Randomizer.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static Vector2 get_player_position([MarshalAs(UnmanagedType.LPWStr)] string id);
      [DllImport("Randomizer.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void update_player_map_position([MarshalAs(UnmanagedType.LPWStr)] string id, float x, float y);
      [DllImport("Randomizer.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static Vector2 get_player_map_position([MarshalAs(UnmanagedType.LPWStr)] string id);
      [DllImport("Randomizer.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void set_player_online([MarshalAs(UnmanagedType.LPWStr)] string id, bool online);
      [DllImport("Randomizer.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void set_player_visibility([MarshalAs(UnmanagedType.LPWStr)] string id, bool world, bool map);
      [DllImport("Randomizer.dll", CallingConvention = CallingConvention.Cdecl)]
      unsafe public extern static byte* get_current_ghost_frame_data(ref int size);
    }

    public static class Player {
      [DllImport("Randomizer.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void fill_health();
      [DllImport("Randomizer.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void fill_energy();
      [DllImport("Randomizer.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void add_health(float inc);
      [DllImport("Randomizer.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void add_energy(float inc);
      [DllImport("Randomizer.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static int get_health();
      [DllImport("Randomizer.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static float get_energy();
      [DllImport("Randomizer.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void set_max_health(int value);
      [DllImport("Randomizer.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void set_health(float value);
      [DllImport("Randomizer.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void set_energy(float value);
      [DllImport("Randomizer.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void set_max_energy(float value);
      [DllImport("Randomizer.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static int get_max_health();
      [DllImport("Randomizer.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static float get_max_energy();
      [DllImport("Randomizer.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static int get_ore();
      [DllImport("Randomizer.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void set_ore(int value);
      [DllImport("Randomizer.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static int get_experience();
      [DllImport("Randomizer.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void set_experience(int value);
      [DllImport("Randomizer.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static int get_keystones();
      [DllImport("Randomizer.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void set_keystones(int value);
      [DllImport("Randomizer.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static Vector2 get_position();
      [DllImport("Randomizer.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static Vector3 get_head_position();
      [DllImport("Randomizer.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void set_position(Vector2 position);
      [DllImport("Randomizer.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static Vector2 get_velocity();
      [DllImport("Randomizer.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void set_velocity(Vector2 velocity);
      [DllImport("Randomizer.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void teleport(float x, float y, bool wait_for_load);
      [DllImport("Randomizer.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void set_start_position(float x, float y);
      [DllImport("Randomizer.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void clear_start_position();
      [DllImport("Core.dll", CallingConvention = CallingConvention.Cdecl)]
      [return: MarshalAs(UnmanagedType.U1)]
      public extern static bool player_can_move();
    }

    public static class Shard {
      [DllImport("Randomizer.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static int get_shard_slots();
      [DllImport("Randomizer.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void set_shard_slots(int value);
      [DllImport("Randomizer.dll", CallingConvention = CallingConvention.Cdecl)]
      [return: MarshalAs(UnmanagedType.U1)]
      public extern static bool has_shard(ShardType type);
      [DllImport("Randomizer.dll", CallingConvention = CallingConvention.Cdecl)]
      [return: MarshalAs(UnmanagedType.U1)]
      public extern static bool is_shard_equipped(ShardType type);
      [DllImport("Randomizer.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void set_shard(ShardType type, bool value);
      [DllImport("Randomizer.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void refresh_shards();
    }

    public static class Shop {
      [DllImport("Randomizer.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void set_twillen_item(int shard_type, [MarshalAs(UnmanagedType.LPWStr)] string name, [MarshalAs(UnmanagedType.LPWStr)] string description, [MarshalAs(UnmanagedType.LPWStr)] string texture, bool is_locked, bool is_visible);
      [DllImport("Randomizer.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void set_lupo_item(int group_id, int state_id, [MarshalAs(UnmanagedType.LPWStr)] string name, [MarshalAs(UnmanagedType.LPWStr)] string description, [MarshalAs(UnmanagedType.LPWStr)] string texture, bool is_locked, bool is_visible);
      [DllImport("Randomizer.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void set_opher_item(int acquired, int required, [MarshalAs(UnmanagedType.LPWStr)] string name, [MarshalAs(UnmanagedType.LPWStr)] string description, [MarshalAs(UnmanagedType.LPWStr)] string texture, bool uses_energy, bool is_locked, bool is_visible);
      [DllImport("Randomizer.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void set_grom_item(int state_id, [MarshalAs(UnmanagedType.LPWStr)] string name, [MarshalAs(UnmanagedType.LPWStr)] string description, [MarshalAs(UnmanagedType.LPWStr)] string texture, bool is_locked, bool is_visible);
    }

    public static class Wheel {
      [DllImport("Randomizer.dll", CallingConvention = CallingConvention.Cdecl)]
      [return: MarshalAs(UnmanagedType.U1)]
      public extern static bool set_wheel_item_name(int wheel, int item, [MarshalAs(UnmanagedType.LPWStr)] string name);
      [DllImport("Randomizer.dll", CallingConvention = CallingConvention.Cdecl)]
      [return: MarshalAs(UnmanagedType.U1)]
      public extern static bool set_wheel_item_description(int wheel, int item, [MarshalAs(UnmanagedType.LPWStr)] string description);
      [DllImport("Randomizer.dll", CallingConvention = CallingConvention.Cdecl)]
      [return: MarshalAs(UnmanagedType.U1)]
      public extern static bool set_wheel_item_texture(int wheel, int item, [MarshalAs(UnmanagedType.LPWStr)] string texture);
      [DllImport("Randomizer.dll", CallingConvention = CallingConvention.Cdecl)]
      [return: MarshalAs(UnmanagedType.U1)]
      public extern static bool set_wheel_item_color(int wheel, int item, int r, int g, int b, int a);
      [DllImport("Randomizer.dll", CallingConvention = CallingConvention.Cdecl)]
      [return: MarshalAs(UnmanagedType.U1)]
      public extern static bool set_wheel_item_enabled(int wheel, int item, bool enabled);
      [DllImport("Randomizer.dll", CallingConvention = CallingConvention.Cdecl)]
      [return: MarshalAs(UnmanagedType.U1)]
      public extern static bool set_wheel_item_callback(int wheel, int item, IntPtr callback);
      [DllImport("Randomizer.dll", CallingConvention = CallingConvention.Cdecl)]
      [return: MarshalAs(UnmanagedType.U1)]
      public extern static bool clear_wheel_item(int wheel, int item);
      [DllImport("Randomizer.dll", CallingConvention = CallingConvention.Cdecl)]
      [return: MarshalAs(UnmanagedType.U1)]
      public extern static bool set_active_wheel(int wheel);
      [DllImport("Randomizer.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void set_wheel_sticky(int wheel, bool value);
      [DllImport("Randomizer.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void set_wheel_behavior(int behavior);
      [DllImport("Randomizer.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void refresh_wheel();
      [DllImport("Randomizer.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void clear_wheels();
    }

    public static class Sound {
      [DllImport("Core.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void play_sound_str([MarshalAs(UnmanagedType.LPStr)] string event_name, Vector3 position);
    }

    public static class System {
      [DllImport("Randomizer.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void report_seed_reload();
      [DllImport("Randomizer.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void save();
      [DllImport("Randomizer.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void checkpoint();

      [DllImport("Randomizer.dll", CallingConvention = CallingConvention.Cdecl)]
      [return: MarshalAs(UnmanagedType.U1)]
      public extern static bool is_loading_game();
    }

    public static class UberState {
      [DllImport("Core.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void refresh_uber_state(int group_id, int id);
      [DllImport("Core.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void set_uber_state_value(int group, int uber_state, double value, bool ignore_intercept = true);
      [DllImport("Core.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static double get_uber_state_value(int group, int uber_state);
      [DllImport("Core.dll", CallingConvention = CallingConvention.Cdecl)]
      unsafe public extern static UberStateDef* get_uber_states(ref int size);
      [DllImport("Core.dll", CallingConvention = CallingConvention.Cdecl)]
      [return: MarshalAs(UnmanagedType.U1)]
      public extern static bool get_uber_state_exists(int group, int uber_state);
      [DllImport("Core.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static int get_uber_state_name(int group, int uber_state, byte[] buf, int len);
      [DllImport("Core.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static int get_uber_state_group_name(int group, int uber_state, byte[] buf, int len);
      [DllImport("Core.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static UberStateType get_uber_state_type(int group, int uber_state);
      [DllImport("Core.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void reset_uber_state_value_store();
    }

    public static class UI {
      [DllImport("Core.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void shake_spiritlight();
      [DllImport("Core.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void shake_keystone();
      [DllImport("Core.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void shake_ore();
      [DllImport("Randomizer.dll", CallingConvention = CallingConvention.Cdecl)]
      [return: MarshalAs(UnmanagedType.U1)]
      public extern static bool toggle_always_show_keystones();
    }

    public static class Utils {
      [DllImport("Modloader.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static IntPtr get_base_path();
      [DllImport("Core.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void reload_all_file_textures();
      [DllImport("Randomizer.dll", CallingConvention = CallingConvention.Cdecl)]
      [return: MarshalAs(UnmanagedType.U1)]
      public extern static bool get_debug_controls();
      [DllImport("Randomizer.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void set_debug_controls(bool value);
      [DllImport("Randomizer.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static GameState get_game_state();
      [DllImport("Randomizer.dll", CallingConvention = CallingConvention.Cdecl)]
      [return: MarshalAs(UnmanagedType.U1)]
      public extern static bool in_menu();
    }

    [DllImport("Randomizer.dll", CallingConvention = CallingConvention.Cdecl)]
    public extern static void start_credits();
    [DllImport("Modloader.dll", CallingConvention = CallingConvention.Cdecl)]
    [return: MarshalAs(UnmanagedType.U1)]
    public extern static bool toggle_cursorlock();
    [DllImport("Randomizer.dll", CallingConvention = CallingConvention.Cdecl)]
    public extern static void register_state_redirect([MarshalAs(UnmanagedType.LPStr)] string path, int uber_state, int value);

    [DllImport("Randomizer.dll", CallingConvention = CallingConvention.Cdecl)]
    public extern static void register_delegate([MarshalAs(UnmanagedType.LPStr)] string s, IntPtr del);
    
    [DllImport("Randomizer.dll", CallingConvention = CallingConvention.Cdecl)]
    public extern static void notify_pickup_collected(ZoneType zoneType, [MarshalAs(UnmanagedType.LPStr)] string location_name);
    
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

