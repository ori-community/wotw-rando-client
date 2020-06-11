using System;
using System.ComponentModel;
using System.Diagnostics;
using System.IO;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading;

namespace Injector {
  class Program {
    private static readonly IntPtr StaticZero = (IntPtr)0;
    public static string InstallRoot = "C:\\moon\\";
    public static string DllPath => $"{InstallRoot}InjectDLL.dll";
    public static bool WinStore = false;
    public static string ExeName => WinStore ? "oriandthewillofthewisps-pc" : "oriwotw";
    public static string WinTitle => "OriAndTheWilloftheWisps";

    public static bool DevMode = true;

    public static void Log(string message) { // doing it like this so we can change it later
      if (DevMode) {
        Console.WriteLine(message);
      }
    }

    public static void LogNative(string message) {
      if (DevMode) {
        int error = Marshal.GetLastWin32Error();
        string errorMessage = new Win32Exception(error).Message;
        Log(string.Format("{0}, {1}: ({2})", message, error, errorMessage));
      }
    }

    public static void Inject(Process process) {
      if (!File.Exists(DllPath)) {
        Log("Dll path not found");
        return;
      }

      var Proc = process.Id;

      if (Proc == 0) {
        Log("game not running");
        return;
      }
      var Window = NativeMethods.OpenProcess(0x001F0FFF, 1, (uint)Proc);
      if (Window == StaticZero) {
        LogNative("window not found");
        return;
      }
      var LoadAddress = NativeMethods.GetProcAddress(NativeMethods.GetModuleHandle("kernel32.dll"),
          "LoadLibraryA");
      if (LoadAddress == StaticZero) {
        LogNative("Couldn't find load address");
        return;
      }

      var Address = NativeMethods.VirtualAllocEx(Window, (IntPtr)null, (IntPtr)DllPath.Length, 0x1000 | 0x2000,
          0X40);
      if (Address == StaticZero) {
        LogNative("Couldn't find address");
        return;
      }
      Console.WriteLine("Address is: {0:X}", Address);

      var BytesToInject = Encoding.ASCII.GetBytes(DllPath);

      if (NativeMethods.WriteProcessMemory(Window, Address, BytesToInject, BytesToInject.Length + 1, 0) == 0) {
        LogNative("failed to write process memory");
        return;
      }
      var threadHandle = NativeMethods.CreateRemoteThread(Window, (IntPtr)null, StaticZero, LoadAddress, Address, 0,
              (IntPtr)null);
      if (threadHandle == StaticZero) {
        LogNative("failed to create remote thread");
        return;
      }
      Log("Thread handle: " + threadHandle.ToString());

      NativeMethods.CloseHandle(Window);
      return;
    }
    static int GetOriWindow() => NativeMethods.FindWindow(null, WinTitle);

    static void Main(string[] args) {
      try {
        if (args.Length > 0) {
          DevMode = args[0] != "false";
          WinStore = (args.Length > 1) && args[1] != "false";
        }
        if (DevMode) {
          Console.WriteLine($"{string.Join(" ", args)} -> {DevMode} {WinStore}");
        }

        for (var i = 0; i < 30; i++) {
          if (GetOriWindow() != 0) {
            break;
          }

          Thread.Sleep(1000);
          Log("waiting for the game to start...");
        }
        Log("Injecting...");

        try {
          Process proc = Process.GetProcessesByName(ExeName).FirstOrDefault();
          if (proc == null) {
            Log("proc not found, can't do shit???");
            Thread.Sleep(2000);
            return;
          }
          Inject(proc);
          if (DevMode) {
            var t = new Thread(new ThreadStart(ListenForOri));
            t.Start();
            Log("press any key to exit");
            Console.ReadKey();
            Process.GetProcessesByName(ExeName).FirstOrDefault()?.Kill();
            Environment.Exit(0);
          }
        }
        catch (Exception e) {
          Log($"Error:  {e.Message} at {e.TargetSite}/{e.Source} \n{e.StackTrace}");
          Thread.Sleep(5000);
        }
      }
      catch (Exception e) {
        Log($"Error:  {e.Message} at {e.TargetSite}/{e.Source} \n{e.StackTrace}");
        Thread.Sleep(5000);
      }
    }

    public static void ListenForOri() {
      while (Process.GetProcessesByName(ExeName).Length > 0) {
        Thread.Sleep(500);
      }
      Log("Ori stopped running. Exiting in 4s...");
      Thread.Sleep(4000);
      Environment.Exit(0);
    }
  }
}
