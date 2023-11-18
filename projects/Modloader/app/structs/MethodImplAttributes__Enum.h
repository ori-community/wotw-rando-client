#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MethodImplAttributes__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MethodImplAttributes__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_MethodImplAttributes__Enum_DEFINED)
#define IL2CPP_STRUCT_MethodImplAttributes__Enum_DEFINED
enum class MethodImplAttributes__Enum : int32_t {
    CodeTypeMask = 0x00000003,
    IL = 0x00000000,
    Native = 0x00000001,
    OPTIL = 0x00000002,
    Runtime = 0x00000003,
    ManagedMask = 0x00000004,
    Unmanaged = 0x00000004,
    Managed = 0x00000000,
    ForwardRef = 0x00000010,
    PreserveSig = 0x00000080,
    InternalCall = 0x00001000,
    Synchronized = 0x00000020,
    NoInlining = 0x00000008,
    AggressiveInlining = 0x00000100,
    NoOptimization = 0x00000040,
    MaxMethodImplVal = 0x0000ffff,
};
#endif
#if !defined(IL2CPP_STRUCT_MethodImplAttributes__Enum_FWDDECL)
#define IL2CPP_STRUCT_MethodImplAttributes__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_MethodImplAttributes__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_MethodImplAttributes__Enum_DEFINED) && !defined(IL2CPP_STRUCT_MethodImplAttributes__Enum_FWDDECL)
#include <Modloader/app/structs/MethodImplAttributes__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MethodImplAttributes__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
