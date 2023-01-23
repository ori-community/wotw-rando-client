#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AssemblyConfigurationAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AssemblyConfigurationAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_AssemblyConfigurationAttribute_DEFINED)
#include <Modloader/app/structs/AssemblyConfigurationAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_AssemblyConfigurationAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_AssemblyConfigurationAttribute_DEFINED
struct AssemblyConfigurationAttribute__Class;
struct AssemblyConfigurationAttribute {
    struct AssemblyConfigurationAttribute__Class* klass;
    MonitorData* monitor;
    struct AssemblyConfigurationAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AssemblyConfigurationAttribute_FWDDECL)
#define IL2CPP_STRUCT_AssemblyConfigurationAttribute_FWDDECL
#include <Modloader/app/structs/AssemblyConfigurationAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_AssemblyConfigurationAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_AssemblyConfigurationAttribute_DEFINED) && !defined(IL2CPP_STRUCT_AssemblyConfigurationAttribute_FWDDECL)
#include <Modloader/app/structs/AssemblyConfigurationAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AssemblyConfigurationAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
