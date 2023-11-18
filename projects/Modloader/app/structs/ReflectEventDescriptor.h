#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ReflectEventDescriptor_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ReflectEventDescriptor_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReflectEventDescriptor_DEFINED)
#include <Modloader/app/structs/ReflectEventDescriptor__Fields.h>
#if defined(IL2CPP_STRUCT_ReflectEventDescriptor__Fields_DEFINED)
#define IL2CPP_STRUCT_ReflectEventDescriptor_DEFINED
struct ReflectEventDescriptor__Class;
struct ReflectEventDescriptor {
    struct ReflectEventDescriptor__Class* klass;
    MonitorData* monitor;
    struct ReflectEventDescriptor__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ReflectEventDescriptor_FWDDECL)
#define IL2CPP_STRUCT_ReflectEventDescriptor_FWDDECL
#include <Modloader/app/structs/ReflectEventDescriptor__Class.h>
#endif
#undef IL2CPP_STRUCT_ReflectEventDescriptor_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReflectEventDescriptor_DEFINED) && !defined(IL2CPP_STRUCT_ReflectEventDescriptor_FWDDECL)
#include <Modloader/app/structs/ReflectEventDescriptor.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ReflectEventDescriptor.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
