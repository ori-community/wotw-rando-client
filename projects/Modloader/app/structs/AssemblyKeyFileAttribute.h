#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AssemblyKeyFileAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AssemblyKeyFileAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_AssemblyKeyFileAttribute_DEFINED)
#include <Modloader/app/structs/AssemblyKeyFileAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_AssemblyKeyFileAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_AssemblyKeyFileAttribute_DEFINED
struct AssemblyKeyFileAttribute__Class;
struct AssemblyKeyFileAttribute {
    struct AssemblyKeyFileAttribute__Class* klass;
    MonitorData* monitor;
    struct AssemblyKeyFileAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AssemblyKeyFileAttribute_FWDDECL)
#define IL2CPP_STRUCT_AssemblyKeyFileAttribute_FWDDECL
#include <Modloader/app/structs/AssemblyKeyFileAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_AssemblyKeyFileAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_AssemblyKeyFileAttribute_DEFINED) && !defined(IL2CPP_STRUCT_AssemblyKeyFileAttribute_FWDDECL)
#include <Modloader/app/structs/AssemblyKeyFileAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AssemblyKeyFileAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
