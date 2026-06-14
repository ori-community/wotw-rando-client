#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EventSystem_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EventSystem_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventSystem_DEFINED)
#include <Modloader/app/structs/EventSystem__Fields.h>
#if defined(IL2CPP_STRUCT_EventSystem__Fields_DEFINED)
#define IL2CPP_STRUCT_EventSystem_DEFINED
struct EventSystem__Class;
struct EventSystem {
    struct EventSystem__Class* klass;
    MonitorData* monitor;
    struct EventSystem__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EventSystem_FWDDECL)
#define IL2CPP_STRUCT_EventSystem_FWDDECL
#include <Modloader/app/structs/EventSystem__Class.h>
#endif
#undef IL2CPP_STRUCT_EventSystem_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventSystem_DEFINED) && !defined(IL2CPP_STRUCT_EventSystem_FWDDECL)
#include <Modloader/app/structs/EventSystem.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EventSystem.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
