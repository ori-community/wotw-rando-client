using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using RandoMainDLL.Memory;

namespace RandoMainDLL {

  public enum SoundEvent {
    QuestComplete
  }

  public static class InterOp {
    public static class Ability {
      public delegate void ability_override(AbilityType type);

      [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void register_ability_override(AbilityType type, IntPtr callback);
      [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void clear_ability_override(AbilityType type);
      [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void refresh_ability_energy_modifiers();
      [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void set_ability(AbilityType ability, bool value);
      [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void set_equipment(EquipmentType ability, bool value);
      [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void bind(int slot, EquipmentType equip_type);
      [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void unbind(EquipmentType equip_type);
      [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void set_ability_level(AbilityType type, int value);
      [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void explode_grenades();
    }

    public static class Sprite {
      [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
      [return: MarshalAs(UnmanagedType.U1)]
      public extern static bool sprite_preload([MarshalAs(UnmanagedType.LPStr)] string path);
      [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static int sprite_load([MarshalAs(UnmanagedType.LPStr)] string path, float x, float y, float z, float sx, float sy, float sz, float angle);
      [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void sprite_set_animation_entry(int id, int entry);
      [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void sprite_set_position(int id, float x, float y, float z);
      [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void sprite_set_scale(int id, float x, float y, float z);
      [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void sprite_set_color_modulate(int id, float r, float g, float b, float a);
      [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void sprite_set_rotation(int id, float angle);
      [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void sprite_set_active(int id, bool value);
      [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void sprite_destroy(int id);
      [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
      [return: MarshalAs(UnmanagedType.U1)]
      public extern static bool sprite_is_active(int id);
      [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
      [return: MarshalAs(UnmanagedType.U1)]
      public extern static bool sprite_is_destroyed(int id);
      [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void clear_sprites();
      [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void reload_sprites();
    }

    public static class TextDatabase {
      [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void text_database_register_text(int id, bool dynamic, [MarshalAs(UnmanagedType.LPWStr)] string text);
      [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
      [return: MarshalAs(UnmanagedType.U1)]
      public extern static bool text_database_has_text(int id, bool dynamic);
      [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static IntPtr text_database_get_text(int id, bool dynamic);
      [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void text_database_clear_text(int id, bool dynamic);
      [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void text_database_clear_dynamic();
      [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void text_database_reset_static();
    }

    public static class Messaging {
      [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static int reserve_id();
      [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
      [return: MarshalAs(UnmanagedType.U1)]
      public extern static bool text_box_create(int id, float fadein, float fadeout, bool should_show_box, bool should_play_sound);
      [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
      [return: MarshalAs(UnmanagedType.U1)]
      public extern static bool text_box_text(int id, [MarshalAs(UnmanagedType.LPWStr)] string text);
      [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
      [return: MarshalAs(UnmanagedType.U1)]
      public extern static bool text_box_position(int id, float x, float y, float z, bool use_in_game_coordinates);
      [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
      [return: MarshalAs(UnmanagedType.U1)]
      public extern static bool text_box_padding(int id, float top, float left, float right, float bottom);
      [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
      [return: MarshalAs(UnmanagedType.U1)]
      public extern static bool text_box_fade(int id, float fadeIn, float fadeOut);
      [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
      [return: MarshalAs(UnmanagedType.U1)]
      public extern static bool text_box_size(int id, float size);
      [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
      [return: MarshalAs(UnmanagedType.U1)]
      public extern static bool text_box_color(int id, int r, int g, int b, int a);
      [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
      [return: MarshalAs(UnmanagedType.U1)]
      public extern static bool text_box_alignment(int id, Alignment alignment);
      [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
      [return: MarshalAs(UnmanagedType.U1)]
      public extern static bool text_box_anchor(int id, HorizontalAnchor horizontal, VerticalAnchor vertical);
      [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
      [return: MarshalAs(UnmanagedType.U1)]
      public extern static bool text_box_line_spacing(int id, float spacing);
      [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
      [return: MarshalAs(UnmanagedType.U1)]
      public extern static bool text_box_visibility(int id, bool value);
      [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
      [return: MarshalAs(UnmanagedType.U1)]
      public extern static bool text_box_is_delayed(int id);
      [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
      [return: MarshalAs(UnmanagedType.U1)]
      public extern static bool text_box_destroy(int id);

      [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void clear_quest_messages();
      [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void update_map_hint([MarshalAs(UnmanagedType.LPWStr)] string info);
      [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void get_screen_position(ScreenPosition position, ref Vector3 output);
      [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static Vector2 world_to_ui_position_2d(ref Vector2 pos);
      [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static Vector2 ui_to_world_position_2d(ref Vector2 pos);
    }

    public static class Map {
      [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
      [return: MarshalAs(UnmanagedType.U1)]
      public extern static bool is_visited(AreaType area, int index);
      [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void add_icon(AreaType area, int id, WorldMapIconType icon, float x, float y, int group_id, int state_id, bool allow_teleport);
      [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void set_icon_label(AreaType area, int id, [MarshalAs(UnmanagedType.LPWStr)] string label);
      [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void remove_icon(AreaType area, int id);
      [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void clear_icons();
      [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void discover_everything();

      [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static AreaType get_player_area();
      [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void refresh_inlogic_filter();
      [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void set_start_in_logic_filter(bool value);
    }

    public static class Multiplayer {
      public enum PlayerIcon : int { 
        Moki,
        Kii
      }

      [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void add_player([MarshalAs(UnmanagedType.LPWStr)] string id, [MarshalAs(UnmanagedType.LPWStr)] string name, PlayerIcon icon);
      [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void set_player_icon([MarshalAs(UnmanagedType.LPWStr)] string id, PlayerIcon icon);
      [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void set_player_color([MarshalAs(UnmanagedType.LPWStr)] string id, float r, float g, float b, float a);
      [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void set_local_player_color(float r, float g, float b, float a);
      [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void remove_player([MarshalAs(UnmanagedType.LPWStr)] string id);
      [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void clear_players();
      [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void update_player_position([MarshalAs(UnmanagedType.LPWStr)] string id, float x, float y);
      [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static Vector2 get_player_position([MarshalAs(UnmanagedType.LPWStr)] string id);
      [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void set_player_online([MarshalAs(UnmanagedType.LPWStr)] string id, bool online);
    }

    public static class Player {
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
      public extern static void set_health(float value);
      [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void set_energy(float value);
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
      public extern static int get_experience();
      [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void set_experience(int value);
      [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static int get_keystones();
      [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void set_keystones(int value);
      [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static Vector2 get_position();
      [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static Vector3 get_head_position();
      [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void set_position(Vector2 position);
      [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static Vector2 get_velocity();
      [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void set_velocity(Vector2 velocity);
      [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void teleport(float x, float y, bool wait_for_load);
      [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void set_start_position(float x, float y);
      [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void clear_start_position();
      [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
      [return: MarshalAs(UnmanagedType.U1)]
      public extern static bool player_can_move();
    }

    public static class Shard {
      [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static int get_shard_slots();
      [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void set_shard_slots(int value);
      [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
      [return: MarshalAs(UnmanagedType.U1)]
      public extern static bool has_shard(ShardType type);
      [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
      [return: MarshalAs(UnmanagedType.U1)]
      public extern static bool is_shard_equipped(ShardType type);
      [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void set_shard(ShardType type, bool value);
      [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void refresh_shards();
    }

    public static class Shop {
      [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void set_twillen_item(int shard_type, [MarshalAs(UnmanagedType.LPWStr)] string name, [MarshalAs(UnmanagedType.LPWStr)] string description, [MarshalAs(UnmanagedType.LPWStr)] string texture, bool is_locked, bool is_visible);
      [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void set_lupo_item(int group_id, int state_id, [MarshalAs(UnmanagedType.LPWStr)] string name, [MarshalAs(UnmanagedType.LPWStr)] string description, [MarshalAs(UnmanagedType.LPWStr)] string texture, bool is_locked, bool is_visible);
      [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void set_opher_item(int acquired, int required, [MarshalAs(UnmanagedType.LPWStr)] string name, [MarshalAs(UnmanagedType.LPWStr)] string description, [MarshalAs(UnmanagedType.LPWStr)] string texture, bool uses_energy, bool is_locked, bool is_visible);
      [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void set_grom_item(int state_id, [MarshalAs(UnmanagedType.LPWStr)] string name, [MarshalAs(UnmanagedType.LPWStr)] string description, [MarshalAs(UnmanagedType.LPWStr)] string texture, bool is_locked, bool is_visible);
    }

    public static class Wheel {
      [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
      [return: MarshalAs(UnmanagedType.U1)]
      public extern static bool set_wheel_item_name(int wheel, int item, [MarshalAs(UnmanagedType.LPWStr)] string name);
      [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
      [return: MarshalAs(UnmanagedType.U1)]
      public extern static bool set_wheel_item_description(int wheel, int item, [MarshalAs(UnmanagedType.LPWStr)] string description);
      [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
      [return: MarshalAs(UnmanagedType.U1)]
      public extern static bool set_wheel_item_texture(int wheel, int item, [MarshalAs(UnmanagedType.LPWStr)] string texture);
      [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
      [return: MarshalAs(UnmanagedType.U1)]
      public extern static bool set_wheel_item_color(int wheel, int item, int r, int g, int b, int a);
      [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
      [return: MarshalAs(UnmanagedType.U1)]
      public extern static bool set_wheel_item_enabled(int wheel, int item, bool enabled);
      [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
      [return: MarshalAs(UnmanagedType.U1)]
      public extern static bool set_wheel_item_callback(int wheel, int item, IntPtr callback);
      [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
      [return: MarshalAs(UnmanagedType.U1)]
      public extern static bool clear_wheel_item(int wheel, int item);
      [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
      [return: MarshalAs(UnmanagedType.U1)]
      public extern static bool set_active_wheel(int wheel);
      [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void set_wheel_sticky(int wheel, bool value);
      [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void set_wheel_behavior(int behavior);
      [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void refresh_wheel();
      [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void clear_wheels();
    }

    public static class System {
      [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void play_sound(SoundEvent evt);
      [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void report_uber_state_change(int group, int state, double value);
      [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void report_seed_reload();
      [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void save();
      [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void checkpoint();

      [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
      [return: MarshalAs(UnmanagedType.U1)]
      public extern static bool is_loading_game();
      [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static float get_fixed_delta_time();
    }

    public static class UberState {
      [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void refresh_uber_state(int group_id, int id);
      [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void set_uber_state_value(int group, int state, double value);
      [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static double get_uber_state_value(int group, int state);
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
      public extern static void set_real_uberstate_names(bool value);
    }

    public static class UI {
      [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void shake_spiritlight();
      [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void shake_keystone();
      [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void shake_ore();
      [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
      [return: MarshalAs(UnmanagedType.U1)]
      public extern static bool toggle_always_show_keystones();
    }

    public static class Utils {
      [DllImport("Il2CppModLoader.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static IntPtr get_base_path();
      [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void reload_all_file_textures();
      [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
      [return: MarshalAs(UnmanagedType.U1)]
      public extern static bool get_debug_controls();
      [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static void set_debug_controls(bool value);
      [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
      public extern static GameState get_game_state();
      [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
      [return: MarshalAs(UnmanagedType.U1)]
      public extern static bool in_menu();
    }

    [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
    public extern static void start_credits();
    [DllImport("Il2CPPModLoader.dll", CallingConvention = CallingConvention.Cdecl)]
    [return: MarshalAs(UnmanagedType.U1)]
    public extern static bool toggle_cursorlock();
    [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
    public extern static void register_state_redirect(int state, int value);

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

