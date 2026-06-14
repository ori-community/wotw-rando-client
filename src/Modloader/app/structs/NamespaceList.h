#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NamespaceList_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NamespaceList_INITIALIZING
#if !defined(IL2CPP_STRUCT_NamespaceList_DEFINED)
#include <Modloader/app/structs/NamespaceList__Fields.h>
#if defined(IL2CPP_STRUCT_NamespaceList__Fields_DEFINED)
#define IL2CPP_STRUCT_NamespaceList_DEFINED
struct NamespaceList__Class;
struct NamespaceList {
    struct NamespaceList__Class* klass;
    MonitorData* monitor;
    struct NamespaceList__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NamespaceList_FWDDECL)
#define IL2CPP_STRUCT_NamespaceList_FWDDECL
#include <Modloader/app/structs/NamespaceList__Class.h>
#endif
#undef IL2CPP_STRUCT_NamespaceList_INITIALIZING
#if !defined(IL2CPP_STRUCT_NamespaceList_DEFINED) && !defined(IL2CPP_STRUCT_NamespaceList_FWDDECL)
#include <Modloader/app/structs/NamespaceList.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NamespaceList.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
