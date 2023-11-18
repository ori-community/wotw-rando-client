#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EventDescriptor__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EventDescriptor__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventDescriptor__Boxed_DEFINED)
#include <Modloader/app/structs/EventDescriptor.h>
#if defined(IL2CPP_STRUCT_EventDescriptor_DEFINED)
#define IL2CPP_STRUCT_EventDescriptor__Boxed_DEFINED
struct EventDescriptor__Class;
struct EventDescriptor__Boxed {
    struct EventDescriptor__Class* klass;
    MonitorData* monitor;
    struct EventDescriptor fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EventDescriptor__Boxed_FWDDECL)
#define IL2CPP_STRUCT_EventDescriptor__Boxed_FWDDECL
#include <Modloader/app/structs/EventDescriptor__Class.h>
#endif
#undef IL2CPP_STRUCT_EventDescriptor__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventDescriptor__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_EventDescriptor__Boxed_FWDDECL)
#include <Modloader/app/structs/EventDescriptor__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EventDescriptor__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
