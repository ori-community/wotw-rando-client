#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MethodAttributes__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MethodAttributes__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_MethodAttributes__Enum_DEFINED)
#define IL2CPP_STRUCT_MethodAttributes__Enum_DEFINED
enum class MethodAttributes__Enum : int32_t {
    MemberAccessMask = 0x00000007,
    PrivateScope = 0x00000000,
    Private = 0x00000001,
    FamANDAssem = 0x00000002,
    Assembly = 0x00000003,
    Family = 0x00000004,
    FamORAssem = 0x00000005,
    Public = 0x00000006,
    Static = 0x00000010,
    Final = 0x00000020,
    Virtual = 0x00000040,
    HideBySig = 0x00000080,
    CheckAccessOnOverride = 0x00000200,
    VtableLayoutMask = 0x00000100,
    ReuseSlot = 0x00000000,
    NewSlot = 0x00000100,
    Abstract = 0x00000400,
    SpecialName = 0x00000800,
    PinvokeImpl = 0x00002000,
    UnmanagedExport = 0x00000008,
    RTSpecialName = 0x00001000,
    ReservedMask = 0x0000d000,
    HasSecurity = 0x00004000,
    RequireSecObject = 0x00008000,
};
#endif
#if !defined(IL2CPP_STRUCT_MethodAttributes__Enum_FWDDECL)
#define IL2CPP_STRUCT_MethodAttributes__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_MethodAttributes__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_MethodAttributes__Enum_DEFINED) && !defined(IL2CPP_STRUCT_MethodAttributes__Enum_FWDDECL)
#include <Modloader/app/structs/MethodAttributes__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MethodAttributes__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
