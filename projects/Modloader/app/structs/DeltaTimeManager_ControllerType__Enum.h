#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DeltaTimeManager_ControllerType__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DeltaTimeManager_ControllerType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_DeltaTimeManager_ControllerType__Enum_DEFINED)
#define IL2CPP_STRUCT_DeltaTimeManager_ControllerType__Enum_DEFINED
enum class DeltaTimeManager_ControllerType__Enum : int32_t {
    None = 0x00000000,
    Direct = 0x00000001,
    AverageBoth = 0x00000002,
    Fixed30 = 0x00000003,
    Fixed60 = 0x00000004,
    Fixed120 = 0x00000005,
    Fixed240 = 0x00000006,
    Paused = 0x00000007,
};
#endif
#if !defined(IL2CPP_STRUCT_DeltaTimeManager_ControllerType__Enum_FWDDECL)
#define IL2CPP_STRUCT_DeltaTimeManager_ControllerType__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_DeltaTimeManager_ControllerType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_DeltaTimeManager_ControllerType__Enum_DEFINED) && !defined(IL2CPP_STRUCT_DeltaTimeManager_ControllerType__Enum_FWDDECL)
#include <Modloader/app/structs/DeltaTimeManager_ControllerType__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DeltaTimeManager_ControllerType__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
