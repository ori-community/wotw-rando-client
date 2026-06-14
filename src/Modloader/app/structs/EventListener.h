#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EventListener_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EventListener_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventListener_DEFINED)
#include <Modloader/app/structs/EventListener__Fields.h>
#if defined(IL2CPP_STRUCT_EventListener__Fields_DEFINED)
#define IL2CPP_STRUCT_EventListener_DEFINED
struct EventListener__Class;
struct EventListener {
    struct EventListener__Class* klass;
    MonitorData* monitor;
    struct EventListener__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EventListener_FWDDECL)
#define IL2CPP_STRUCT_EventListener_FWDDECL
#include <Modloader/app/structs/EventListener__Class.h>
#endif
#undef IL2CPP_STRUCT_EventListener_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventListener_DEFINED) && !defined(IL2CPP_STRUCT_EventListener_FWDDECL)
#include <Modloader/app/structs/EventListener.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EventListener.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
