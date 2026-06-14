#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LoadingBoostController_BoostModeLevel__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LoadingBoostController_BoostModeLevel__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_LoadingBoostController_BoostModeLevel__Enum_DEFINED)
#define IL2CPP_STRUCT_LoadingBoostController_BoostModeLevel__Enum_DEFINED
enum class LoadingBoostController_BoostModeLevel__Enum : int32_t {
    Boot = 0x00000000,
    ShaderPrewarm = 0x00000001,
    Off = 0x00000002,
    On = 0x00000003,
    Critical = 0x00000004,
    OffLow = 0x00000005,
    Editor = 0x00000006,
};
#endif
#if !defined(IL2CPP_STRUCT_LoadingBoostController_BoostModeLevel__Enum_FWDDECL)
#define IL2CPP_STRUCT_LoadingBoostController_BoostModeLevel__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_LoadingBoostController_BoostModeLevel__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_LoadingBoostController_BoostModeLevel__Enum_DEFINED) && !defined(IL2CPP_STRUCT_LoadingBoostController_BoostModeLevel__Enum_FWDDECL)
#include <Modloader/app/structs/LoadingBoostController_BoostModeLevel__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LoadingBoostController_BoostModeLevel__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
