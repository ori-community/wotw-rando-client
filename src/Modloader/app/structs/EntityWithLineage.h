#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EntityWithLineage_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EntityWithLineage_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityWithLineage_DEFINED)
#include <Modloader/app/structs/EntityWithLineage__Fields.h>
#if defined(IL2CPP_STRUCT_EntityWithLineage__Fields_DEFINED)
#define IL2CPP_STRUCT_EntityWithLineage_DEFINED
struct EntityWithLineage__Class;
struct EntityWithLineage {
    struct EntityWithLineage__Class* klass;
    MonitorData* monitor;
    struct EntityWithLineage__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EntityWithLineage_FWDDECL)
#define IL2CPP_STRUCT_EntityWithLineage_FWDDECL
#include <Modloader/app/structs/EntityWithLineage__Class.h>
#endif
#undef IL2CPP_STRUCT_EntityWithLineage_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityWithLineage_DEFINED) && !defined(IL2CPP_STRUCT_EntityWithLineage_FWDDECL)
#include <Modloader/app/structs/EntityWithLineage.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EntityWithLineage.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
