#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AssemblyTitleAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AssemblyTitleAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_AssemblyTitleAttribute_DEFINED)
#include <Modloader/app/structs/AssemblyTitleAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_AssemblyTitleAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_AssemblyTitleAttribute_DEFINED
struct AssemblyTitleAttribute__Class;
struct AssemblyTitleAttribute {
    struct AssemblyTitleAttribute__Class* klass;
    MonitorData* monitor;
    struct AssemblyTitleAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AssemblyTitleAttribute_FWDDECL)
#define IL2CPP_STRUCT_AssemblyTitleAttribute_FWDDECL
#include <Modloader/app/structs/AssemblyTitleAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_AssemblyTitleAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_AssemblyTitleAttribute_DEFINED) && !defined(IL2CPP_STRUCT_AssemblyTitleAttribute_FWDDECL)
#include <Modloader/app/structs/AssemblyTitleAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AssemblyTitleAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
