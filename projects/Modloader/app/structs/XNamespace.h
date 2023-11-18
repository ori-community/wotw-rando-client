#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XNamespace_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XNamespace_INITIALIZING
#if !defined(IL2CPP_STRUCT_XNamespace_DEFINED)
#include <Modloader/app/structs/XNamespace__Fields.h>
#if defined(IL2CPP_STRUCT_XNamespace__Fields_DEFINED)
#define IL2CPP_STRUCT_XNamespace_DEFINED
struct XNamespace__Class;
struct XNamespace {
    struct XNamespace__Class* klass;
    MonitorData* monitor;
    struct XNamespace__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XNamespace_FWDDECL)
#define IL2CPP_STRUCT_XNamespace_FWDDECL
#include <Modloader/app/structs/XNamespace__Class.h>
#endif
#undef IL2CPP_STRUCT_XNamespace_INITIALIZING
#if !defined(IL2CPP_STRUCT_XNamespace_DEFINED) && !defined(IL2CPP_STRUCT_XNamespace_FWDDECL)
#include <Modloader/app/structs/XNamespace.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XNamespace.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
