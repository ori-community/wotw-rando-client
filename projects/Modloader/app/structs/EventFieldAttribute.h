#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EventFieldAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EventFieldAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventFieldAttribute_DEFINED)
#include <Modloader/app/structs/EventFieldAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_EventFieldAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_EventFieldAttribute_DEFINED
struct EventFieldAttribute__Class;
struct EventFieldAttribute {
    struct EventFieldAttribute__Class* klass;
    MonitorData* monitor;
    struct EventFieldAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EventFieldAttribute_FWDDECL)
#define IL2CPP_STRUCT_EventFieldAttribute_FWDDECL
#include <Modloader/app/structs/EventFieldAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_EventFieldAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventFieldAttribute_DEFINED) && !defined(IL2CPP_STRUCT_EventFieldAttribute_FWDDECL)
#include <Modloader/app/structs/EventFieldAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EventFieldAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
