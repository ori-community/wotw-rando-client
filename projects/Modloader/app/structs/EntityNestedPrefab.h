#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EntityNestedPrefab_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EntityNestedPrefab_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityNestedPrefab_DEFINED)
#include <Modloader/app/structs/EntityNestedPrefab__Fields.h>
#if defined(IL2CPP_STRUCT_EntityNestedPrefab__Fields_DEFINED)
#define IL2CPP_STRUCT_EntityNestedPrefab_DEFINED
struct EntityNestedPrefab__Class;
struct EntityNestedPrefab {
    struct EntityNestedPrefab__Class* klass;
    MonitorData* monitor;
    struct EntityNestedPrefab__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EntityNestedPrefab_FWDDECL)
#define IL2CPP_STRUCT_EntityNestedPrefab_FWDDECL
#include <Modloader/app/structs/EntityNestedPrefab__Class.h>
#endif
#undef IL2CPP_STRUCT_EntityNestedPrefab_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityNestedPrefab_DEFINED) && !defined(IL2CPP_STRUCT_EntityNestedPrefab_FWDDECL)
#include <Modloader/app/structs/EntityNestedPrefab.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EntityNestedPrefab.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
