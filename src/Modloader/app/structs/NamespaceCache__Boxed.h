#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NamespaceCache__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NamespaceCache__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_NamespaceCache__Boxed_DEFINED)
#include <Modloader/app/structs/NamespaceCache.h>
#if defined(IL2CPP_STRUCT_NamespaceCache_DEFINED)
#define IL2CPP_STRUCT_NamespaceCache__Boxed_DEFINED
struct NamespaceCache__Class;
struct NamespaceCache__Boxed {
    struct NamespaceCache__Class* klass;
    MonitorData* monitor;
    struct NamespaceCache fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NamespaceCache__Boxed_FWDDECL)
#define IL2CPP_STRUCT_NamespaceCache__Boxed_FWDDECL
#include <Modloader/app/structs/NamespaceCache__Class.h>
#endif
#undef IL2CPP_STRUCT_NamespaceCache__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_NamespaceCache__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_NamespaceCache__Boxed_FWDDECL)
#include <Modloader/app/structs/NamespaceCache__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NamespaceCache__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
