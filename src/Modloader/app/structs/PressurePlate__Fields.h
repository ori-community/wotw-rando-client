#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PressurePlate__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PressurePlate__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PressurePlate__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/PressurePlate_Target__Enum.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_PressurePlate_Target__Enum_DEFINED)
#define IL2CPP_STRUCT_PressurePlate__Fields_DEFINED
struct DynamicDataResolver;
struct Transform;
struct PressurePlateSetupHolder;
struct MoonReference_1_IStateTransitionHolder_;
struct List_1_ICanActivatePressurePlate_;
struct CollisionEventHandler__Array;
struct IUberState__Array;
struct PressurePlate__Fields {
    struct MonoBehaviour__Fields _;
    struct DynamicDataResolver* m_dataResolver;
    PressurePlate_Target__Enum Targets;

    struct Transform* PlateTransform;
    bool DisableOffScreen;
    bool LockPuzzleSolvedState;
    struct PressurePlateSetupHolder* Setup;
    struct MoonReference_1_IStateTransitionHolder_* LinkedSetup;
    struct List_1_ICanActivatePressurePlate_* m_pressing;
    struct CollisionEventHandler__Array* m_collisionHandlers;
    struct IUberState__Array* m_affectingUberStates;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PressurePlate__Fields_FWDDECL)
#define IL2CPP_STRUCT_PressurePlate__Fields_FWDDECL
#include <Modloader/app/structs/CollisionEventHandler__Array.h>
#include <Modloader/app/structs/DynamicDataResolver.h>
#include <Modloader/app/structs/IUberState__Array.h>
#include <Modloader/app/structs/List_1_ICanActivatePressurePlate_.h>
#include <Modloader/app/structs/MoonReference_1_IStateTransitionHolder_.h>
#include <Modloader/app/structs/PressurePlateSetupHolder.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_PressurePlate__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PressurePlate__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PressurePlate__Fields_FWDDECL)
#include <Modloader/app/structs/PressurePlate__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PressurePlate__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
