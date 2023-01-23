#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WwiseObjectType__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WwiseObjectType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_WwiseObjectType__Enum_DEFINED)
#define IL2CPP_STRUCT_WwiseObjectType__Enum_DEFINED
enum class WwiseObjectType__Enum : int32_t {
    None = 0x00000000,
    AuxBus = 0x00000001,
    Bus = 0x00000002,
    Event = 0x00000003,
    Folder = 0x00000004,
    PhysicalFolder = 0x00000005,
    Project = 0x00000006,
    Soundbank = 0x00000007,
    State = 0x00000008,
    StateGroup = 0x00000009,
    Switch = 0x0000000a,
    SwitchGroup = 0x0000000b,
    WorkUnit = 0x0000000c,
    GameParameter = 0x0000000d,
    Trigger = 0x0000000e,
    AcousticTexture = 0x0000000f,
};
#endif
#if !defined(IL2CPP_STRUCT_WwiseObjectType__Enum_FWDDECL)
#define IL2CPP_STRUCT_WwiseObjectType__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_WwiseObjectType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_WwiseObjectType__Enum_DEFINED) && !defined(IL2CPP_STRUCT_WwiseObjectType__Enum_FWDDECL)
#include <Modloader/app/structs/WwiseObjectType__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WwiseObjectType__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
