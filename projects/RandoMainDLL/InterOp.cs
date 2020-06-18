using System;
using System.Text;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using RandoMainDLL.Memory;

namespace RandoMainDLL {
  static class InterOp {
    [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
    public extern static IntPtr display_hint(IntPtr hint, float duration);

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
    public extern static bool has_ability(AbilityType ability);

    [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
    public extern static IntPtr get_current_hint();
    [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
    public extern static bool hints_ready();
    [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
    public extern static void discover_everything();
    [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
    public extern static void save();
    [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
    public extern static void set_ore(int amount);

    [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
    public extern static bool player_can_move();

    [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
    public extern static void magic_function();
    [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
    public extern static bool toggle_cursorlock();
    [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
    public extern static void bind_sword();
    public static class Util {
      private static readonly Dictionary<string, IntPtr> stringAddresses = new Dictionary<string, IntPtr>();
      public static IntPtr getIl2cppStringPointer(string str) {
        if (!stringAddresses.ContainsKey(str)) {
          var chars = str.ToCharArray();
          int size = Encoding.Unicode.GetByteCount(chars);
          byte[] bytes = Encoding.Unicode.GetBytes(chars);

          IntPtr ptr = Marshal.AllocHGlobal(0x14 + size);
          for (int i = 0; i < MemoryReader.stringHeader.Length; i++) {
            Marshal.WriteByte(ptr, i, MemoryReader.stringHeader[i]);
          }

          Marshal.WriteInt64(ptr, 0x10, str.Length);
          for (int i = 0; i < bytes.Length; i++) {
            Marshal.WriteByte(ptr, 0x14 + i, bytes[i]);
          }
          stringAddresses[str] = ptr;
        }

        return stringAddresses[str];
      }
    }
    private static class ExportedFuncDoNotCall {
      // calling any of these from c# will instantly trigger a crash
      // In fact, loading a function onto the stack that calls one
      // of these functions will instantly trigger a crash
      // so don't do it.

      [DllExport]
      public static bool Initialize() => Randomizer.Initialize();
      [DllExport]
      public static void Update()  => Randomizer.Update();

      [DllExport]
      public static int OreCount() => Randomizer.Memory.Ore;
      [DllExport]
      public static bool TreeFulfilled(AbilityType ability) => SaveController.Data.TreesActivated.Contains(ability);

      [DllExport]
      public static void OnTree(AbilityType ability) {
        SaveController.Data.TreesActivated.Add(ability);
        Randomizer.Memory.FillEnergy();
        Randomizer.Memory.FillHealth();
        SeedController.OnTree(ability);
      }
      [DllExport]
      public static void OnCheckpoint() => UberStateController.Update();

      [DllExport]
      public static ulong GetShardSlotPtr() => Randomizer.Memory.ShardSlotPtr();


      [DllExport]
      public static bool CheckIni(IntPtr str) {
        var managedStr = Marshal.PtrToStringAnsi(str);
        return AHK.IniFlag(managedStr);
      }

      [DllExport]
      public static bool InjectLogEnabled() => !AHK.IniFlag("MuteInjectLogs");

      [DllExport]
      public static bool InjectDebugEnabled() => AHK.IniFlag("DebugInjectLogs");

      [DllExport]
      public static bool TPToAnyPickup() => AHK.TPToPickupsEnabled;
      [DllExport]
      public static bool InvertSwim() => AHK.IniFlag("InvertSwim");


      // save interops
      [DllExport]
      public static void NewGame(int slot) => Randomizer.OnNewGame(slot);
      [DllExport]
      public static void OnLoad(int slot, int backupSlot) => SaveController.OnLoad(slot, backupSlot);
      [DllExport]
      public static void OnSave(int slot, int backupSlot) => SaveController.OnSave(slot, backupSlot);
      [DllExport]
      public static bool GetAbility(AbilityType ability) => SaveController.GetAbility(ability);
      [DllExport]
      public static void SetAbility(AbilityType ability) => SaveController.SetAbility(ability);

      [DllExport]
      public static bool DoInvertTree(AbilityType ability) => SaveController.Data.TreesActivated.Contains(ability) ^ Randomizer.Memory.HasAbility(ability);

      [DllExport]
      public static bool IsTreeActivated(AbilityType ability) => SaveController.Data.TreesActivated.Contains(ability);

      // shop interops

      [DllExport]
      public static ulong ShopStringRepl(IntPtr str) => ShopController.MessageSwap(str);

      [DllExport]
      public static void OpherBuyWeapon(AbilityType slot) => ShopController.OnBuyOpherWeapon(slot);

      [DllExport]
      public static void OpherBuyUpgrade(AbilityType slot) => ShopController.OnBuyOpherUpgrade(slot);

      [DllExport]
      public static void TwillenBuyShard(ShardType slot) => ShopController.OnBuyTwillenShard(slot);

      [DllExport]
      public static bool OpherBoughtWeapon(AbilityType granted) => ShopController.OpherBoughtWeapon(granted);
      [DllExport]
      public static bool TwillenBoughtShard(ShardType shard) => ShopController.TwillenBoughtShard(shard);
      [DllExport]
      public static int TwillenShardCost(ShardType shard) => ShopController.TwillenShardCost(shard);
      [DllExport]
      public static int LupoUpgradeCost(int slot) => ShopController.LupoUpgradeCost(slot);
      [DllExport]
      public static int OpherWeaponCost(AbilityType ability) => ShopController.OpherWeaponCost(ability);
      [DllExport]
      public static bool OpherBoughtUpgrade(AbilityType slot) => ShopController.OpherBoughtUpgrade(slot);

    }
  }
}

