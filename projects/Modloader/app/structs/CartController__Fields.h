#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CartController__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CartController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CartController__Fields_DEFINED)
#include <Modloader/app/structs/CartAccelerationInputType__Enum.h>
#include <Modloader/app/structs/Input_Button__Enum.h>
#include <Modloader/app/structs/SaveSerialize__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#if defined(IL2CPP_STRUCT_SaveSerialize__Fields_DEFINED) && defined(IL2CPP_STRUCT_CartAccelerationInputType__Enum_DEFINED) && defined(IL2CPP_STRUCT_Input_Button__Enum_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_CartController__Fields_DEFINED
struct Cart;
struct AnimationCurve;
struct Transform;
struct Component_1__Array;
struct Action;
struct IPressurePlate;
struct CartController__Fields {
    struct SaveSerialize__Fields _;
    bool IgnoreControllerInput;
    struct Cart* Cart;
    CartAccelerationInputType__Enum CartAccelerationInputType;

    Input_Button__Enum AccelerateButton;

    Input_Button__Enum DecelerateButton;

    Input_Button__Enum BoostButton;

    Input_Button__Enum FlipButton;

    bool UseStickToFlip;
    bool AllowBash;
    bool LimitBrakeTime;
    bool AutoLeanForward;
    struct AnimationCurve* AutoLeanForwardCurve;
    float JumpOutHeight;
    bool m_hadFlipedWithStick;
    struct Transform* m_transform;
    float m_lastHorizontalRawInput;
    float m_lastInputForce;
    float m_startMovingTimer;
    float m_brakeTimer;
    struct Component_1__Array* m_suspendables;
    float _ControllerExtraSpeed_k__BackingField;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;

    struct Action* OnTriggeredAnimationFinished;
    struct IPressurePlate* m_pressurePlate;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CartController__Fields_FWDDECL)
#define IL2CPP_STRUCT_CartController__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/Cart.h>
#include <Modloader/app/structs/Component_1__Array.h>
#include <Modloader/app/structs/IPressurePlate.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_CartController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CartController__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CartController__Fields_FWDDECL)
#include <Modloader/app/structs/CartController__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CartController__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
