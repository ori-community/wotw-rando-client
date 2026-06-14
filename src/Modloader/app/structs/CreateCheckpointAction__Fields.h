#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CreateCheckpointAction__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CreateCheckpointAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CreateCheckpointAction__Fields_DEFINED)
#include <Modloader/app/structs/ActionMethod__Fields.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_ActionMethod__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_CreateCheckpointAction__Fields_DEFINED
struct ActionSequence;
struct CreateCheckpointAction__Fields {
    struct ActionMethod__Fields _;
    struct Vector2 RespawnPosition;
    bool SaveToDisk;
    bool UseCustomSequence;
    struct ActionSequence* CustomSaveSequence;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CreateCheckpointAction__Fields_FWDDECL)
#define IL2CPP_STRUCT_CreateCheckpointAction__Fields_FWDDECL
#include <Modloader/app/structs/ActionSequence.h>
#endif
#undef IL2CPP_STRUCT_CreateCheckpointAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CreateCheckpointAction__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CreateCheckpointAction__Fields_FWDDECL)
#include <Modloader/app/structs/CreateCheckpointAction__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CreateCheckpointAction__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
