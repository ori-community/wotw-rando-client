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
            Delegate = new void_f(Randomizer.Update),
            CallbackName = "update"
          },
          new Method() {
            Delegate = new f<int>(() => Randomizer.Memory.Ore),
            CallbackName = "ore_count"
          },
          new Method() {
            Delegate = new f<bool, AbilityType>((AbilityType at) => SaveController.Data.TreesActivated.Contains(at)),
            CallbackName = "tree_fulfilled"
          },
          new Method() {
            Delegate = new void_f<AbilityType>((AbilityType at) => {
              SaveController.Data.TreesActivated.Add(at);
              Randomizer.Memory.FillEnergy();
              Randomizer.Memory.FillHealth();
              SeedController.OnTree(at);
            }),
            CallbackName = "on_tree"
          },
          new Method() {
            Delegate = new void_f(UberStateController.Update),
            CallbackName = "on_checkpoint"
          },
          new Method() {
            Delegate = new f<ulong>(Randomizer.Memory.ShardSlotPtr),
            CallbackName = "get_shard_slot_ptr"
          },
          new Method() {
            Delegate = new f<bool, string>(AHK.IniFlag),
            CallbackName = "check_ini"
          },
          // We should replace these 2 calls with calls to check_ini
          new Method() {
            Delegate = new f<bool>(() => !AHK.IniFlag("MuteInjectLogs")),
            CallbackName = "inject_log_enabled"
          },
          new Method() {
            Delegate = new f<bool>(() => AHK.IniFlag("DebugInjectLogs")),
            CallbackName = "inject_debug_enabled"
          },
          new Method() {
            Delegate = new f<bool>(() => AHK.TPToPickupsEnabled),
            CallbackName = "tp_to_any_pickup"
          },
          // This one as well.
          new Method() {
            Delegate = new f<bool>(() => AHK.IniFlag("InvertSwim")),
            CallbackName = "invert_swim"
          },
          new Method() {
            Delegate = new void_f<int>(Randomizer.OnNewGame),
            CallbackName = "new_game"
          },
          new Method() {
            Delegate = new void_f<int, int>(SaveController.OnLoad),
            CallbackName = "on_load"
          },
          new Method() {
            Delegate = new void_f<int, int>(SaveController.OnSave),
            CallbackName = "on_save"
          },
          new Method() {
            Delegate = new f<bool, AbilityType>(SaveController.HasAbility),
            CallbackName = "get_ability"
          },
          new Method() {
            Delegate = new void_f<AbilityType, bool>(SaveController.SetAbility),
            CallbackName = "set_ability"
          },
          new Method() {
            Delegate = new f<bool, AbilityType>((AbilityType at) => SaveController.Data.TreesActivated.Contains(at)),
            CallbackName = "is_tree_activated"
          },
          new Method() {
            Delegate = new f<ulong, IntPtr>(ShopController.MessageSwap),
            CallbackName = "shop_string_repl"
          },
          new Method() {
            Delegate = new void_f<AbilityType>(ShopController.OnBuyOpherWeapon),
            CallbackName = "opher_buy_weapon"
          },
          new Method() {
            Delegate = new void_f<AbilityType>(ShopController.OnBuyOpherUpgrade),
            CallbackName = "opher_buy_upgrade"
          },
          new Method() {
            Delegate = new f<bool, AbilityType>(ShopController.OpherBoughtWeapon),
            CallbackName = "opher_bought_weapon"
          },
          new Method() {
            Delegate = new f<int, AbilityType>(ShopController.OpherWeaponCost),
            CallbackName = "opher_weapon_cost"
          },
          new Method() {
            Delegate = new f<bool, AbilityType>(ShopController.OpherBoughtUpgrade),
            CallbackName = "opher_bought_upgrade"
          },
          new Method() {
            Delegate = new void_f<ShardType>(ShopController.OnBuyTwillenShard),
            CallbackName = "twillen_buy_shard"
          },
          new Method() {
            Delegate = new f<bool, ShardType>(ShopController.TwillenBoughtShard),
            CallbackName = "twillen_bought_shard"
          },
          new Method() {
            Delegate = new f<int, ShardType>(ShopController.TwillenShardCost),
            CallbackName = "twillen_shard_cost"
          },
          new Method() {
            Delegate = new f<int, int>(ShopController.LupoUpgradeCost),
            CallbackName = "lupo_upgrade_cost"
          },
          new Method() { // unused, i think?
            Delegate = new f<ulong, string, bool>(RVAFinder.rvaLookup),
            CallbackName = "rva_lookup"
          },
        };
      }
    }
    public delegate Ret f<Ret>();
    public delegate Ret f<Ret, Arg1>(Arg1 arg1);
    public delegate Ret f<Ret, Arg1, Arg2>(Arg1 arg1, Arg2 arg2);
    public delegate void void_f();
    public delegate void void_f<Arg1>(Arg1 arg1);
    public delegate void void_f<Arg1, Arg2>(Arg1 arg1, Arg2 arg2);
  }
}
