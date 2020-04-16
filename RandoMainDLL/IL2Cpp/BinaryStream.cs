using System;
using System.Collections.Generic;
using System.IO;
using System.Runtime.InteropServices;
using System.Text;
namespace RandoMainDLL.Il2Cpp {
  [AttributeUsage(AttributeTargets.Field)]
  public class VersionAttribute : Attribute {
    public float Min { get; set; } = 0;
    public float Max { get; set; } = 99;
  }
  [AttributeUsage(AttributeTargets.Field)]
  public class ArrayLengthAttribute : Attribute {
    public int Length { get; set; }
  }
  public class BinaryStream : IDisposable {
    public float Version;
    public bool Is32Bit;
    private Stream stream;
    private BinaryReader reader;

    public BinaryStream(Stream input) {
      stream = input;
      reader = new BinaryReader(stream, Encoding.UTF8, true);
    }

    public bool ReadBoolean() => reader.ReadBoolean();
    public byte ReadByte() => reader.ReadByte();
    public byte[] ReadBytes(int count) => reader.ReadBytes(count);
    public sbyte ReadSByte() => reader.ReadSByte();
    public short ReadInt16() => reader.ReadInt16();
    public ushort ReadUInt16() => reader.ReadUInt16();
    public int ReadInt32() => reader.ReadInt32();
    public uint ReadUInt32() => reader.ReadUInt32();
    public long ReadInt64() => reader.ReadInt64();
    public ulong ReadUInt64() => reader.ReadUInt64();
    public float ReadSingle() => reader.ReadSingle();
    public double ReadDouble() => reader.ReadDouble();

    public ulong Position {
      get => (ulong)stream.Position;
      set => stream.Position = (long)value;
    }
    public T ReadClass<T>(ulong addr) where T : struct {
      Position = addr;
      return ReadClass<T>();
    }
    public T ReadClass<T>() where T : new() {
      byte[] bytes = reader.ReadBytes(Marshal.SizeOf(typeof(T)));

      GCHandle handle = GCHandle.Alloc(bytes, GCHandleType.Pinned);
      T theStructure = (T)Marshal.PtrToStructure(handle.AddrOfPinnedObject(), typeof(T));
      handle.Free();

      return theStructure;
    }
    public T[] ReadClassArray<T>(long count) where T : struct {
      var t = new T[count];
      for (var i = 0; i < count; i++) {
        t[i] = ReadClass<T>();
      }
      return t;
    }
    public T[] ReadClassArray<T>(ulong addr, long count) where T : struct {
      Position = addr;
      return ReadClassArray<T>(count);
    }

    public string ReadStringToNull(ulong addr) {
      Position = addr;
      var bytes = new List<byte>();
      byte b;
      while ((b = ReadByte()) != 0) {
        bytes.Add(b);
      }

      return Encoding.UTF8.GetString(bytes.ToArray());
    }

    protected virtual void Dispose(bool disposing) {
      if (disposing) {
        reader.Close();
        stream.Close();
      }
    }

    public void Dispose() {
      Dispose(true);
    }
  }
  internal static class ReadClassCache<T> {
    private static Dictionary<ulong, T> CacheInstance;

    public static void Add(ulong key, T value) {
      if (CacheInstance == null) {
        CacheInstance = new Dictionary<ulong, T>();
      }
      CacheInstance.Add(key, value);
    }

    public static bool TryGetValue(ulong key, out T value) {
      if (CacheInstance == null) {
        CacheInstance = new Dictionary<ulong, T>();
      }
      return CacheInstance.TryGetValue(key, out value);
    }
  }
}