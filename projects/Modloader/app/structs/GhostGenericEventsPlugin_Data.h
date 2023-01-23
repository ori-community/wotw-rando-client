#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GhostGenericEventsPlugin_Data_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GhostGenericEventsPlugin_Data_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostGenericEventsPlugin_Data_DEFINED)
#include <Modloader/app/structs/GhostGenericEventsPlugin_Data_ActionType__Enum.h>
#if defined(IL2CPP_STRUCT_GhostGenericEventsPlugin_Data_ActionType__Enum_DEFINED)
#define IL2CPP_STRUCT_GhostGenericEventsPlugin_Data_DEFINED
struct Byte__Array;
struct GhostGenericEventsPlugin_Data {
    GhostGenericEventsPlugin_Data_ActionType__Enum Action;

    int32_t PuppetId;
    int32_t RecordingId;
    int32_t PropertyId;
    struct Byte__Array* Value;
    bool _Executed_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GhostGenericEventsPlugin_Data_FWDDECL)
#define IL2CPP_STRUCT_GhostGenericEventsPlugin_Data_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#endif
#undef IL2CPP_STRUCT_GhostGenericEventsPlugin_Data_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostGenericEventsPlugin_Data_DEFINED) && !defined(IL2CPP_STRUCT_GhostGenericEventsPlugin_Data_FWDDECL)
#include <Modloader/app/structs/GhostGenericEventsPlugin_Data.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GhostGenericEventsPlugin_Data.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
