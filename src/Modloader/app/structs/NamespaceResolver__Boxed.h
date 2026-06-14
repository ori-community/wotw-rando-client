#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NamespaceResolver__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NamespaceResolver__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_NamespaceResolver__Boxed_DEFINED)
#include <Modloader/app/structs/NamespaceResolver.h>
#if defined(IL2CPP_STRUCT_NamespaceResolver_DEFINED)
#define IL2CPP_STRUCT_NamespaceResolver__Boxed_DEFINED
struct NamespaceResolver__Class;
struct NamespaceResolver__Boxed {
    struct NamespaceResolver__Class* klass;
    MonitorData* monitor;
    struct NamespaceResolver fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NamespaceResolver__Boxed_FWDDECL)
#define IL2CPP_STRUCT_NamespaceResolver__Boxed_FWDDECL
#include <Modloader/app/structs/NamespaceResolver__Class.h>
#endif
#undef IL2CPP_STRUCT_NamespaceResolver__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_NamespaceResolver__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_NamespaceResolver__Boxed_FWDDECL)
#include <Modloader/app/structs/NamespaceResolver__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NamespaceResolver__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
