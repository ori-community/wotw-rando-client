#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PauseGameAction__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PauseGameAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PauseGameAction__Fields_DEFINED)
#include <Modloader/app/structs/ActionWithDuration__Fields.h>
#if defined(IL2CPP_STRUCT_ActionWithDuration__Fields_DEFINED)
#define IL2CPP_STRUCT_PauseGameAction__Fields_DEFINED
struct GameObject__Array;
struct HashSet_1_Moon_ISuspendable_;
struct PauseGameAction__Fields {
    struct ActionWithDuration__Fields _;
    float PauseDuration;
    float m_pausedTime;
    bool m_isPaused;
    struct GameObject__Array* Exclude;
    bool SuspendCamera;
    bool SuspendPlayer;
    bool SuspendOri;
    struct HashSet_1_Moon_ISuspendable_* m_exclude;
    bool ShowLetterbox;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PauseGameAction__Fields_FWDDECL)
#define IL2CPP_STRUCT_PauseGameAction__Fields_FWDDECL
#include <Modloader/app/structs/GameObject__Array.h>
#include <Modloader/app/structs/HashSet_1_Moon_ISuspendable_.h>
#endif
#undef IL2CPP_STRUCT_PauseGameAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PauseGameAction__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PauseGameAction__Fields_FWDDECL)
#include <Modloader/app/structs/PauseGameAction__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PauseGameAction__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
