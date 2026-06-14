#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PhysicalSystemState_PhysicalSystemStateType__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PhysicalSystemState_PhysicalSystemStateType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_PhysicalSystemState_PhysicalSystemStateType__Enum_DEFINED)
#define IL2CPP_STRUCT_PhysicalSystemState_PhysicalSystemStateType__Enum_DEFINED
enum class PhysicalSystemState_PhysicalSystemStateType__Enum : int32_t {
    originalState = 0x00000000,
    lastState = 0x00000001,
    restingState = 0x00000002,
    dynamicSettingsState = 0x00000003,
};
#endif
#if !defined(IL2CPP_STRUCT_PhysicalSystemState_PhysicalSystemStateType__Enum_FWDDECL)
#define IL2CPP_STRUCT_PhysicalSystemState_PhysicalSystemStateType__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_PhysicalSystemState_PhysicalSystemStateType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_PhysicalSystemState_PhysicalSystemStateType__Enum_DEFINED) && !defined(IL2CPP_STRUCT_PhysicalSystemState_PhysicalSystemStateType__Enum_FWDDECL)
#include <Modloader/app/structs/PhysicalSystemState_PhysicalSystemStateType__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PhysicalSystemState_PhysicalSystemStateType__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
