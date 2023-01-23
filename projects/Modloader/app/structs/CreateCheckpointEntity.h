#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CreateCheckpointEntity_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CreateCheckpointEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_CreateCheckpointEntity_DEFINED)
#include <Modloader/app/structs/CreateCheckpointEntity__Fields.h>
#if defined(IL2CPP_STRUCT_CreateCheckpointEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_CreateCheckpointEntity_DEFINED
struct CreateCheckpointEntity__Class;
struct CreateCheckpointEntity {
    struct CreateCheckpointEntity__Class* klass;
    MonitorData* monitor;
    struct CreateCheckpointEntity__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CreateCheckpointEntity_FWDDECL)
#define IL2CPP_STRUCT_CreateCheckpointEntity_FWDDECL
#include <Modloader/app/structs/CreateCheckpointEntity__Class.h>
#endif
#undef IL2CPP_STRUCT_CreateCheckpointEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_CreateCheckpointEntity_DEFINED) && !defined(IL2CPP_STRUCT_CreateCheckpointEntity_FWDDECL)
#include <Modloader/app/structs/CreateCheckpointEntity.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CreateCheckpointEntity.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
