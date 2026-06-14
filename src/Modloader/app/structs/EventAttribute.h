#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EventAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EventAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventAttribute_DEFINED)
#include <Modloader/app/structs/EventAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_EventAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_EventAttribute_DEFINED
struct EventAttribute__Class;
struct EventAttribute {
    struct EventAttribute__Class* klass;
    MonitorData* monitor;
    struct EventAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EventAttribute_FWDDECL)
#define IL2CPP_STRUCT_EventAttribute_FWDDECL
#include <Modloader/app/structs/EventAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_EventAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventAttribute_DEFINED) && !defined(IL2CPP_STRUCT_EventAttribute_FWDDECL)
#include <Modloader/app/structs/EventAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EventAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
