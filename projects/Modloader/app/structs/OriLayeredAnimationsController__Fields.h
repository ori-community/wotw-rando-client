#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OriLayeredAnimationsController__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OriLayeredAnimationsController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_OriLayeredAnimationsController__Fields_DEFINED)
#include <Modloader/app/structs/ActiveAnimationHandle.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/MoonAnimatorLayerName.h>
#include <Modloader/app/structs/OriLayeredAnimationsController_ConditionEvaluation__Enum.h>
#include <Modloader/app/structs/OriLayeredAnimationsController_FacingCondition__Enum.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_OriLayeredAnimationsController_FacingCondition__Enum_DEFINED) && defined(IL2CPP_STRUCT_OriLayeredAnimationsController_ConditionEvaluation__Enum_DEFINED) && defined(IL2CPP_STRUCT_ActiveAnimationHandle_DEFINED) && defined(IL2CPP_STRUCT_MoonAnimatorLayerName_DEFINED)
#define IL2CPP_STRUCT_OriLayeredAnimationsController__Fields_DEFINED
struct MoonAnimationAssociation;
struct List_1_Moon_MoonReference_1__11;
struct List_1_ICondition_;
struct OriLayeredAnimationsController__Fields {
    struct MonoBehaviour__Fields _;
    struct MoonAnimationAssociation* AnimationsMatch;
    OriLayeredAnimationsController_FacingCondition__Enum OriFacingCondition;

    OriLayeredAnimationsController_ConditionEvaluation__Enum ConditionEvaluationMode;

    struct List_1_Moon_MoonReference_1__11* Conditions;
    struct ActiveAnimationHandle m_activeAnimation;
    struct ActiveAnimationHandle m_sourceActiveAnimation;
    struct MoonAnimatorLayerName m_upperBodyLayer;
    struct List_1_ICondition_* m_resolvedConditions;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_OriLayeredAnimationsController__Fields_FWDDECL)
#define IL2CPP_STRUCT_OriLayeredAnimationsController__Fields_FWDDECL
#include <Modloader/app/structs/List_1_ICondition_.h>
#include <Modloader/app/structs/List_1_Moon_MoonReference_1__11.h>
#include <Modloader/app/structs/MoonAnimationAssociation.h>
#endif
#undef IL2CPP_STRUCT_OriLayeredAnimationsController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_OriLayeredAnimationsController__Fields_DEFINED) && !defined(IL2CPP_STRUCT_OriLayeredAnimationsController__Fields_FWDDECL)
#include <Modloader/app/structs/OriLayeredAnimationsController__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OriLayeredAnimationsController__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
