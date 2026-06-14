#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GameTimer__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GameTimer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameTimer__Fields_DEFINED)
#include <Modloader/app/structs/SaveSerialize__Fields.h>
#if defined(IL2CPP_STRUCT_SaveSerialize__Fields_DEFINED)
#define IL2CPP_STRUCT_GameTimer__Fields_DEFINED
struct Stopwatch;
struct String;
struct IUberState__Array;
struct List_1_UnityEngine_GameObject_;
struct GameTimer__Fields {
    struct SaveSerialize__Fields _;
    double CurrentTime;
    double SessionTime;
    struct Stopwatch* m_realtimeStopwatch;
    double m_realtime;
    double m_deathTime;
    double m_menuTime;
    struct String* m_displayText;
    bool _ApplyOnEditor_k__BackingField;
    struct IUberState__Array* _AffectingUberStates_k__BackingField;
    struct List_1_UnityEngine_GameObject_* _AllTargets_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GameTimer__Fields_FWDDECL)
#define IL2CPP_STRUCT_GameTimer__Fields_FWDDECL
#include <Modloader/app/structs/IUberState__Array.h>
#include <Modloader/app/structs/List_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/Stopwatch.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_GameTimer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameTimer__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GameTimer__Fields_FWDDECL)
#include <Modloader/app/structs/GameTimer__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GameTimer__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
