using System;
using System.Collections.Generic;
using System.Reflection;
using System.Runtime.InteropServices;
using RandoMainDLL.Memory;

namespace RandoMainDLL {
  public static class CppCallbacks {
    public struct Method {
      public Delegate Delegate;
      public string CallbackName;
    }

    public static List<Method> MethodInfos {
      get {
        // Be careful of referencing static variables without wrapping in () => {}, they may not be initialized.
        return new List<Method> {
          new Method() {
            Delegate = new f_void_float(Randomizer.FixedUpdate),
            CallbackName = "fixed_update"
          },
          new Method() {
            Delegate = new f_void_float(Randomizer.Update),
            CallbackName = "update"
          },
          new Method() {
            Delegate = new f_void_at((AbilityType at) => {
              UberSet.Bool(at.TreeState(), true);
              InterOp.Player.fill_health();
              InterOp.Player.fill_energy();
            }),
            CallbackName = "on_tree"
          },
          new Method() {
            Delegate = new f_bool_int(MapController.FilterEnabled),
            CallbackName = "filter_enabled"
          },
          new Method() {
            Delegate = new f_void(() => UberStateController.Update(0)),
            CallbackName = "on_checkpoint"
          },
          new Method() {
            Delegate = new f_void(() => MessageController.ShowMessage(
              text: SeedController.GoalModeMessages(unmet: "@"), time: 5f, position: new Vector2(0f, -2f))),
            CallbackName = "on_goal_mode_fail"
          },
          new Method() {
            Delegate = new f_bool_str(Settings.IniFlag),
            CallbackName = "check_ini"
          },
          // We should replace these 2 calls with calls to check_ini
          new Method() {
            Delegate = new f_bool(() => !Settings.IniFlag("MuteInjectLogs")),
            CallbackName = "inject_log_enabled"
          },
          new Method() {
            Delegate = new f_bool(() => Settings.IniFlag("DebugInjectLogs")),
            CallbackName = "inject_debug_enabled"
          },
          new Method() {
            Delegate = new f_bool(() => Input.TPToPickupsEnabled),
            CallbackName = "tp_to_any_pickup"
          },
          new Method() {
            Delegate = new f_void_int(Randomizer.OnNewGame),
            CallbackName = "new_game"
          },
          new Method() {
            Delegate = new f_void_int_int(SaveController.OnLoad),
            CallbackName = "on_load"
          },
          new Method() {
            Delegate = new f_void_int_int(SaveController.OnSave),
            CallbackName = "on_save"
          },
          new Method() {
            Delegate = new f_bool_at(SaveController.HasAbility),
            CallbackName = "get_ability"
          },
          new Method() {
            Delegate = new f_void_at_bool(SaveController.SetAbility),
            CallbackName = "set_ability"
          },
          new Method() {
            Delegate = new f_bool_at((AbilityType at) => at.HaveTree()),
            CallbackName = "is_tree_activated"
          },
          new Method() {
            Delegate = new f_void_gwa(HintsController.OnMapPan),
            CallbackName = "on_map_pan"
          },
          new Method() {
            Delegate = new f_void_bool(MessageController.SetInfoVisibility),
            CallbackName = "on_map_state"
          },
          new Method() {
            Delegate = new f_void_at(ShopController.OnBuyOpherWeapon),
            CallbackName = "opher_buy_weapon"
          },
          new Method() {
            Delegate = new f_void_at(ShopController.OnBuyOpherUpgrade),
            CallbackName = "opher_buy_upgrade"
          },
          new Method() {
            Delegate = new f_bool_at(ShopController.OpherBoughtWeapon),
            CallbackName = "opher_bought_weapon"
          },
          new Method() {
            Delegate = new f_bool_at(ShopController.OpherBoughtUpgrade),
            CallbackName = "opher_bought_upgrade"
          },
          new Method() {
            Delegate = new f_void_st(ShopController.OnBuyTwillenShard),
            CallbackName = "twillen_buy_shard"
          },
          new Method() {
            Delegate = new f_bool_st(ShopController.TwillenBoughtShard),
            CallbackName = "twillen_bought_shard"
          },
          new Method() {
            Delegate = new f_int_st(ShopController.TwillenShardCost),
            CallbackName = "twillen_shard_cost"
          },
          new Method() {
            Delegate = new f_int_int(ShopController.LupoUpgradeCost),
            CallbackName = "lupo_upgrade_cost"
          },
          new Method() {
            Delegate = new f_void_int_int_byte_double_double(UberStateController.OnUberStateChanged),
            CallbackName = "on_uber_state_applied"
          },
          new Method() {
            Delegate = new f_bool_int_int_int_cmp(MapController.FilterIconShow),
            CallbackName = "filter_icon_show"
          },
          new Method() {
            Delegate = new f_int_int_int_int(MapController.FilterIconType),
            CallbackName = "filter_icon_type"
          },
          new Method() {
            Delegate = new f_void_ptr_int_int_int_int_int(MapController.FilterIconText),
            CallbackName = "filter_icon_text"
          },
          new Method() {
            Delegate = new f_void(ShopController.UpdateShopData),
            CallbackName = "update_shop_data"
          },
          new Method() {
            Delegate = new f_void_float_float(UberStateController.MapTPActivated),
            CallbackName = "on_map_tp_active"
          },
          new Method() {
            Delegate = new f_void_tp(UberStateController.FoundTP),
            CallbackName = "on_found_tp"
          },
          new Method() {
            Delegate = new f_void_str_dt(StatsTracking.OnKill),
            CallbackName = "on_enemy_death"
          },
          new Method() {
            Delegate = new f_void_str_dt(StatsTracking.OnDeath),
            CallbackName = "on_player_death"
          },
          new Method() {
            Delegate = new f_void(UberStateController.OnRaceStart),
            CallbackName = "on_race_start"
          },
          new Method() {
            Delegate = new f_void(UberStateController.OnRaceEnd),
            CallbackName = "on_race_end"
          },
          new Method() {
            Delegate = new f_void(UberStateController.OnTeleporting),
            CallbackName = "on_teleporting"
          },
          new Method() {
            Delegate = new f_void_a(Input.OnActionTriggered),
            CallbackName = "on_action_triggered"
          },
          new Method() {
            Delegate = new f_void_st_int_int(ShopController.OnUpgradeTwillenShard),
            CallbackName = "twillen_shard_upgraded"
          },
          new Method() {
            Delegate = new f_void_float(CreditsController.CreditsProgress),
            CallbackName = "credits_progress"
          },
          new Method() {
            Delegate = new f_void(Randomizer.Shutdown),
            CallbackName = "shutdown"
          },
          new Method() {
            Delegate = new f_void(Randomizer.PostInitialize),
            CallbackName = "post_initialize"
          },
          new Method() {
            Delegate = new f_int(SeedController.GetFlagCount),
            CallbackName = "get_flag_count"
          },
          new Method() {
            Delegate = new f_void_int_ptr_int(SeedController.GetFlag),
            CallbackName = "get_flag"
          },
          new Method() {
            Delegate = new f_int_bool(Relic.RelicCount),
            CallbackName = "get_relic_count"
          },
          new Method() {
            Delegate = new f_void_int_int_int_int_int_double_uc(UberStateController.SendResourceRequest),
            CallbackName = "send_resource_request"
          },
          new Method() {
            Delegate = new f_bool(() => WebSocketClient.WantConnection),
            CallbackName = "is_multiplayer"
          },
        };
      }
    }

    public delegate void f_void();
    public delegate void f_void_a(Input.Action a);
    public delegate void f_void_at(AbilityType at);
    public delegate void f_void_at_bool(AbilityType at, bool b);
    public delegate void f_void_bool(bool b);
    public delegate void f_void_int(int i);
    public delegate void f_void_int_int(int i, int j);
    public delegate void f_void_float(float i);
    public delegate void f_void_float_float(float i, float j);
    public delegate void f_void_ptr_int_int_int_int_int(IntPtr buffer, int i, int j, int k, int l, int m);
    public delegate void f_void_int_int_int_int_int_double_uc(int a, int b, int c, int d, int e, double f, Network.SpendResourceTarget.Types.UpdateCondition g);
    public delegate void f_void_int_int_byte_double_double(int i, int j, byte b, double f, double g);
    public delegate void f_void_int_ptr_int(int i, IntPtr j, int k);
    public delegate void f_void_str([MarshalAs(UnmanagedType.LPStr)] string str);
    public delegate void f_void_str_dt([MarshalAs(UnmanagedType.LPStr)] string str, DamageType dt);
    public delegate void f_void_st(ShardType st);
    public delegate void f_void_st_int_int(ShardType t, int l, int s);
    public delegate void f_void_gwa(AreaType at);
    public delegate void f_void_tp(TeleporterType t);
    public delegate bool f_bool();
    public delegate bool f_bool_at(AbilityType at);
    public delegate bool f_bool_int(int i);
    public delegate bool f_bool_int_int_int_cmp(int i, int j, int k, UberStateCondition.Comparison comparison);
    public delegate bool f_bool_st(ShardType st);
    public delegate bool f_bool_str([MarshalAs(UnmanagedType.LPStr)] string str);
    public delegate int f_int();
    public delegate int f_int_at(AbilityType at);
    public delegate int f_int_int(int i);
    public delegate int f_int_int_int(int i, int j);
    public delegate int f_int_int_int_int(int i, int j, int k);
    public delegate int f_int_st(ShardType st);
    public delegate int f_int_bool(bool b);
    public delegate ulong f_ull();
    public delegate ulong f_ull_str_bool([MarshalAs(UnmanagedType.LPStr)] string str, bool b);
  }
}


