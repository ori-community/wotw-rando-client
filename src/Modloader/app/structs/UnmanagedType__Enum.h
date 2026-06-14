#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UnmanagedType__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UnmanagedType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnmanagedType__Enum_DEFINED)
#define IL2CPP_STRUCT_UnmanagedType__Enum_DEFINED
enum class UnmanagedType__Enum : int32_t {
    Bool = 0x00000002,
    I1 = 0x00000003,
    U1 = 0x00000004,
    I2 = 0x00000005,
    U2 = 0x00000006,
    I4 = 0x00000007,
    U4 = 0x00000008,
    I8 = 0x00000009,
    U8 = 0x0000000a,
    R4 = 0x0000000b,
    R8 = 0x0000000c,
    Currency = 0x0000000f,
    BStr = 0x00000013,
    LPStr = 0x00000014,
    LPWStr = 0x00000015,
    LPTStr = 0x00000016,
    ByValTStr = 0x00000017,
    IUnknown = 0x00000019,
    IDispatch = 0x0000001a,
    Struct = 0x0000001b,
    Interface = 0x0000001c,
    SafeArray = 0x0000001d,
    ByValArray = 0x0000001e,
    SysInt = 0x0000001f,
    SysUInt = 0x00000020,
    VBByRefStr = 0x00000022,
    AnsiBStr = 0x00000023,
    TBStr = 0x00000024,
    VariantBool = 0x00000025,
    FunctionPtr = 0x00000026,
    AsAny = 0x00000028,
    LPArray = 0x0000002a,
    LPStruct = 0x0000002b,
    CustomMarshaler = 0x0000002c,
    Error = 0x0000002d,
    IInspectable = 0x0000002e,
    HString = 0x0000002f,
    LPUTF8Str = 0x00000030,
};
#endif
#if !defined(IL2CPP_STRUCT_UnmanagedType__Enum_FWDDECL)
#define IL2CPP_STRUCT_UnmanagedType__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_UnmanagedType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnmanagedType__Enum_DEFINED) && !defined(IL2CPP_STRUCT_UnmanagedType__Enum_FWDDECL)
#include <Modloader/app/structs/UnmanagedType__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UnmanagedType__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
