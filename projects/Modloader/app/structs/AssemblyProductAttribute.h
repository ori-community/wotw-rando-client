#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AssemblyProductAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AssemblyProductAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_AssemblyProductAttribute_DEFINED)
#include <Modloader/app/structs/AssemblyProductAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_AssemblyProductAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_AssemblyProductAttribute_DEFINED
struct AssemblyProductAttribute__Class;
struct AssemblyProductAttribute {
    struct AssemblyProductAttribute__Class* klass;
    MonitorData* monitor;
    struct AssemblyProductAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AssemblyProductAttribute_FWDDECL)
#define IL2CPP_STRUCT_AssemblyProductAttribute_FWDDECL
#include <Modloader/app/structs/AssemblyProductAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_AssemblyProductAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_AssemblyProductAttribute_DEFINED) && !defined(IL2CPP_STRUCT_AssemblyProductAttribute_FWDDECL)
#include <Modloader/app/structs/AssemblyProductAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AssemblyProductAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
