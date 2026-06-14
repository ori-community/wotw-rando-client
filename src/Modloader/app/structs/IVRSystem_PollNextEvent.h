#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IVRSystem_PollNextEvent_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IVRSystem_PollNextEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_IVRSystem_PollNextEvent_DEFINED)
#include <Modloader/app/structs/IVRSystem_PollNextEvent__Fields.h>
#if defined(IL2CPP_STRUCT_IVRSystem_PollNextEvent__Fields_DEFINED)
#define IL2CPP_STRUCT_IVRSystem_PollNextEvent_DEFINED
struct IVRSystem_PollNextEvent__Class;
struct IVRSystem_PollNextEvent {
    struct IVRSystem_PollNextEvent__Class* klass;
    MonitorData* monitor;
    struct IVRSystem_PollNextEvent__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IVRSystem_PollNextEvent_FWDDECL)
#define IL2CPP_STRUCT_IVRSystem_PollNextEvent_FWDDECL
#include <Modloader/app/structs/IVRSystem_PollNextEvent__Class.h>
#endif
#undef IL2CPP_STRUCT_IVRSystem_PollNextEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_IVRSystem_PollNextEvent_DEFINED) && !defined(IL2CPP_STRUCT_IVRSystem_PollNextEvent_FWDDECL)
#include <Modloader/app/structs/IVRSystem_PollNextEvent.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IVRSystem_PollNextEvent.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
