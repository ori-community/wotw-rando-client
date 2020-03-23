using System;
using System.Diagnostics;
using System.IO;
using System.Linq;
using System.Text;
using System.Runtime.InteropServices;

namespace Injector
{
    class Program
    {

        private static readonly IntPtr StaticZero = (IntPtr)0;
        public static String DllPath = "C:\\moon\\InjectDLL.dll";
        public static String FlagPath = "C:\\moon\\inject.flag";
        public static String ExeName = "oriwotw"; // doesn't work with dotexe
        public static String SteamPath = "C:\\Program Files (x86)\\Steam\\Steam.exe";
        public static void Log(string message) // doing it like this so we can change it later
        {
            Console.WriteLine(message);
        }
        public static void Inject()
        {
            if (!File.Exists(DllPath))
            {
                Log("Dll path not found");
                return;
            }

            var Proc = (from Process in Process.GetProcesses() where Process.ProcessName == ExeName select Process.Id).FirstOrDefault();

            if (Proc == 0)
            {
                Log("game not running");
                return;
            }
            var Window = NativeMethods.OpenProcess(0x001F0FFF, 1, (uint)Proc);
            if (Window == StaticZero)
            {
                Log("window not found");
                return;
            }
            var LoadAddress = NativeMethods.GetProcAddress(NativeMethods.GetModuleHandle("kernel32.dll"),
                "LoadLibraryA");
            if (LoadAddress == StaticZero)
            {
                Log("Couldn't find load address");
                return;
            }

            var Address = NativeMethods.VirtualAllocEx(Window, (IntPtr)null, (IntPtr)DllPath.Length, 0x1000 | 0x2000,
                0X40);
            if (Address == StaticZero)
            {
                Log("Couldn't find address");
                return;
            }
            Console.WriteLine("Address is: {0:X}", Address);

            var BytesToInject = Encoding.ASCII.GetBytes(DllPath);

            if (NativeMethods.WriteProcessMemory(Window, Address, BytesToInject, BytesToInject.Length + 1, 0) == 0)
            {
                Log("failed to write process memory");
                return;
            }
            var threadHandle = NativeMethods.CreateRemoteThread(Window, (IntPtr)null, StaticZero, LoadAddress, Address, 0,
                    (IntPtr)null);
            if (threadHandle == StaticZero)
            {
                Log("failed to create remote thread");
                return;
            }
            Log("Thread handle: " + threadHandle.ToString());

            NativeMethods.CloseHandle(Window);
            return;

        }

        static void Main(string[] args)
        {
            System.Diagnostics.Process.Start(SteamPath, "-applaunch 1057090");
            for (var i = 0; i < 25; i++) {
                if (NativeMethods.FindWindow(null, "OriAndTheWillOfTheWisps") != 0)
                    break;
                System.Threading.Thread.Sleep(1000);
                Log("waiting...");
            }
            if(!File.Exists(FlagPath))
                File.Create(FlagPath).Close();
            Log("Injecting...");
            try
            {
                Inject();
            }
            catch (Exception e)
            {
                Log("Error:  " + e.Message);
            }
            Log("press any key to detatch and exit");
            Console.ReadKey();
            File.Delete(FlagPath);
            System.Diagnostics.Process.GetProcessesByName("oriwotw").FirstOrDefault()?.Kill();
        }
    }
}
