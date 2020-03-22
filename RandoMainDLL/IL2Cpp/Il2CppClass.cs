using System;
namespace RandoMainDLL.Il2Cpp {
    public enum SearchSectionType {
        Exec,
        Data,
        Bss
    }
    public struct SearchSection {
        public ulong offset;
        public ulong offsetEnd;
        public ulong address;
        public ulong addressEnd;
    }
    public struct DosHeader {
        public ushort Magic;
        public ushort Cblp;
        public ushort Cp;
        public ushort Crlc;
        public ushort Cparhdr;
        public ushort Minalloc;
        public ushort Maxalloc;
        public ushort Ss;
        public ushort Sp;
        public ushort Csum;
        public ushort Ip;
        public ushort Cs;
        public ushort Lfarlc;
        public ushort Ovno;
        public UShort4 Res;
        public ushort Oemid;
        public ushort Oeminfo;
        public UShort10 Res2;
        public uint Lfanew;
    }
    public struct UShort4 {
        public ushort A;
        public ushort B;
        public ushort C;
        public ushort D;
    }
    public struct UShort10 {
        public ushort A;
        public ushort B;
        public ushort C;
        public ushort D;
        public ushort E;
        public ushort F;
        public ushort G;
        public ushort H;
        public ushort I;
        public ushort J;
    }
    public struct FileHeader {
        public ushort Machine;
        public ushort NumberOfSections;
        public uint TimeDateStamp;
        public uint PointerToSymbolTable;
        public uint NumberOfSymbols;
        public ushort SizeOfOptionalHeader;
        public ushort Characteristics;
    }
    public struct OptionalHeader {
        public ushort Magic;
        public byte MajorLinkerVersion;
        public byte MinorLinkerVersion;
        public uint SizeOfCode;
        public uint SizeOfInitializedData;
        public uint SizeOfUninitializedData;
        public uint AddressOfEntryPoint;
        public uint BaseOfCode;
        public uint BaseOfData;
        public uint ImageBase;
        public uint SectionAlignment;
        public uint FileAlignment;
        public ushort MajorOperatingSystemVersion;
        public ushort MinorOperatingSystemVersion;
        public ushort MajorImageVersion;
        public ushort MinorImageVersion;
        public ushort MajorSubsystemVersion;
        public ushort MinorSubsystemVersion;
        public uint Win32VersionValue;
        public uint SizeOfImage;
        public uint SizeOfHeaders;
        public uint CheckSum;
        public ushort Subsystem;
        public ushort DllCharacteristics;
        public uint SizeOfStackReserve;
        public uint SizeOfStackCommit;
        public uint SizeOfHeapReserve;
        public uint SizeOfHeapCommit;
        public uint LoaderFlags;
        public uint NumberOfRvaAndSizes;
    }
    public struct OptionalHeader64 {
        public ushort Magic;
        public byte MajorLinkerVersion;
        public byte MinorLinkerVersion;
        public uint SizeOfCode;
        public uint SizeOfInitializedData;
        public uint SizeOfUninitializedData;
        public uint AddressOfEntryPoint;
        public uint BaseOfCode;
        public ulong ImageBase;
        public uint SectionAlignment;
        public uint FileAlignment;
        public ushort MajorOperatingSystemVersion;
        public ushort MinorOperatingSystemVersion;
        public ushort MajorImageVersion;
        public ushort MinorImageVersion;
        public ushort MajorSubsystemVersion;
        public ushort MinorSubsystemVersion;
        public uint Win32VersionValue;
        public uint SizeOfImage;
        public uint SizeOfHeaders;
        public uint CheckSum;
        public ushort Subsystem;
        public ushort DllCharacteristics;
        public ulong SizeOfStackReserve;
        public ulong SizeOfStackCommit;
        public ulong SizeOfHeapReserve;
        public ulong SizeOfHeapCommit;
        public uint LoaderFlags;
        public uint NumberOfRvaAndSizes;
    }
    public struct SectionHeader {
        public Byte8 Name;
        public uint VirtualSize;
        public uint VirtualAddress;
        public uint SizeOfRawData;
        public uint PointerToRawData;
        public uint PointerToRelocations;
        public uint PointerToLinenumbers;
        public ushort NumberOfRelocations;
        public ushort NumberOfLinenumbers;
        public uint Characteristics;
    }
    public struct Byte8 {
        public byte A;
        public byte B;
        public byte C;
        public byte D;
        public byte E;
        public byte F;
        public byte G;
        public byte H;
    }
    public struct Il2CppCodeRegistration {
        public long methodPointersCount;
        public ulong methodPointers;
        public long reversePInvokeWrapperCount;
        public ulong reversePInvokeWrappers;
        public long genericMethodPointersCount;
        public ulong genericMethodPointers;
        public long invokerPointersCount;
        public ulong invokerPointers;
        public long customAttributeCount;
        public ulong customAttributeGenerators;
        public long unresolvedVirtualCallCount;
        public ulong unresolvedVirtualCallPointers;
        public ulong interopDataCount;
        public ulong interopData;
    }
    public struct Il2CppMetadataRegistration {
        public long genericClassesCount;
        public ulong genericClasses;
        public long genericInstsCount;
        public ulong genericInsts;
        public long genericMethodTableCount;
        public ulong genericMethodTable;
        public long typesCount;
        public ulong types;
        public long methodSpecsCount;
        public ulong methodSpecs;
        public long fieldOffsetsCount;
        public ulong fieldOffsets;
        public long typeDefinitionsSizesCount;
        public ulong typeDefinitionsSizes;
        public ulong metadataUsagesCount;
        public ulong metadataUsages;
    }
    public enum Il2CppTypeEnum {
        IL2CPP_TYPE_END = 0x00,       /* End of List */
        IL2CPP_TYPE_VOID = 0x01,
        IL2CPP_TYPE_BOOLEAN = 0x02,
        IL2CPP_TYPE_CHAR = 0x03,
        IL2CPP_TYPE_I1 = 0x04,
        IL2CPP_TYPE_U1 = 0x05,
        IL2CPP_TYPE_I2 = 0x06,
        IL2CPP_TYPE_U2 = 0x07,
        IL2CPP_TYPE_I4 = 0x08,
        IL2CPP_TYPE_U4 = 0x09,
        IL2CPP_TYPE_I8 = 0x0a,
        IL2CPP_TYPE_U8 = 0x0b,
        IL2CPP_TYPE_R4 = 0x0c,
        IL2CPP_TYPE_R8 = 0x0d,
        IL2CPP_TYPE_STRING = 0x0e,
        IL2CPP_TYPE_PTR = 0x0f,       /* arg: <type> token */
        IL2CPP_TYPE_BYREF = 0x10,       /* arg: <type> token */
        IL2CPP_TYPE_VALUETYPE = 0x11,       /* arg: <type> token */
        IL2CPP_TYPE_CLASS = 0x12,       /* arg: <type> token */
        IL2CPP_TYPE_VAR = 0x13,       /* Generic parameter in a generic type definition, represented as number (compressed unsigned integer) number */
        IL2CPP_TYPE_ARRAY = 0x14,       /* type, rank, boundsCount, bound1, loCount, lo1 */
        IL2CPP_TYPE_GENERICINST = 0x15,     /* <type> <type-arg-count> <type-1> \x{2026} <type-n> */
        IL2CPP_TYPE_TYPEDBYREF = 0x16,
        IL2CPP_TYPE_I = 0x18,
        IL2CPP_TYPE_U = 0x19,
        IL2CPP_TYPE_FNPTR = 0x1b,        /* arg: full method signature */
        IL2CPP_TYPE_OBJECT = 0x1c,
        IL2CPP_TYPE_SZARRAY = 0x1d,       /* 0-based one-dim-array */
        IL2CPP_TYPE_MVAR = 0x1e,       /* Generic parameter in a generic method definition, represented as number (compressed unsigned integer)  */
        IL2CPP_TYPE_CMOD_REQD = 0x1f,       /* arg: typedef or typeref token */
        IL2CPP_TYPE_CMOD_OPT = 0x20,       /* optional arg: typedef or typref token */
        IL2CPP_TYPE_INTERNAL = 0x21,       /* CLR internal type */
        IL2CPP_TYPE_MODIFIER = 0x40,       /* Or with the following types */
        IL2CPP_TYPE_SENTINEL = 0x41,       /* Sentinel for varargs method signature */
        IL2CPP_TYPE_PINNED = 0x45,       /* Local var that points to pinned object */
        IL2CPP_TYPE_ENUM = 0x55        /* an enumeration */
    }
    public struct Il2CppType {
        public ulong datapoint;
        public uint bits;
        public Union data { get; set; }
        public uint attrs { get; set; }
        public Il2CppTypeEnum type { get; set; }
        public uint num_mods { get; set; }
        public uint byref { get; set; }
        public uint pinned { get; set; }

        public void Init() {
            attrs = bits & 0xffff;
            type = (Il2CppTypeEnum)((bits >> 16) & 0xff);
            num_mods = (bits >> 24) & 0x3f;
            byref = (bits >> 30) & 1;
            pinned = bits >> 31;
            data = new Union { dummy = datapoint };
        }

        public struct Union {
            public ulong dummy;
            /// <summary>
            /// for VALUETYPE and CLASS
            /// </summary>
            public long klassIndex => (long)dummy;
            /// <summary>
            /// for PTR and SZARRAY
            /// </summary>
            public ulong type => dummy;
            /// <summary>
            /// for ARRAY
            /// </summary>
            public ulong array => dummy;
            /// <summary>
            /// for VAR and MVAR
            /// </summary>
            public long genericParameterIndex => (long)dummy;
            /// <summary>
            /// for GENERICINST
            /// </summary>
            public ulong generic_class => dummy;
        }
    }
    public struct Il2CppGenericClass {
        public long typeDefinitionIndex;    /* the generic type definition */
        public Il2CppGenericContext context;   /* a context that contains the type instantiation doesn't contain any method instantiation */
        public ulong cached_class; /* if present, the Il2CppClass corresponding to the instantiation.  */
    }
    public struct Il2CppGenericContext {
        /* The instantiation corresponding to the class generic parameters */
        public ulong class_inst;
        /* The instantiation corresponding to the method generic parameters */
        public ulong method_inst;
    }
    public struct Il2CppGenericInst {
        public long type_argc;
        public ulong type_argv;
    }
    public struct Il2CppArrayType {
        public ulong etype;
        public byte rank;
        public byte numsizes;
        public byte numlobounds;
        public ulong sizes;
        public ulong lobounds;
    }
    public struct Il2CppGenericMethodFunctionsDefinitions {
        public int genericMethodIndex;
        public Il2CppGenericMethodIndices indices;
    }
    public struct Il2CppGenericMethodIndices {
        public int methodIndex;
        public int invokerIndex;
    };
    public struct Il2CppMethodSpec {
        public int methodDefinitionIndex;
        public int classIndexIndex;
        public int methodIndexIndex;
    };
}