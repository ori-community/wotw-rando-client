#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CallingConvention__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CallingConvention__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_CallingConvention__Enum_DEFINED)
#define IL2CPP_STRUCT_CallingConvention__Enum_DEFINED
enum class CallingConvention__Enum : int32_t {
    Winapi = 0x00000001,
    Cdecl = 0x00000002,
    StdCall = 0x00000003,
    ThisCall = 0x00000004,
    FastCall = 0x00000005,
};
#endif
#if !defined(IL2CPP_STRUCT_CallingConvention__Enum_FWDDECL)
#define IL2CPP_STRUCT_CallingConvention__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_CallingConvention__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_CallingConvention__Enum_DEFINED) && !defined(IL2CPP_STRUCT_CallingConvention__Enum_FWDDECL)
#include <Modloader/app/structs/CallingConvention__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CallingConvention__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
