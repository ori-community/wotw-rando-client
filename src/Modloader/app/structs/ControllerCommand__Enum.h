#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ControllerCommand__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ControllerCommand__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_ControllerCommand__Enum_DEFINED)
#define IL2CPP_STRUCT_ControllerCommand__Enum_DEFINED
enum class ControllerCommand__Enum : int32_t {
    Update = 0x00000000,
    SendManifest = -1,
    Enable = -2,
    Disable = -3,
};
#endif
#if !defined(IL2CPP_STRUCT_ControllerCommand__Enum_FWDDECL)
#define IL2CPP_STRUCT_ControllerCommand__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_ControllerCommand__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_ControllerCommand__Enum_DEFINED) && !defined(IL2CPP_STRUCT_ControllerCommand__Enum_FWDDECL)
#include <Modloader/app/structs/ControllerCommand__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ControllerCommand__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
