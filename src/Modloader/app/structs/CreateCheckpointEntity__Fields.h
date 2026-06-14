#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CreateCheckpointEntity__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CreateCheckpointEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CreateCheckpointEntity__Fields_DEFINED)
#include <Modloader/app/structs/CheckpointFunctionality.h>
#include <Modloader/app/structs/TimelineEntity__Fields.h>
#if defined(IL2CPP_STRUCT_TimelineEntity__Fields_DEFINED) && defined(IL2CPP_STRUCT_CheckpointFunctionality_DEFINED)
#define IL2CPP_STRUCT_CreateCheckpointEntity__Fields_DEFINED
struct CreateCheckpointEntity__Fields {
    struct TimelineEntity__Fields _;
    struct CheckpointFunctionality Checkpoint;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CreateCheckpointEntity__Fields_FWDDECL)
#define IL2CPP_STRUCT_CreateCheckpointEntity__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_CreateCheckpointEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CreateCheckpointEntity__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CreateCheckpointEntity__Fields_FWDDECL)
#include <Modloader/app/structs/CreateCheckpointEntity__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CreateCheckpointEntity__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
