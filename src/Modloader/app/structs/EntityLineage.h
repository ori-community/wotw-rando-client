#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EntityLineage_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EntityLineage_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityLineage_DEFINED)
#include <Modloader/app/structs/EntityLineage__Fields.h>
#if defined(IL2CPP_STRUCT_EntityLineage__Fields_DEFINED)
#define IL2CPP_STRUCT_EntityLineage_DEFINED
struct EntityLineage__Class;
struct EntityLineage {
    struct EntityLineage__Class* klass;
    MonitorData* monitor;
    struct EntityLineage__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EntityLineage_FWDDECL)
#define IL2CPP_STRUCT_EntityLineage_FWDDECL
#include <Modloader/app/structs/EntityLineage__Class.h>
#endif
#undef IL2CPP_STRUCT_EntityLineage_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityLineage_DEFINED) && !defined(IL2CPP_STRUCT_EntityLineage_FWDDECL)
#include <Modloader/app/structs/EntityLineage.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EntityLineage.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
