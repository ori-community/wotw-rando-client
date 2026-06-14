#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StateCondition__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StateCondition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StateCondition__Fields_DEFINED)
#include <Modloader/app/structs/Condition_1__Fields.h>
#if defined(IL2CPP_STRUCT_Condition_1__Fields_DEFINED)
#define IL2CPP_STRUCT_StateCondition__Fields_DEFINED
struct StateCondition_StateConditionSetupHolder;
struct DesiredUberStateComposite;
struct IUberState__Array;
struct List_1_UnityEngine_GameObject_;
struct StateCondition__Fields {
    struct Condition_1__Fields _;
    struct StateCondition_StateConditionSetupHolder* Condition;
    struct DesiredUberStateComposite* DesiredState;
    bool m_evaluatedAtLeastOnce;
    bool m_validateResult;
    struct IUberState__Array* m_affectingUberStates;
    struct List_1_UnityEngine_GameObject_* _AllTargets_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StateCondition__Fields_FWDDECL)
#define IL2CPP_STRUCT_StateCondition__Fields_FWDDECL
#include <Modloader/app/structs/DesiredUberStateComposite.h>
#include <Modloader/app/structs/IUberState__Array.h>
#include <Modloader/app/structs/List_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/StateCondition_StateConditionSetupHolder.h>
#endif
#undef IL2CPP_STRUCT_StateCondition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StateCondition__Fields_DEFINED) && !defined(IL2CPP_STRUCT_StateCondition__Fields_FWDDECL)
#include <Modloader/app/structs/StateCondition__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StateCondition__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
