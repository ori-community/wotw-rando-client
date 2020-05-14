using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using RandoMainDLL.Memory;

namespace RandoMainDLL {
  static class InterOp {
    [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
    public extern static IntPtr displayHint(IntPtr hint, float duration);

    [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
    public extern static void clearLastHint();

    [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
    public extern static void clearMessageBox(IntPtr messageBox);

    [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
    public extern static IntPtr getCurrentHint();
    [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
    public extern static bool hintsReady();
    [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
    public extern static void discoverEverything();
    [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
    public extern static void save();
    [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
    public extern static void foundDash();
    [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
    public extern static void setOre(int amount);

    [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
    public extern static bool playerCanMove();

    static class ExportedFuncDoNotCall {
      // calling any of these from c# will instantly trigger a crash
      // In fact, loading a function onto the stack that calls one
      // of these functions will instantly trigger a crash
      // so don't do it.

      [DllExport]
      public static bool Initialize() {
        return Randomizer.Initialize();
      }
      [DllExport]
      public static void Update() {
        Randomizer.Update();
      }


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
      public static ulong GetShardSlotPtr() => Randomizer.Memory.ShardSlotPtr();

      [DllExport]
      public static bool InjectLogEnabled() => !AHK.IniFlag("MuteInjectLogs");

      [DllExport]
      public static bool InjectDebugEnabled() => AHK.IniFlag("DebugInjectLogs");

      [DllExport]
      public static bool DoInvertTree(AbilityType ability) => SaveController.Data.TreesActivated.Contains(ability) ^ Randomizer.Memory.HasAbility(ability);
    }
  }
}

