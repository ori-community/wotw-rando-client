#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LegacyGetAbilityPedestal__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LegacyGetAbilityPedestal__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyGetAbilityPedestal__Fields_DEFINED)
#include <Modloader/app/structs/AbilityType__Enum.h>
#include <Modloader/app/structs/LegacyGetAbilityPedestal_States__Enum.h>
#include <Modloader/app/structs/SaveSerialize__Fields.h>
#include <Modloader/app/structs/StressTestStatus__Enum.h>
#if defined(IL2CPP_STRUCT_SaveSerialize__Fields_DEFINED) && defined(IL2CPP_STRUCT_LegacyGetAbilityPedestal_States__Enum_DEFINED) && defined(IL2CPP_STRUCT_AbilityType__Enum_DEFINED) && defined(IL2CPP_STRUCT_StressTestStatus__Enum_DEFINED)
#define IL2CPP_STRUCT_LegacyGetAbilityPedestal__Fields_DEFINED
struct PerformingAction;
struct IContext;
struct MoonAnimation;
struct Texture2D;
struct MessageProvider;
struct MessageBox;
struct Transform;
struct Action;
struct LegacyGetAbilityPedestal__Fields {
    struct SaveSerialize__Fields _;
    LegacyGetAbilityPedestal_States__Enum CurrentState;

    AbilityType__Enum Ability;

    struct PerformingAction* ActivatePedestalSequence;
    struct IContext* ActivatePedestalSequenceContext;
    float ActivationDuration;
    struct MoonAnimation* GetAbility;
    struct Texture2D* PressUpToActivatePedestal;
    struct MessageProvider* PressUpToActivatePedestalMessage;
    struct MessageBox* m_message;
    float Radius;
    struct Transform* m_transform;
    struct Action* OnGetAbilityFinished;
    StressTestStatus__Enum _StressTestStatus_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LegacyGetAbilityPedestal__Fields_FWDDECL)
#define IL2CPP_STRUCT_LegacyGetAbilityPedestal__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/MessageBox.h>
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/MoonAnimation.h>
#include <Modloader/app/structs/PerformingAction.h>
#include <Modloader/app/structs/Texture2D.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_LegacyGetAbilityPedestal__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyGetAbilityPedestal__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LegacyGetAbilityPedestal__Fields_FWDDECL)
#include <Modloader/app/structs/LegacyGetAbilityPedestal__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LegacyGetAbilityPedestal__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
