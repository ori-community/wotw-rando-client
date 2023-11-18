#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RacePrepareState__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RacePrepareState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RacePrepareState__Fields_DEFINED)
#include <Modloader/app/structs/RaceBaseState__Fields.h>
#if defined(IL2CPP_STRUCT_RaceBaseState__Fields_DEFINED)
#define IL2CPP_STRUCT_RacePrepareState__Fields_DEFINED
struct RacePrepareState__Fields {
    struct RaceBaseState__Fields _;
    bool m_waitingForFlythrough;
    float m_flythroughTimeRemaining;
    bool m_flythroughFade;
    float m_databaseSyncingTimeout;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RacePrepareState__Fields_FWDDECL)
#define IL2CPP_STRUCT_RacePrepareState__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_RacePrepareState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RacePrepareState__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RacePrepareState__Fields_FWDDECL)
#include <Modloader/app/structs/RacePrepareState__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RacePrepareState__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
