#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ReflectPropertyDescriptor_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ReflectPropertyDescriptor_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReflectPropertyDescriptor_DEFINED)
#include <Modloader/app/structs/ReflectPropertyDescriptor__Fields.h>
#if defined(IL2CPP_STRUCT_ReflectPropertyDescriptor__Fields_DEFINED)
#define IL2CPP_STRUCT_ReflectPropertyDescriptor_DEFINED
struct ReflectPropertyDescriptor__Class;
struct ReflectPropertyDescriptor {
    struct ReflectPropertyDescriptor__Class* klass;
    MonitorData* monitor;
    struct ReflectPropertyDescriptor__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ReflectPropertyDescriptor_FWDDECL)
#define IL2CPP_STRUCT_ReflectPropertyDescriptor_FWDDECL
#include <Modloader/app/structs/ReflectPropertyDescriptor__Class.h>
#endif
#undef IL2CPP_STRUCT_ReflectPropertyDescriptor_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReflectPropertyDescriptor_DEFINED) && !defined(IL2CPP_STRUCT_ReflectPropertyDescriptor_FWDDECL)
#include <Modloader/app/structs/ReflectPropertyDescriptor.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ReflectPropertyDescriptor.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
