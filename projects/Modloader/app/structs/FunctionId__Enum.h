#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FunctionId__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FunctionId__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_FunctionId__Enum_DEFINED)
#define IL2CPP_STRUCT_FunctionId__Enum_DEFINED
enum class FunctionId__Enum : int32_t {
    none = -1,
    Ascii = 0x00000000,
    Char = 0x00000001,
    Charindex = 0x00000002,
    Difference = 0x00000003,
    Len = 0x00000004,
    Lower = 0x00000005,
    LTrim = 0x00000006,
    Patindex = 0x00000007,
    Replicate = 0x00000008,
    Reverse = 0x00000009,
    Right = 0x0000000a,
    RTrim = 0x0000000b,
    Soundex = 0x0000000c,
    Space = 0x0000000d,
    Str = 0x0000000e,
    Stuff = 0x0000000f,
    Substring = 0x00000010,
    Upper = 0x00000011,
    IsNull = 0x00000012,
    Iif = 0x00000013,
    Convert = 0x00000014,
    cInt = 0x00000015,
    cBool = 0x00000016,
    cDate = 0x00000017,
    cDbl = 0x00000018,
    cStr = 0x00000019,
    Abs = 0x0000001a,
    Acos = 0x0000001b,
    In = 0x0000001c,
    Trim = 0x0000001d,
    Sum = 0x0000001e,
    Avg = 0x0000001f,
    Min = 0x00000020,
    Max = 0x00000021,
    Count = 0x00000022,
    StDev = 0x00000023,
    Var = 0x00000025,
    DateTimeOffset = 0x00000026,
};
#endif
#if !defined(IL2CPP_STRUCT_FunctionId__Enum_FWDDECL)
#define IL2CPP_STRUCT_FunctionId__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_FunctionId__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_FunctionId__Enum_DEFINED) && !defined(IL2CPP_STRUCT_FunctionId__Enum_FWDDECL)
#include <Modloader/app/structs/FunctionId__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FunctionId__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
