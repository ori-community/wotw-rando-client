#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EventSourceAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EventSourceAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventSourceAttribute_DEFINED)
#include <Modloader/app/structs/EventSourceAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_EventSourceAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_EventSourceAttribute_DEFINED
struct EventSourceAttribute__Class;
struct EventSourceAttribute {
    struct EventSourceAttribute__Class* klass;
    MonitorData* monitor;
    struct EventSourceAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EventSourceAttribute_FWDDECL)
#define IL2CPP_STRUCT_EventSourceAttribute_FWDDECL
#include <Modloader/app/structs/EventSourceAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_EventSourceAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventSourceAttribute_DEFINED) && !defined(IL2CPP_STRUCT_EventSourceAttribute_FWDDECL)
#include <Modloader/app/structs/EventSourceAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EventSourceAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
