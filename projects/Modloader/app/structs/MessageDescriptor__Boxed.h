#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MessageDescriptor__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MessageDescriptor__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_MessageDescriptor__Boxed_DEFINED)
#include <Modloader/app/structs/MessageDescriptor.h>
#if defined(IL2CPP_STRUCT_MessageDescriptor_DEFINED)
#define IL2CPP_STRUCT_MessageDescriptor__Boxed_DEFINED
struct MessageDescriptor__Class;
struct MessageDescriptor__Boxed {
    struct MessageDescriptor__Class* klass;
    MonitorData* monitor;
    struct MessageDescriptor fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MessageDescriptor__Boxed_FWDDECL)
#define IL2CPP_STRUCT_MessageDescriptor__Boxed_FWDDECL
#include <Modloader/app/structs/MessageDescriptor__Class.h>
#endif
#undef IL2CPP_STRUCT_MessageDescriptor__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_MessageDescriptor__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_MessageDescriptor__Boxed_FWDDECL)
#include <Modloader/app/structs/MessageDescriptor__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MessageDescriptor__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
