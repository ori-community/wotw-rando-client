using System;
using System.Runtime.InteropServices;

namespace Injector {
  public static class NativeMethods {
    [DllImport("user32.dll", EntryPoint = "FindWindow")]
    internal static extern int FindWindow(string sClass, string sWindow);

    [DllImport("kernel32.dll", SetLastError = true)]
    internal static extern IntPtr OpenProcess(uint DwDesiredAccess, int BInheritHandle, uint DwProcessId);

    [DllImport("kernel32.dll", SetLastError = true)]
    internal static extern int CloseHandle(IntPtr HObject);

    [DllImport("kernel32.dll", SetLastError = true)]
    internal static extern IntPtr GetProcAddress(IntPtr HModule, string LpProcName);

    [DllImport("kernel32.dll", SetLastError = true)]
    internal static extern IntPtr GetModuleHandle(string LpModuleName);

    [DllImport("kernel32.dll", SetLastError = true)]
    internal static extern IntPtr VirtualAllocEx(IntPtr HProcess, IntPtr LpAddress, IntPtr DwSize,
        uint FlAllocationType, uint FlProtect);

    [DllImport("kernel32.dll", SetLastError = true)]
    internal static extern int WriteProcessMemory(IntPtr HProcess, IntPtr LpBaseAddress, byte[] Buffer, int Size,
        int LpNumberOfBytesWritten);

    [DllImport("kernel32.dll", SetLastError = true)]
    internal static extern IntPtr CreateRemoteThread(IntPtr HProcess, IntPtr LpThreadAttribute, IntPtr DwStackSize,
        IntPtr LpStartAddress, IntPtr LpParameter, uint DwCreationFlags, IntPtr LpThreadId);
  }
}
