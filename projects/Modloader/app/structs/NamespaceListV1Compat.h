#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NamespaceListV1Compat_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NamespaceListV1Compat_INITIALIZING
#if !defined(IL2CPP_STRUCT_NamespaceListV1Compat_DEFINED)
#include <Modloader/app/structs/NamespaceListV1Compat__Fields.h>
#if defined(IL2CPP_STRUCT_NamespaceListV1Compat__Fields_DEFINED)
#define IL2CPP_STRUCT_NamespaceListV1Compat_DEFINED
struct NamespaceListV1Compat__Class;
struct NamespaceListV1Compat {
    struct NamespaceListV1Compat__Class* klass;
    MonitorData* monitor;
    struct NamespaceListV1Compat__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NamespaceListV1Compat_FWDDECL)
#define IL2CPP_STRUCT_NamespaceListV1Compat_FWDDECL
#include <Modloader/app/structs/NamespaceListV1Compat__Class.h>
#endif
#undef IL2CPP_STRUCT_NamespaceListV1Compat_INITIALIZING
#if !defined(IL2CPP_STRUCT_NamespaceListV1Compat_DEFINED) && !defined(IL2CPP_STRUCT_NamespaceListV1Compat_FWDDECL)
#include <Modloader/app/structs/NamespaceListV1Compat.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NamespaceListV1Compat.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
