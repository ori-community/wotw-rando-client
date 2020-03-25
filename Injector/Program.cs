using System;
using System.Diagnostics;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading;

namespace Injector
{
    class Program {

        private static readonly IntPtr StaticZero = (IntPtr)0;
        public static String DllPath = "C:\\moon\\InjectDLL.dll";
        public static String ahkPath = "C:\\moon\\AutoHotkey.Interop.dll";
        public static String ExeName = "oriwotw";
        public static String ExePath = "C:\\Program Files (x86)\\Steam\\Steam.exe";
        public static String ExeArgs = "-applaunch 1057090";
        public static bool DevMode = true;
        public static void Log(string message) // doing it like this so we can change it later
        {
            if(DevMode)
                Console.WriteLine(message);
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
                Log("window not found");
                return;
            }
            var LoadAddress = NativeMethods.GetProcAddress(NativeMethods.GetModuleHandle("kernel32.dll"),
                "LoadLibraryA");
            if (LoadAddress == StaticZero) {
                Log("Couldn't find load address");
                return;
            }

            var Address = NativeMethods.VirtualAllocEx(Window, (IntPtr)null, (IntPtr)DllPath.Length, 0x1000 | 0x2000,
                0X40);
            if (Address == StaticZero) {
                Log("Couldn't find address");
                return;
            }
            Console.WriteLine("Address is: {0:X}", Address);

            var BytesToInject = Encoding.ASCII.GetBytes(DllPath);

            if (NativeMethods.WriteProcessMemory(Window, Address, BytesToInject, BytesToInject.Length + 1, 0) == 0) {
                Log("failed to write process memory");
                return;
            }
            var threadHandle = NativeMethods.CreateRemoteThread(Window, (IntPtr)null, StaticZero, LoadAddress, Address, 0,
                    (IntPtr)null);
            if (threadHandle == StaticZero) {
                Log("failed to create remote thread");
                return;
            }
            Log("Thread handle: " + threadHandle.ToString());

            NativeMethods.CloseHandle(Window);
            return;

        }

        static void Main(string[] args) {
            if (args.Length > 0) {
                DevMode = args[0] == "dev";
                DllPath = args.Length > 1 ? args[1] : DllPath;
                ahkPath = args.Length > 2 ? args[2] : ahkPath;
                ExePath = args.Length > 3 ? args[3] : ExePath;
                ExeArgs = args.Length > 4 ? args[4] : ExeArgs;
            }
            if (DevMode && NativeMethods.FindWindow(null, "OriAndTheWillOfTheWisps") == 0)
                System.Diagnostics.Process.Start(ExePath, ExeArgs);
            for (var i = 0; i < 25; i++) {
                if (NativeMethods.FindWindow(null, "OriAndTheWillOfTheWisps") != 0)
                    break;
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
                string oriAHKPath = proc.MainModule.FileName.Replace("oriwotw.exe", "") + "AutoHotkey.Interop.dll";
                if (!File.Exists(oriAHKPath))
                    File.Copy(ahkPath, oriAHKPath);
                Inject(proc);
                if(DevMode) {
                    Thread t = new Thread(new ThreadStart(ListenForOri));
                    t.Start();
                    Log("press any key to exit");
                    Console.ReadKey();
                    Process.GetProcessesByName(ExeName).FirstOrDefault()?.Kill();
                    Environment.Exit(Environment.ExitCode);
                }
            } catch (Exception e) {
                Log("Error:  " + e.Message);
                Thread.Sleep(5000);
            }
       }
        public static void ListenForOri() {
            while(Process.GetProcessesByName(ExeName).Length > 0) {
                Thread.Sleep(500);
            }
            Log("Ori stopped running. Exiting in 4s...");
            Thread.Sleep(4000);
            Environment.Exit(Environment.ExitCode);
        }
    }
}
