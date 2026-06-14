#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PurchaseThingScreen__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PurchaseThingScreen__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PurchaseThingScreen__Fields_DEFINED)
#include <Modloader/app/structs/Input_Command__Enum.h>
#include <Modloader/app/structs/MenuScreenStack__Fields.h>
#if defined(IL2CPP_STRUCT_MenuScreenStack__Fields_DEFINED) && defined(IL2CPP_STRUCT_Input_Command__Enum_DEFINED)
#define IL2CPP_STRUCT_PurchaseThingScreen__Fields_DEFINED
struct AnimationCurve;
struct GameObject;
struct PurchaseThingScreen__Fields {
    struct MenuScreenStack__Fields _;
    Input_Command__Enum PurchaseButton;

    struct AnimationCurve* PurchaseAnimationCurve;
    float PurchaseTime;
    struct GameObject* PurchaseEffect;
    float PurchaseProgress;
    float PurchaseCooldown;
    float m_lastPurchase;
    bool PressFailed;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PurchaseThingScreen__Fields_FWDDECL)
#define IL2CPP_STRUCT_PurchaseThingScreen__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/GameObject.h>
#endif
#undef IL2CPP_STRUCT_PurchaseThingScreen__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PurchaseThingScreen__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PurchaseThingScreen__Fields_FWDDECL)
#include <Modloader/app/structs/PurchaseThingScreen__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PurchaseThingScreen__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
