#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VerletStructure_VerletStructureState__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VerletStructure_VerletStructureState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VerletStructure_VerletStructureState__Fields_DEFINED)
#include <Modloader/app/structs/VerletStructure_VerletStructureState_VerletStructureStateType__Enum.h>
#if defined(IL2CPP_STRUCT_VerletStructure_VerletStructureState_VerletStructureStateType__Enum_DEFINED)
#define IL2CPP_STRUCT_VerletStructure_VerletStructureState__Fields_DEFINED
struct String;
struct VerletStructure_LinkState__Array;
struct VerletStructure_JointState__Array;
struct FloatAnimator;
struct VerletStructure;
struct EventTriggerAnimator;
struct __declspec(align(8)) VerletStructure_VerletStructureState__Fields {
    struct String* StateName;
    bool Active;
    bool stateSaved;
    int32_t StateGUID;
    VerletStructure_VerletStructureState_VerletStructureStateType__Enum StateType;

    struct VerletStructure_LinkState__Array* LinkStates;
    struct VerletStructure_JointState__Array* JointStates;
    float ClothWindForceMultiplier;
    bool OverrideClothWindAnimator;
    struct FloatAnimator* ClothWindAnimator;
    struct VerletStructure* Structure;
    struct EventTriggerAnimator* TimelineApplyStateTrigger;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VerletStructure_VerletStructureState__Fields_FWDDECL)
#define IL2CPP_STRUCT_VerletStructure_VerletStructureState__Fields_FWDDECL
#include <Modloader/app/structs/EventTriggerAnimator.h>
#include <Modloader/app/structs/FloatAnimator.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/VerletStructure.h>
#include <Modloader/app/structs/VerletStructure_JointState__Array.h>
#include <Modloader/app/structs/VerletStructure_LinkState__Array.h>
#endif
#undef IL2CPP_STRUCT_VerletStructure_VerletStructureState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VerletStructure_VerletStructureState__Fields_DEFINED) && !defined(IL2CPP_STRUCT_VerletStructure_VerletStructureState__Fields_FWDDECL)
#include <Modloader/app/structs/VerletStructure_VerletStructureState__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VerletStructure_VerletStructureState__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
