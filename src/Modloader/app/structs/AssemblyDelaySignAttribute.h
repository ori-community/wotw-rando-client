#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AssemblyDelaySignAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AssemblyDelaySignAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_AssemblyDelaySignAttribute_DEFINED)
#include <Modloader/app/structs/AssemblyDelaySignAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_AssemblyDelaySignAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_AssemblyDelaySignAttribute_DEFINED
struct AssemblyDelaySignAttribute__Class;
struct AssemblyDelaySignAttribute {
    struct AssemblyDelaySignAttribute__Class* klass;
    MonitorData* monitor;
    struct AssemblyDelaySignAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AssemblyDelaySignAttribute_FWDDECL)
#define IL2CPP_STRUCT_AssemblyDelaySignAttribute_FWDDECL
#include <Modloader/app/structs/AssemblyDelaySignAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_AssemblyDelaySignAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_AssemblyDelaySignAttribute_DEFINED) && !defined(IL2CPP_STRUCT_AssemblyDelaySignAttribute_FWDDECL)
#include <Modloader/app/structs/AssemblyDelaySignAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AssemblyDelaySignAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
