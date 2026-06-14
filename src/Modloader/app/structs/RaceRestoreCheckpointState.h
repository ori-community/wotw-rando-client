#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RaceRestoreCheckpointState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RaceRestoreCheckpointState_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceRestoreCheckpointState_DEFINED)
#include <Modloader/app/structs/RaceRestoreCheckpointState__Fields.h>
#if defined(IL2CPP_STRUCT_RaceRestoreCheckpointState__Fields_DEFINED)
#define IL2CPP_STRUCT_RaceRestoreCheckpointState_DEFINED
struct RaceRestoreCheckpointState__Class;
struct RaceRestoreCheckpointState {
    struct RaceRestoreCheckpointState__Class* klass;
    MonitorData* monitor;
    struct RaceRestoreCheckpointState__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RaceRestoreCheckpointState_FWDDECL)
#define IL2CPP_STRUCT_RaceRestoreCheckpointState_FWDDECL
#include <Modloader/app/structs/RaceRestoreCheckpointState__Class.h>
#endif
#undef IL2CPP_STRUCT_RaceRestoreCheckpointState_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceRestoreCheckpointState_DEFINED) && !defined(IL2CPP_STRUCT_RaceRestoreCheckpointState_FWDDECL)
#include <Modloader/app/structs/RaceRestoreCheckpointState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RaceRestoreCheckpointState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
