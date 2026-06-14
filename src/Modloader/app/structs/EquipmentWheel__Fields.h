#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EquipmentWheel__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EquipmentWheel__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EquipmentWheel__Fields_DEFINED)
#include <Modloader/app/structs/AbilityType__Enum.h>
#include <Modloader/app/structs/MenuScreenStack__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_MenuScreenStack__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_AbilityType__Enum_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_EquipmentWheel__Fields_DEFINED
struct MoonTimelineUiFader;
struct GameObject;
struct EquipmentRadialSelection;
struct EquipmentWheelUIDetails;
struct Transform;
struct Dictionary_2_SpellInventory_Binding_EquipmentType_;
struct Action_2_AbilityType_AbilityType_;
struct HashSet_1_Moon_ISuspendable_;
struct EquipmentWheel__Fields {
    struct MenuScreenStack__Fields _;
    struct MoonTimelineUiFader* Fader;
    struct GameObject* ButtonBindingCanvasPrefab;
    struct EquipmentRadialSelection* RadialSelection;
    struct GameObject* SpellItemPrefab;
    struct GameObject* PlaceholderRoot;
    struct GameObject* ItemHighlightGO;
    struct GameObject* FootBar;
    struct EquipmentWheelUIDetails* EquipmentDetailsCanvas;
    struct Transform* ArrowPivot;
    struct GameObject* CircleBackground;
    struct GameObject* SpiralBackground;
    bool PauseGame;
    bool ShouldSnapToAngles;
    float RadialSmoothTime;
    struct Vector2 m_currentRadialVelocity;
    bool m_isHiding;
    AbilityType__Enum m_nextAbilityOfCurrentlyUpdatingSlot;

    AbilityType__Enum m_previousAbilityOfCurrentlyUpdatingSlot;

    struct Dictionary_2_SpellInventory_Binding_EquipmentType_* m_previousAbilityByBinding;
    struct Dictionary_2_SpellInventory_Binding_EquipmentType_* m_currentAbilityByBinding;
    struct Action_2_AbilityType_AbilityType_* OnAbilityBind;
    struct Vector2 m_lastNonZeroAngle;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;

    struct HashSet_1_Moon_ISuspendable_* m_cachedSuspendables;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EquipmentWheel__Fields_FWDDECL)
#define IL2CPP_STRUCT_EquipmentWheel__Fields_FWDDECL
#include <Modloader/app/structs/Action_2_AbilityType_AbilityType_.h>
#include <Modloader/app/structs/Dictionary_2_SpellInventory_Binding_EquipmentType_.h>
#include <Modloader/app/structs/EquipmentRadialSelection.h>
#include <Modloader/app/structs/EquipmentWheelUIDetails.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/HashSet_1_Moon_ISuspendable_.h>
#include <Modloader/app/structs/MoonTimelineUiFader.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_EquipmentWheel__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EquipmentWheel__Fields_DEFINED) && !defined(IL2CPP_STRUCT_EquipmentWheel__Fields_FWDDECL)
#include <Modloader/app/structs/EquipmentWheel__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EquipmentWheel__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
