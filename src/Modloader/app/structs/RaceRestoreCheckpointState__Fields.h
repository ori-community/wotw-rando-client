#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RaceRestoreCheckpointState__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RaceRestoreCheckpointState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceRestoreCheckpointState__Fields_DEFINED)
#include <Modloader/app/structs/RaceBaseState__Fields.h>
#if defined(IL2CPP_STRUCT_RaceBaseState__Fields_DEFINED)
#define IL2CPP_STRUCT_RaceRestoreCheckpointState__Fields_DEFINED
struct RaceStateMachineContext_Waiter;
struct RaceRestoreCheckpointState__Fields {
    struct RaceBaseState__Fields _;
    struct RaceStateMachineContext_Waiter* m_wait;
    bool m_restoreRequested;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RaceRestoreCheckpointState__Fields_FWDDECL)
#define IL2CPP_STRUCT_RaceRestoreCheckpointState__Fields_FWDDECL
#include <Modloader/app/structs/RaceStateMachineContext_Waiter.h>
#endif
#undef IL2CPP_STRUCT_RaceRestoreCheckpointState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceRestoreCheckpointState__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RaceRestoreCheckpointState__Fields_FWDDECL)
#include <Modloader/app/structs/RaceRestoreCheckpointState__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RaceRestoreCheckpointState__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
