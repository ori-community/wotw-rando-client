#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EventDataAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EventDataAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventDataAttribute_DEFINED)
#include <Modloader/app/structs/EventDataAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_EventDataAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_EventDataAttribute_DEFINED
struct EventDataAttribute__Class;
struct EventDataAttribute {
    struct EventDataAttribute__Class* klass;
    MonitorData* monitor;
    struct EventDataAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EventDataAttribute_FWDDECL)
#define IL2CPP_STRUCT_EventDataAttribute_FWDDECL
#include <Modloader/app/structs/EventDataAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_EventDataAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventDataAttribute_DEFINED) && !defined(IL2CPP_STRUCT_EventDataAttribute_FWDDECL)
#include <Modloader/app/structs/EventDataAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EventDataAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
