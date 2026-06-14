#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WwiseEventSystem_EventState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WwiseEventSystem_EventState_INITIALIZING
#if !defined(IL2CPP_STRUCT_WwiseEventSystem_EventState_DEFINED)
#include <Modloader/app/structs/WwiseEventSystem_EventState__Fields.h>
#if defined(IL2CPP_STRUCT_WwiseEventSystem_EventState__Fields_DEFINED)
#define IL2CPP_STRUCT_WwiseEventSystem_EventState_DEFINED
struct WwiseEventSystem_EventState__Class;
struct WwiseEventSystem_EventState {
    struct WwiseEventSystem_EventState__Class* klass;
    MonitorData* monitor;
    struct WwiseEventSystem_EventState__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WwiseEventSystem_EventState_FWDDECL)
#define IL2CPP_STRUCT_WwiseEventSystem_EventState_FWDDECL
#include <Modloader/app/structs/WwiseEventSystem_EventState__Class.h>
#endif
#undef IL2CPP_STRUCT_WwiseEventSystem_EventState_INITIALIZING
#if !defined(IL2CPP_STRUCT_WwiseEventSystem_EventState_DEFINED) && !defined(IL2CPP_STRUCT_WwiseEventSystem_EventState_FWDDECL)
#include <Modloader/app/structs/WwiseEventSystem_EventState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WwiseEventSystem_EventState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
