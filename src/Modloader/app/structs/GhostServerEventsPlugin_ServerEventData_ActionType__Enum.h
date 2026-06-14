#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GhostServerEventsPlugin_ServerEventData_ActionType__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GhostServerEventsPlugin_ServerEventData_ActionType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostServerEventsPlugin_ServerEventData_ActionType__Enum_DEFINED)
#define IL2CPP_STRUCT_GhostServerEventsPlugin_ServerEventData_ActionType__Enum_DEFINED
enum class GhostServerEventsPlugin_ServerEventData_ActionType__Enum : uint8_t {
    ServerInstantiate = 0x00,
    ServerSetTransform = 0x01,
    ServerDestroy = 0x02,
    ServerBrainTrigger = 0x03,
};
#endif
#if !defined(IL2CPP_STRUCT_GhostServerEventsPlugin_ServerEventData_ActionType__Enum_FWDDECL)
#define IL2CPP_STRUCT_GhostServerEventsPlugin_ServerEventData_ActionType__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_GhostServerEventsPlugin_ServerEventData_ActionType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostServerEventsPlugin_ServerEventData_ActionType__Enum_DEFINED) && !defined(IL2CPP_STRUCT_GhostServerEventsPlugin_ServerEventData_ActionType__Enum_FWDDECL)
#include <Modloader/app/structs/GhostServerEventsPlugin_ServerEventData_ActionType__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GhostServerEventsPlugin_ServerEventData_ActionType__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
