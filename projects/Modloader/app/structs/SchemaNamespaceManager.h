#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SchemaNamespaceManager_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SchemaNamespaceManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_SchemaNamespaceManager_DEFINED)
#include <Modloader/app/structs/SchemaNamespaceManager__Fields.h>
#if defined(IL2CPP_STRUCT_SchemaNamespaceManager__Fields_DEFINED)
#define IL2CPP_STRUCT_SchemaNamespaceManager_DEFINED
struct SchemaNamespaceManager__Class;
struct SchemaNamespaceManager {
    struct SchemaNamespaceManager__Class* klass;
    MonitorData* monitor;
    struct SchemaNamespaceManager__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SchemaNamespaceManager_FWDDECL)
#define IL2CPP_STRUCT_SchemaNamespaceManager_FWDDECL
#include <Modloader/app/structs/SchemaNamespaceManager__Class.h>
#endif
#undef IL2CPP_STRUCT_SchemaNamespaceManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_SchemaNamespaceManager_DEFINED) && !defined(IL2CPP_STRUCT_SchemaNamespaceManager_FWDDECL)
#include <Modloader/app/structs/SchemaNamespaceManager.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SchemaNamespaceManager.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
