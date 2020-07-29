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
            Delegate = new f_void(Randomizer.Update),
            CallbackName = "update"
          },
          new Method() {
            Delegate = new f_void_at((AbilityType at) => {
              SaveController.Data.TreesActivated.Add(at);
              InterOp.fill_health();
              InterOp.fill_energy();
            }),
            CallbackName = "on_tree"
          },
          new Method() {
            Delegate = new f_bool_int(MapController.FilterEnabled),
            CallbackName = "filter_enabled"
          },
          new Method() {
            Delegate = new f_void(UberStateController.Update),
            CallbackName = "on_checkpoint"
          },
          new Method() {
            Delegate = new f_void(() => AHK.SendPlainText(new PlainText(SeedController.GoalModeMessages(unmet: "@"), 300, true), false)),
            CallbackName = "on_goal_mode_fail"
          },
          new Method() {
            Delegate = new f_bool_str(AHK.IniFlag),
            CallbackName = "check_ini"
          },
          new Method() {
            Delegate = new f_bool(() => SaveController.Data?.WorldEvents?.Contains(QuestEventType.Water) ?? false),
            CallbackName = "water_cleansed"
          },
          // We should replace these 2 calls with calls to check_ini
          new Method() {
            Delegate = new f_bool(() => !AHK.IniFlag("MuteInjectLogs")),
            CallbackName = "inject_log_enabled"
          },
          new Method() {
            Delegate = new f_bool(() => AHK.IniFlag("DebugInjectLogs")),
            CallbackName = "inject_debug_enabled"
          },
          new Method() {
            Delegate = new f_bool(() => AHK.TPToPickupsEnabled),
            CallbackName = "tp_to_any_pickup"
          },
          // This one as well.
          new Method() {
            Delegate = new f_bool(() => AHK.IniFlag("InvertSwim")),
            CallbackName = "invert_swim"
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
            Delegate = new f_void_int_int(SaveController.OnCopy),
            CallbackName = "on_copy"
          },
          new Method() {
            Delegate = new f_void_int(SaveController.OnDelete),
            CallbackName = "on_delete"
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
            Delegate = new f_bool_at((AbilityType at) => SaveController.Data.TreesActivated.Contains(at)),
            CallbackName = "is_tree_activated"
          },
          new Method() {
            Delegate = new f_void_gwa((AreaType at) => HintsController.OnMapPan(at)),
            CallbackName = "on_map_pan"
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
            Delegate = new f_int_at(ShopController.OpherWeaponCost),
            CallbackName = "opher_weapon_cost"
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
            Delegate = new f_int_int(ShopController.LupoUpgradeCost),
            CallbackName = "lupo_upgrade_cost"
          },
          new Method() {
            Delegate = new f_void_int_int_byte_float_float(UberStateController.onUberStateChanged),
            CallbackName = "on_uber_state_applied"
          },
          new Method() {
            Delegate = new f_bool(SeedController.IsDayTime),
            CallbackName = "is_day_time"
          },
          new Method() {
            Delegate = new f_bool(SeedController.DoesHowlExist),
            CallbackName = "does_howl_exist"
          },
          new Method() {
            Delegate = new f_bool_int_int(MapController.FilterIconShow),
            CallbackName = "filter_icon_show"
          },
          new Method() {
            Delegate = new f_int_int_int(MapController.FilterIconType),
            CallbackName = "filter_icon_type"
          },
          new Method() {
            Delegate = new f_void_ptr_int_int_int(MapController.FilterIconText),
            CallbackName = "filter_icon_text"
          },
          new Method() {
            Delegate = new f_void(ShopController.UpdateShopData),
            CallbackName = "update_shop_data"
          }
        };
      }
    }

    public delegate void f_void();
    public delegate void f_void_at(AbilityType at);
    public delegate void f_void_at_bool(AbilityType at, bool b);
    public delegate void f_void_int(int i);
    public delegate void f_void_int_int(int i, int j);
    public delegate void f_void_ptr_int_int_int(IntPtr buffer, int l, int i, int j);
    public delegate void f_void_int_int_byte_float_float(int i, int j, byte b, float f, float g);
    public delegate void f_void_st(ShardType st);
    public delegate void f_void_gwa(AreaType at);
    public delegate bool f_bool();
    public delegate bool f_bool_at(AbilityType at);
    public delegate bool f_bool_int(int i);
    public delegate bool f_bool_int_int(int i, int j);
    public delegate bool f_bool_st(ShardType st);
    public delegate bool f_bool_str([MarshalAs(UnmanagedType.LPStr)] string str);
    public delegate int f_int();
    public delegate int f_int_at(AbilityType at);
    public delegate int f_int_int(int i);
    public delegate int f_int_int_int(int i, int j);
    public delegate int f_int_st(ShardType st);
    public delegate ulong f_ull();
    public delegate ulong f_ull_str_bool([MarshalAs(UnmanagedType.LPStr)] string str, bool b);
  }
}
