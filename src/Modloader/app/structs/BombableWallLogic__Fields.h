#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BombableWallLogic__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BombableWallLogic__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BombableWallLogic__Fields_DEFINED)
#include <Modloader/app/structs/CheckpointFunctionality.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_CheckpointFunctionality_DEFINED)
#define IL2CPP_STRUCT_BombableWallLogic__Fields_DEFINED
struct SerializedBooleanUberState;
struct BombableWallAnimator;
struct DamageReceiver;
struct GasBallAttractionRect;
struct IUberState__Array;
struct List_1_UnityEngine_GameObject_;
struct IDamageReciever__Array;
struct BombableWallLogic__Fields {
    struct MonoBehaviour__Fields _;
    struct SerializedBooleanUberState* SerializedState;
    struct BombableWallAnimator* Animator;
    struct DamageReceiver* Hitbox;
    struct GasBallAttractionRect* GasballAttractionZone;
    bool CreateCheckpointOnDestruction;
    struct CheckpointFunctionality Checkpoint;
    struct IUberState__Array* m_affectingUberStates;
    struct List_1_UnityEngine_GameObject_* m_allTargets;
    struct IDamageReciever__Array* m_damageReceivers;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BombableWallLogic__Fields_FWDDECL)
#define IL2CPP_STRUCT_BombableWallLogic__Fields_FWDDECL
#include <Modloader/app/structs/BombableWallAnimator.h>
#include <Modloader/app/structs/DamageReceiver.h>
#include <Modloader/app/structs/GasBallAttractionRect.h>
#include <Modloader/app/structs/IDamageReciever__Array.h>
#include <Modloader/app/structs/IUberState__Array.h>
#include <Modloader/app/structs/List_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/SerializedBooleanUberState.h>
#endif
#undef IL2CPP_STRUCT_BombableWallLogic__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BombableWallLogic__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BombableWallLogic__Fields_FWDDECL)
#include <Modloader/app/structs/BombableWallLogic__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BombableWallLogic__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
