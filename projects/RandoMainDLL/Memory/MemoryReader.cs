﻿using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.InteropServices;
using System.Text;

namespace RandoMainDLL.Memory {
  public static class MemoryReader {
    private static readonly Dictionary<int, Module64[]> ModuleCache = new Dictionary<int, Module64[]>();
    public static bool is64Bit;
    public static byte[] stringHeader;

    public static void Update64Bit(Process program) => is64Bit = program.Is64Bit();

    public static T Read<T>(this Process targetProcess, IntPtr address, params int[] offsets) where T : unmanaged {
      if (targetProcess == null || address == IntPtr.Zero) { return default; }

      int last = OffsetAddress(targetProcess, ref address, offsets);
      if (address == IntPtr.Zero) { return default; }

      unsafe {
        int size = sizeof(T);
        if (typeof(T) == typeof(IntPtr)) { size = is64Bit ? 8 : 4; }
        byte[] buffer = Read(targetProcess, address + last, size);
        fixed (byte* ptr = buffer) {
          return *(T*)ptr;
        }
      }
    }

    public static byte[] Read(this Process targetProcess, IntPtr address, int numBytes) {
      byte[] buffer = new byte[numBytes];
      if (targetProcess == null || address == IntPtr.Zero) { return buffer; }

      WinAPI.ReadProcessMemory(targetProcess.Handle, address, buffer, numBytes, out _);
      return buffer;
    }

    public static byte[] Read(this Process targetProcess, IntPtr address, int numBytes, params int[] offsets) {
      byte[] buffer = new byte[numBytes];
      if (targetProcess == null || address == IntPtr.Zero) { return buffer; }

      int last = OffsetAddress(targetProcess, ref address, offsets);
      if (address == IntPtr.Zero) { return buffer; }

      WinAPI.ReadProcessMemory(targetProcess.Handle, address + last, buffer, numBytes, out _);
      return buffer;
    }

    public static string ReadString(this Process targetProcess, IntPtr address) {
      if (targetProcess == null || address == IntPtr.Zero) { return string.Empty; }
      if (stringHeader == null) {
        stringHeader = Read(targetProcess, address, is64Bit ? 0x10 : 0x8);
      }

      int length = Read<int>(targetProcess, address, is64Bit ? 0x10 : 0x8);
      if (length < 0 || length > 2048) { return string.Empty; }
      return Encoding.Unicode.GetString(Read(targetProcess, address + (is64Bit ? 0x14 : 0xc), 2 * length));
    }

    public static string ReadString(this Process targetProcess, IntPtr address, params int[] offsets) {
      if (targetProcess == null || address == IntPtr.Zero) { return string.Empty; }

      int last = OffsetAddress(targetProcess, ref address, offsets);
      if (address == IntPtr.Zero) { return string.Empty; }

      return ReadString(targetProcess, address + last);
    }

    public static string ReadAscii(this Process targetProcess, IntPtr address) {
      if (targetProcess == null || address == IntPtr.Zero) { return string.Empty; }

      var sb = new StringBuilder();
      byte[] data = new byte[128];
      int bytesRead;
      int offset = 0;
      bool invalid = false;
      do {
        WinAPI.ReadProcessMemory(targetProcess.Handle, address + offset, data, 128, out bytesRead);
        int i = 0;
        while (i < bytesRead) {
          byte d = data[i++];
          if (d == 0) {
            i--;
            break;
          }
          else if (d > 127) {
            invalid = true;
            break;
          }
        }
        if (i > 0) {
          sb.Append(Encoding.ASCII.GetString(data, 0, i));
        }
        if (i < bytesRead || invalid) {
          break;
        }
        offset += 128;
      } while (bytesRead > 0);

      return invalid ? string.Empty : sb.ToString();
    }

    public static string ReadAscii(this Process targetProcess, IntPtr address, params int[] offsets) {
      if (targetProcess == null || address == IntPtr.Zero) { return string.Empty; }

      int last = OffsetAddress(targetProcess, ref address, offsets);
      if (address == IntPtr.Zero) { return string.Empty; }

      return ReadAscii(targetProcess, address + last);
    }

    public static void Write<T>(this Process targetProcess, IntPtr address, T value, params int[] offsets) where T : unmanaged {
      if (targetProcess == null) { return; }

      int last = OffsetAddress(targetProcess, ref address, offsets);
      if (address == IntPtr.Zero) { return; }

      byte[] buffer;
      unsafe {
        buffer = new byte[sizeof(T)];
        fixed (byte* bufferPtr = buffer) {
          Buffer.MemoryCopy(&value, bufferPtr, sizeof(T), sizeof(T));
        }
      }
      WinAPI.WriteProcessMemory(targetProcess.Handle, address + last, buffer, buffer.Length, out var bytesWritten);
    }

    public static void Write(this Process targetProcess, IntPtr address, byte[] value, params int[] offsets) {
      if (targetProcess == null) { return; }

      int last = OffsetAddress(targetProcess, ref address, offsets);
      if (address == IntPtr.Zero) { return; }

      WinAPI.WriteProcessMemory(targetProcess.Handle, address + last, value, value.Length, out _);
    }

    private static int OffsetAddress(this Process targetProcess, ref IntPtr address, params int[] offsets) {
      byte[] buffer = new byte[is64Bit ? 8 : 4];
      for (int i = 0; i < offsets.Length - 1; i++) {
        WinAPI.ReadProcessMemory(targetProcess.Handle, address + offsets[i], buffer, buffer.Length, out _);
        if (is64Bit) {
          address = (IntPtr)BitConverter.ToUInt64(buffer, 0);
        }
        else {
          address = (IntPtr)BitConverter.ToUInt32(buffer, 0);
        }
        if (address == IntPtr.Zero) { break; }
      }
      return offsets.Length > 0 ? offsets[offsets.Length - 1] : 0;
    }

    public static bool Is64Bit(this Process process) {
      if (process == null) { return false; }
      WinAPI.IsWow64Process(process.Handle, out var flag);
      return Environment.Is64BitOperatingSystem && !flag;
    }

    public static Module64 MainModule64(this Process p) {
      Module64[] modules = p.Modules64();
      return modules == null || modules.Length == 0 ? null : modules[0];
    }

    public static Module64 Module64(this Process p, string moduleName) {
      Module64[] modules = p.Modules64();
      if (modules != null) {
        for (int i = 0; i < modules.Length; i++) {
          Module64 module = modules[i];
          if (module.Name.Equals(moduleName, StringComparison.OrdinalIgnoreCase)) {
            return module;
          }
        }
      }
      return null;
    }

    public static Module64[] Modules64(this Process p) {
      lock (ModuleCache) {
        if (ModuleCache.Count > 100) { ModuleCache.Clear(); }

        IntPtr[] buffer = new IntPtr[1024];
        uint cb = (uint)(IntPtr.Size * buffer.Length);
        if (!WinAPI.EnumProcessModulesEx(p.Handle, buffer, cb, out var totalModules, 3u)) {
          return null;
        }
        uint moduleSize = totalModules / (uint)IntPtr.Size;
        int key = p.StartTime.GetHashCode() + p.Id + (int)moduleSize;
        if (ModuleCache.ContainsKey(key)) { return ModuleCache[key]; }

        var list = new List<Module64>();
        var stringBuilder = new StringBuilder(260);
        int count = 0;
        while ((long)count < (long)((ulong)moduleSize)) {
          stringBuilder.Clear();
          if (WinAPI.GetModuleFileNameEx(p.Handle, buffer[count], stringBuilder, (uint)stringBuilder.Capacity) == 0u) {
            return list.ToArray();
          }
          string fileName = stringBuilder.ToString();
          stringBuilder.Clear();
          if (WinAPI.GetModuleBaseName(p.Handle, buffer[count], stringBuilder, (uint)stringBuilder.Capacity) == 0u) {
            return list.ToArray();
          }
          string moduleName = stringBuilder.ToString();
          ModuleInfo modInfo = default;
          if (!WinAPI.GetModuleInformation(p.Handle, buffer[count], out modInfo, (uint)Marshal.SizeOf(modInfo))) {
            return list.ToArray();
          }
          list.Add(new Module64 {
            FileName = fileName,
            BaseAddress = modInfo.BaseAddress,
            MemorySize = (int)modInfo.ModuleSize,
            EntryPointAddress = modInfo.EntryPoint,
            Name = moduleName
          });
          count++;
        }
        ModuleCache.Add(key, list.ToArray());
        return list.ToArray();
      }
    }
  }

  internal static class WinAPI {
    [DllImport("kernel32.dll", SetLastError = true)]
    public static extern bool ReadProcessMemory(IntPtr hProcess, IntPtr lpBaseAddress, [Out] byte[] lpBuffer, int dwSize, out int lpNumberOfBytesRead);
    [DllImport("kernel32.dll", SetLastError = true)]
    public static extern bool WriteProcessMemory(IntPtr hProcess, IntPtr lpBaseAddress, [Out] byte[] lpBuffer, int dwSize, out int lpNumberOfBytesWritten);
    [DllImport("kernel32.dll", SetLastError = true)]
    [return: MarshalAs(UnmanagedType.Bool)]
    public static extern bool IsWow64Process(IntPtr hProcess, [MarshalAs(UnmanagedType.Bool)] out bool wow64Process);
    [DllImport("psapi.dll", SetLastError = true)]
    [return: MarshalAs(UnmanagedType.Bool)]
    public static extern bool EnumProcessModulesEx(IntPtr hProcess, [Out] IntPtr[] lphModule, uint cb, out uint lpcbNeeded, uint dwFilterFlag);
    [DllImport("psapi.dll", SetLastError = true)]
    public static extern uint GetModuleFileNameEx(IntPtr hProcess, IntPtr hModule, [Out] StringBuilder lpBaseName, uint nSize);
    [DllImport("psapi.dll")]
    public static extern uint GetModuleBaseName(IntPtr hProcess, IntPtr hModule, [Out] StringBuilder lpBaseName, uint nSize);
    [DllImport("psapi.dll", SetLastError = true)]
    [return: MarshalAs(UnmanagedType.Bool)]
    public static extern bool GetModuleInformation(IntPtr hProcess, IntPtr hModule, out ModuleInfo lpmodinfo, uint cb);
    [DllImport("kernel32.dll", SetLastError = true)]
    public static extern int VirtualQueryEx(IntPtr hProcess, IntPtr lpAddress, out MemInfo lpBuffer, int dwLength);
  }

  public class Module64 {
    public IntPtr BaseAddress { get; set; }
    public IntPtr EntryPointAddress { get; set; }
    public string FileName { get; set; }
    public int MemorySize { get; set; }
    public string Name { get; set; }
    public FileVersionInfo FileVersionInfo => FileVersionInfo.GetVersionInfo(FileName);
    public override string ToString() => Name ?? base.ToString();
  }

  [StructLayout(LayoutKind.Sequential)]
  public struct ModuleInfo {
    public IntPtr BaseAddress;
    public uint ModuleSize;
    public IntPtr EntryPoint;
  }

  [StructLayout(LayoutKind.Sequential)]
  public struct MemInfo {
    public IntPtr BaseAddress;
    public IntPtr AllocationBase;
    public uint AllocationProtect;
    public IntPtr RegionSize;
    public uint State;
    public uint Protect;
    public uint Type;
    public override string ToString() => BaseAddress.ToString("X") + " " + Protect.ToString("X") + " " + State.ToString("X") + " " + Type.ToString("X") + " " + RegionSize.ToString("X");
  }

  public class MemorySearcher {
    private const int BUFFER_SIZE = 2097152;
    private readonly List<MemInfo> memoryInfo = new List<MemInfo>();
    private readonly byte[] buffer = new byte[BUFFER_SIZE];
    public Func<MemInfo, bool> MemoryFilter = delegate (MemInfo info) {
      return (info.State & 0x1000) != 0 && (info.Protect & 0x100) == 0;
    };

    public int ReadMemory(Process process, int index, int startIndex, out int bytesRead) {
      MemInfo info = memoryInfo[index];
      int returnIndex = -1;
      int amountToRead = (int)((uint)info.RegionSize - (uint)startIndex);
      if (amountToRead > BUFFER_SIZE) {
        returnIndex = startIndex + BUFFER_SIZE;
        amountToRead = BUFFER_SIZE;
      }
      WinAPI.ReadProcessMemory(process.Handle, info.BaseAddress + startIndex, buffer, amountToRead, out bytesRead);
      return returnIndex;
    }

    public IntPtr FindSignature(Process process, string signature) {
      GetSignature(signature, out var pattern, out var mask);
      GetMemoryInfo(process.Handle);
      int[] offsets = GetCharacterOffsets(pattern, mask);


      for (int i = 0; i < memoryInfo.Count; i++) {
        MemInfo info = memoryInfo[i];
        int index = 0;
        do {
          int previousIndex = index;
          index = ReadMemory(process, i, index, out var bytesRead);

          int result = ScanMemory(buffer, bytesRead, pattern, mask, offsets);
          if (result != int.MinValue) {
            return info.BaseAddress + result + previousIndex;
          }

          if (index > 0) { index -= pattern.Length - 1; }
        } while (index > 0);
      }

      return IntPtr.Zero;
    }

    public List<IntPtr> FindSignatures(Process process, string signature) {
      GetSignature(signature, out var pattern, out var mask);
      GetMemoryInfo(process.Handle);
      int[] offsets = GetCharacterOffsets(pattern, mask);

      var pointers = new List<IntPtr>();
      for (int i = 0; i < memoryInfo.Count; i++) {
        MemInfo info = memoryInfo[i];
        int index = 0;
        do {
          int previousIndex = index;
          index = ReadMemory(process, i, index, out var bytesRead);
          info.BaseAddress += previousIndex;
          ScanMemory(pointers, info, buffer, bytesRead, pattern, mask, offsets);
          info.BaseAddress -= previousIndex;

          if (index > 0) { index -= pattern.Length - 1; }
        } while (index > 0);
      }
      return pointers;
    }

    public bool VerifySignature(Process process, IntPtr pointer, string signature) {
      GetSignature(signature, out var pattern, out var mask);
      int[] offsets = GetCharacterOffsets(pattern, mask);

      MemInfo memInfoStart = default;
      if (WinAPI.VirtualQueryEx(process.Handle, pointer, out memInfoStart, Marshal.SizeOf(memInfoStart)) == 0 ||
          WinAPI.VirtualQueryEx(process.Handle, pointer + pattern.Length, out MemInfo memInfoEnd, Marshal.SizeOf(memInfoStart)) == 0 ||
          memInfoStart.BaseAddress != memInfoEnd.BaseAddress || !MemoryFilter(memInfoStart)) {
        return false;
      }

      byte[] buff = new byte[pattern.Length];
      WinAPI.ReadProcessMemory(process.Handle, pointer, buff, buff.Length, out _);
      return ScanMemory(buff, buff.Length, pattern, mask, offsets) == 0;
    }

    public void GetMemoryInfo(IntPtr pHandle) {
      memoryInfo.Clear();
      var current = (IntPtr)65536;
      while (true) {
        var memInfo = new MemInfo();
        int dump = WinAPI.VirtualQueryEx(pHandle, current, out memInfo, Marshal.SizeOf(memInfo));
        if (dump == 0) { break; }

        long regionSize = (long)memInfo.RegionSize;
        if (regionSize <= 0 || (int)regionSize != regionSize) {
          if (MemoryReader.is64Bit) {
            current = (IntPtr)((ulong)memInfo.BaseAddress + (ulong)memInfo.RegionSize);
            continue;
          }
          break;
        }

        if (MemoryFilter(memInfo)) {
          memoryInfo.Add(memInfo);
        }

        current = memInfo.BaseAddress + (int)regionSize;
      }
    }

    private int ScanMemory(byte[] data, int dataLength, byte[] search, bool[] mask, int[] offsets) {
      int current = 0;
      int end = search.Length - 1;
      while (current <= dataLength - search.Length) {
        for (int i = end; data[current + i] == search[i] || mask[i]; i--) {
          if (i == 0) {
            return current;
          }
        }
        int offset = offsets[data[current + end]];
        current += offset;
      }
      return int.MinValue;
    }

    private void ScanMemory(List<IntPtr> pointers, MemInfo info, byte[] data, int dataLength, byte[] search, bool[] mask, int[] offsets) {
      int current = 0;
      int end = search.Length - 1;
      while (current <= dataLength - search.Length) {
        for (int i = end; data[current + i] == search[i] || mask[i]; i--) {
          if (i == 0) {
            pointers.Add(info.BaseAddress + current);
            break;
          }
        }
        int offset = offsets[data[current + end]];
        current += offset;
      }
    }

    private int[] GetCharacterOffsets(byte[] search, bool[] mask) {
      int[] offsets = new int[256];
      int unknown = 0;
      int end = search.Length - 1;
      for (int i = 0; i < end; i++) {
        if (!mask[i]) {
          offsets[search[i]] = end - i;
        }
        else {
          unknown = end - i;
        }
      }

      if (unknown == 0) {
        unknown = search.Length;
      }

      for (int i = 0; i < 256; i++) {
        int offset = offsets[i];
        if (unknown < offset || offset == 0) {
          offsets[i] = unknown;
        }
      }
      return offsets;
    }

    private void GetSignature(string searchString, out byte[] pattern, out bool[] mask) {
      int length = searchString.Length >> 1;
      pattern = new byte[length];
      mask = new bool[length];

      length <<= 1;
      for (int i = 0, j = 0; i < length; i++) {
        byte temp = (byte)(((int)searchString[i] - 0x30) & 0x1F);
        pattern[j] |= temp > 0x09 ? (byte)(temp - 7) : temp;
        if (searchString[i] == '?') {
          mask[j] = true;
          pattern[j] = 0;
        }
        if ((i & 1) == 1) {
          j++;
        }
        else {
          pattern[j] <<= 4;
        }
      }
    }
  }
}
