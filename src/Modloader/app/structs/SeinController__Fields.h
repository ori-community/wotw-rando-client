#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinController__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinController__Fields_DEFINED)
#include <Modloader/app/structs/LayerMask.h>
#include <Modloader/app/structs/SaveSerialize__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#if defined(IL2CPP_STRUCT_SaveSerialize__Fields_DEFINED) && defined(IL2CPP_STRUCT_LayerMask_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_SeinController__Fields_DEFINED
struct SeinCharacter;
struct Action;
struct Transform;
struct SeinPlayAnimationController;
struct Component_1__Array;
struct IPressurePlate;
struct SeinController__Fields {
    struct SaveSerialize__Fields _;
    bool IgnoreControllerInput;
    struct LayerMask RayTestLayerMask;
    struct SeinCharacter* Sein;
    struct Action* OnHorizontalInputPostCalculate;
    struct Transform* GetItemTransform;
    bool DisableAttacksOnHurt;
    struct Transform* m_transform;
    struct SeinPlayAnimationController* m_playAnimationController;
    struct Component_1__Array* m_suspendables;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;

    struct Action* OnTriggeredAnimationFinished;
    struct Action* OnGoThroughPortalAction;
    struct IPressurePlate* m_pressurePlate;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinController__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinController__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/Component_1__Array.h>
#include <Modloader/app/structs/IPressurePlate.h>
#include <Modloader/app/structs/SeinCharacter.h>
#include <Modloader/app/structs/SeinPlayAnimationController.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_SeinController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinController__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinController__Fields_FWDDECL)
#include <Modloader/app/structs/SeinController__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinController__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
