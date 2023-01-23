#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AssemblyDescriptionAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AssemblyDescriptionAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_AssemblyDescriptionAttribute_DEFINED)
#include <Modloader/app/structs/AssemblyDescriptionAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_AssemblyDescriptionAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_AssemblyDescriptionAttribute_DEFINED
struct AssemblyDescriptionAttribute__Class;
struct AssemblyDescriptionAttribute {
    struct AssemblyDescriptionAttribute__Class* klass;
    MonitorData* monitor;
    struct AssemblyDescriptionAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AssemblyDescriptionAttribute_FWDDECL)
#define IL2CPP_STRUCT_AssemblyDescriptionAttribute_FWDDECL
#include <Modloader/app/structs/AssemblyDescriptionAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_AssemblyDescriptionAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_AssemblyDescriptionAttribute_DEFINED) && !defined(IL2CPP_STRUCT_AssemblyDescriptionAttribute_FWDDECL)
#include <Modloader/app/structs/AssemblyDescriptionAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AssemblyDescriptionAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
