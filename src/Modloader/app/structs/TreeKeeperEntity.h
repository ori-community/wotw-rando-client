#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TreeKeeperEntity_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TreeKeeperEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_TreeKeeperEntity_DEFINED)
#include <Modloader/app/structs/TreeKeeperEntity__Fields.h>
#if defined(IL2CPP_STRUCT_TreeKeeperEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_TreeKeeperEntity_DEFINED
struct TreeKeeperEntity__Class;
struct TreeKeeperEntity {
    struct TreeKeeperEntity__Class* klass;
    MonitorData* monitor;
    struct TreeKeeperEntity__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TreeKeeperEntity_FWDDECL)
#define IL2CPP_STRUCT_TreeKeeperEntity_FWDDECL
#include <Modloader/app/structs/TreeKeeperEntity__Class.h>
#endif
#undef IL2CPP_STRUCT_TreeKeeperEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_TreeKeeperEntity_DEFINED) && !defined(IL2CPP_STRUCT_TreeKeeperEntity_FWDDECL)
#include <Modloader/app/structs/TreeKeeperEntity.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TreeKeeperEntity.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
