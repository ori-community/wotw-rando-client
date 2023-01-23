#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StaticEventDescriptor_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StaticEventDescriptor_INITIALIZING
#if !defined(IL2CPP_STRUCT_StaticEventDescriptor_DEFINED)
#include <Modloader/app/structs/StaticEventDescriptor__Fields.h>
#if defined(IL2CPP_STRUCT_StaticEventDescriptor__Fields_DEFINED)
#define IL2CPP_STRUCT_StaticEventDescriptor_DEFINED
struct StaticEventDescriptor__Class;
struct StaticEventDescriptor {
    struct StaticEventDescriptor__Class* klass;
    MonitorData* monitor;
    struct StaticEventDescriptor__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StaticEventDescriptor_FWDDECL)
#define IL2CPP_STRUCT_StaticEventDescriptor_FWDDECL
#include <Modloader/app/structs/StaticEventDescriptor__Class.h>
#endif
#undef IL2CPP_STRUCT_StaticEventDescriptor_INITIALIZING
#if !defined(IL2CPP_STRUCT_StaticEventDescriptor_DEFINED) && !defined(IL2CPP_STRUCT_StaticEventDescriptor_FWDDECL)
#include <Modloader/app/structs/StaticEventDescriptor.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StaticEventDescriptor.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
