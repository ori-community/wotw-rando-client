#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Brain__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Brain__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Brain__Fields_DEFINED)
#include <Modloader/app/structs/Suspendable__Fields.h>
#if defined(IL2CPP_STRUCT_Suspendable__Fields_DEFINED)
#define IL2CPP_STRUCT_Brain__Fields_DEFINED
struct BrainBehaviour;
struct List_1_Moon_BrainBehaviour_;
struct Action_1_Moon_BrainBehaviour_;
struct Queue_1_Moon_BrainBehaviour_;
struct Brain__Fields {
    struct Suspendable__Fields _;
    bool _IsSuspended_k__BackingField;
    bool Enabled;
    float MinBehaviourScore;
    struct BrainBehaviour* CurrentBehaviour;
    struct List_1_Moon_BrainBehaviour_* Behaviours;
    struct Action_1_Moon_BrainBehaviour_* BehaviourStarted;
    struct Action_1_Moon_BrainBehaviour_* BehaviourEnded;
    struct Queue_1_Moon_BrainBehaviour_* m_behaviourQueue;
    bool m_prevEnabled;
    float m_lastSelectedBehaviourScore;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Brain__Fields_FWDDECL)
#define IL2CPP_STRUCT_Brain__Fields_FWDDECL
#include <Modloader/app/structs/Action_1_Moon_BrainBehaviour_.h>
#include <Modloader/app/structs/BrainBehaviour.h>
#include <Modloader/app/structs/List_1_Moon_BrainBehaviour_.h>
#include <Modloader/app/structs/Queue_1_Moon_BrainBehaviour_.h>
#endif
#undef IL2CPP_STRUCT_Brain__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Brain__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Brain__Fields_FWDDECL)
#include <Modloader/app/structs/Brain__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Brain__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
