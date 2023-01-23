#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WwiseEventSystem_EventStatus__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WwiseEventSystem_EventStatus__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_WwiseEventSystem_EventStatus__Enum_DEFINED)
#define IL2CPP_STRUCT_WwiseEventSystem_EventStatus__Enum_DEFINED
enum class WwiseEventSystem_EventStatus__Enum : int32_t {
    None = 0x00000000,
    Idle = 0x00000001,
    Playing = 0x00000002,
    Paused = 0x00000003,
    Stopped = 0x00000004,
    BreakApplied = 0x00000005,
    Finished = 0x00000006,
};
#endif
#if !defined(IL2CPP_STRUCT_WwiseEventSystem_EventStatus__Enum_FWDDECL)
#define IL2CPP_STRUCT_WwiseEventSystem_EventStatus__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_WwiseEventSystem_EventStatus__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_WwiseEventSystem_EventStatus__Enum_DEFINED) && !defined(IL2CPP_STRUCT_WwiseEventSystem_EventStatus__Enum_FWDDECL)
#include <Modloader/app/structs/WwiseEventSystem_EventStatus__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WwiseEventSystem_EventStatus__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
