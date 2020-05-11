using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;

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
  }
}
