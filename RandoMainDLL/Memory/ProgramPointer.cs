using System;
using System.Diagnostics;
using System.IO;
using RandoMainDLL.Il2Cpp;
namespace RandoMainDLL.Memory {
    public enum PointerVersion {
        V1
    }
    public enum AutoDeref {
        None,
        Single,
        Double
    }
    public class ProgramPointer {
        private int lastID;
        private DateTime lastTry;
        public IntPtr Pointer { get; private set; }
        public IFindPointer[] Finders { get; private set; }
        public PointerVersion Version { get; private set; }
        public string AsmName { get; private set; }

        public ProgramPointer(params IFindPointer[] finders) : this(string.Empty, finders) { }
        public ProgramPointer(string asmName, params IFindPointer[] finders) {
            AsmName = asmName;
            Finders = finders;
            lastID = -1;
            lastTry = DateTime.MinValue;
        }

        public T Read<T>(Process program, params int[] offsets) where T : struct {
            GetPointer(program);
            return program.Read<T>(Pointer, offsets);
        }
        public string Read(Process program, params int[] offsets) {
            GetPointer(program);
            return program.ReadString(Pointer, offsets);
        }
        public byte[] ReadBytes(Process program, int length, params int[] offsets) {
            GetPointer(program);
            return program.Read(Pointer, length, offsets);
        }
        public void Write<T>(Process program, T value, params int[] offsets) where T : struct {
            GetPointer(program);
            program.Write<T>(Pointer, value, offsets);
        }
        public void Write(Process program, byte[] value, params int[] offsets) {
            GetPointer(program);
            program.Write(Pointer, value, offsets);
        }
        public void ClearPointer() {
            Pointer = IntPtr.Zero;
        }
        public IntPtr GetPointer(Process program) {
            if (program == null) {
                Pointer = IntPtr.Zero;
                lastID = -1;
                return Pointer;
            } else if (program.Id != lastID) {
                Pointer = IntPtr.Zero;
                lastID = program.Id;
            }

            if (Pointer == IntPtr.Zero && DateTime.Now > lastTry) {
                lastTry = DateTime.Now.AddSeconds(1);

                for (int i = 0; i < Finders.Length; i++) {
                    IFindPointer finder = Finders[i];
                    try {
                        Pointer = finder.FindPointer(program, AsmName);
                        if (Pointer != IntPtr.Zero || finder.FoundBaseAddress()) {
                            Version = finder.Version;
                            break;
                        }
                    } catch { }
                }
            }
            return Pointer;
        }
        public static IntPtr DerefPointer(Process program, IntPtr pointer, AutoDeref autoDeref) {
            if (pointer != IntPtr.Zero) {
                if (autoDeref != AutoDeref.None) {
                    if (MemoryReader.is64Bit) {
                        pointer = (IntPtr)program.Read<ulong>(pointer);
                    } else {
                        pointer = (IntPtr)program.Read<uint>(pointer);
                    }
                    if (autoDeref == AutoDeref.Double) {
                        if (MemoryReader.is64Bit) {
                            pointer = (IntPtr)program.Read<ulong>(pointer);
                        } else {
                            pointer = (IntPtr)program.Read<uint>(pointer);
                        }
                    }
                }
            }
            return pointer;
        }
        public static Tuple<IntPtr, IntPtr> GetAddressRange(Process program, string asmName) {
            Module64[] modules = program.Modules64();
            for (int i = 0; i < modules.Length; i++) {
                Module64 module = modules[i];
                if (module.Name.Equals(asmName, StringComparison.OrdinalIgnoreCase)) {
                    return new Tuple<IntPtr, IntPtr>(module.BaseAddress, module.BaseAddress + module.MemorySize);
                }
            }
            return new Tuple<IntPtr, IntPtr>(IntPtr.Zero, IntPtr.Zero);
        }
    }
    public interface IFindPointer {
        IntPtr FindPointer(Process program, string asmName);
        bool FoundBaseAddress();
        PointerVersion Version { get; }
    }
    //Will only work for version 24.1 PE files. Structures need changed per version in the Il2Cpp files
    public class FindIl2Cpp : IFindPointer {
        private static int lastPID;
        private static Il2CppData il2Cpp;
        private static Metadata metaData;
        private static Il2CppExecutor executor;
        private static Il2CppDecompiler decompiler;
        public PointerVersion Version { get { return PointerVersion.V1; } }
        private AutoDeref AutoDeref;
        private string FullName;
        private int Offset;
        private IntPtr BasePtr;
        public FindIl2Cpp(AutoDeref autoDeref, string fullName, int offset) {
            AutoDeref = autoDeref;
            FullName = fullName;
            Offset = offset;
            BasePtr = IntPtr.Zero;
        }
        public bool FoundBaseAddress() {
            return BasePtr != IntPtr.Zero;
        }
        public IntPtr FindPointer(Process program, string asmName) {
            if (il2Cpp == null || lastPID != program.Id) {
                lastPID = program.Id;
                BasePtr = IntPtr.Zero;

                string programPath = Path.GetDirectoryName(program.MainModule.FileName);
                string metaFile = Path.Combine(programPath, @"oriwotw_Data\il2cpp_data\Metadata\global-metadata.dat");
                string ilFile = Path.Combine(programPath, @"GameAssembly.dll");
                if (!File.Exists(metaFile) || !File.Exists(ilFile)) { return IntPtr.Zero; }

                byte[] metaDataBytes = File.ReadAllBytes(metaFile);
                byte[] il2CppBytes = File.ReadAllBytes(ilFile);
                Il2CppReader.Init(il2CppBytes, metaDataBytes, out metaData, out il2Cpp);
                executor = new Il2CppExecutor(metaData, il2Cpp);
                decompiler = new Il2CppDecompiler(executor);
            }

            return ProgramPointer.DerefPointer(program, GetPointer(program, asmName), AutoDeref);
        }
        private IntPtr GetPointer(Process program, string asmName) {
            if (BasePtr == IntPtr.Zero) {
                ulong rva = decompiler.GetRVA(FullName);
                if (string.IsNullOrEmpty(asmName)) {
                    BasePtr = program.MainModule.BaseAddress + (int)rva + Offset;
                } else {
                    Tuple<IntPtr, IntPtr> range = ProgramPointer.GetAddressRange(program, asmName);
                    BasePtr = range.Item1 + (int)rva + Offset;
                }
            }

            int offset = 0;
            if (AutoDeref != AutoDeref.None) {
                offset = program.Read<int>(BasePtr) + 4;
            }
            return BasePtr + offset;
        }
    }
    public class FindPointerSignature : IFindPointer {
        private static int lastPID;
        private static MemorySearcher Searcher = new MemorySearcher();
        public PointerVersion Version { get; private set; }
        private AutoDeref AutoDeref;
        private string Signature;
        private int Offset;
        private IntPtr BasePtr;

        public FindPointerSignature(PointerVersion version, AutoDeref autoDeref, string signature, int offset) {
            Version = version;
            AutoDeref = autoDeref;
            Signature = signature;
            Offset = offset;
            BasePtr = IntPtr.Zero;
        }

        public bool FoundBaseAddress() {
            return BasePtr != IntPtr.Zero;
        }
        public IntPtr FindPointer(Process program, string asmName) {
            return ProgramPointer.DerefPointer(program, GetPointer(program, asmName), AutoDeref);
        }
        private IntPtr GetPointer(Process program, string asmName) {
            if (lastPID != program.Id) {
                lastPID = program.Id;
                BasePtr = IntPtr.Zero;

                if (string.IsNullOrEmpty(asmName)) {
                    Searcher.MemoryFilter = delegate (MemInfo info) {
                        return (info.State & 0x1000) != 0 && (info.Protect & 0x20) != 0 && (info.Protect & 0x100) == 0;
                    };
                } else {
                    Tuple<IntPtr, IntPtr> range = ProgramPointer.GetAddressRange(program, asmName);
                    Searcher.MemoryFilter = delegate (MemInfo info) {
                        return (ulong)info.BaseAddress >= (ulong)range.Item1 && (ulong)info.BaseAddress <= (ulong)range.Item2 && (info.State & 0x1000) != 0 && (info.Protect & 0x20) != 0 && (info.Protect & 0x100) == 0;
                    };
                }
            }

            if (BasePtr != IntPtr.Zero) {
                int offset = 0;
                if (AutoDeref != AutoDeref.None) {
                    offset = program.Read<int>(BasePtr + Offset) + 4;
                }
                return BasePtr + Offset + offset;
            } else {
                IntPtr ptr = Searcher.FindSignature(program, Signature);
                if (ptr != IntPtr.Zero) {
                    BasePtr = ptr;
                    int offset = 0;
                    if (AutoDeref != AutoDeref.None) {
                        offset = program.Read<int>(BasePtr + Offset) + 4;
                    }
                    return BasePtr + Offset + offset;
                }
            }
            return IntPtr.Zero;
        }
    }
    public class FindOffset : IFindPointer {
        private int[] Offsets;
        public PointerVersion Version { get { return PointerVersion.V1; } }

        public FindOffset(params int[] offsets) {
            Offsets = offsets;
        }

        public bool FoundBaseAddress() {
            return false;
        }
        public IntPtr FindPointer(Process program, string asmName) {
            IntPtr startAddress;
            if (string.IsNullOrEmpty(asmName)) {
                startAddress = program.MainModule.BaseAddress;
            } else {
                Tuple<IntPtr, IntPtr> range = ProgramPointer.GetAddressRange(program, asmName);
                startAddress = range.Item1;
            }

            if (MemoryReader.is64Bit) {
                return (IntPtr)program.Read<ulong>(startAddress, Offsets);
            } else {
                return (IntPtr)program.Read<uint>(startAddress, Offsets);
            }
        }
    }
}