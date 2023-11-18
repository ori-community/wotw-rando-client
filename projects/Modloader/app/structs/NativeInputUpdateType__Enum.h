#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NativeInputUpdateType__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NativeInputUpdateType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_NativeInputUpdateType__Enum_DEFINED)
#define IL2CPP_STRUCT_NativeInputUpdateType__Enum_DEFINED
enum class NativeInputUpdateType__Enum : int32_t {
    Dynamic = 0x00000001,
    Fixed = 0x00000002,
    BeforeRender = 0x00000004,
    Editor = 0x00000008,
    IgnoreFocus = -2147483648,
};
#endif
#if !defined(IL2CPP_STRUCT_NativeInputUpdateType__Enum_FWDDECL)
#define IL2CPP_STRUCT_NativeInputUpdateType__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_NativeInputUpdateType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_NativeInputUpdateType__Enum_DEFINED) && !defined(IL2CPP_STRUCT_NativeInputUpdateType__Enum_FWDDECL)
#include <Modloader/app/structs/NativeInputUpdateType__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NativeInputUpdateType__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
