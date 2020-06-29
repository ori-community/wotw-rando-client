using System;
using System.Text;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using RandoMainDLL.Memory;
using System.Linq;

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
    public extern static void set_equipment(EquipmentType ability, bool value);

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
    public extern static void lock_shriek_goal(bool value);

    [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
    public extern static void magic_function();
    [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
    public extern static bool toggle_cursorlock();
    [DllImport("InjectDll.dll", CallingConvention = CallingConvention.Cdecl)]
    public extern static void bind_sword();

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
  }
}

