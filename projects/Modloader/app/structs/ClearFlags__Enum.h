#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ClearFlags__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ClearFlags__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_ClearFlags__Enum_DEFINED)
#define IL2CPP_STRUCT_ClearFlags__Enum_DEFINED
enum class ClearFlags__Enum : int32_t {
    None = 0x00000000,
    Color = 0x00000001,
    Depth = 0x00000002,
    Stencil = 0x00000004,
    Fast = 0x00000008,
    DepthStencil = 0x00000006,
    All = 0x00000007,
};
#endif
#if !defined(IL2CPP_STRUCT_ClearFlags__Enum_FWDDECL)
#define IL2CPP_STRUCT_ClearFlags__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_ClearFlags__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_ClearFlags__Enum_DEFINED) && !defined(IL2CPP_STRUCT_ClearFlags__Enum_FWDDECL)
#include <Modloader/app/structs/ClearFlags__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ClearFlags__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
