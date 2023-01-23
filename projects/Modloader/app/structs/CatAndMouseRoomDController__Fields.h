#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CatAndMouseRoomDController__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CatAndMouseRoomDController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CatAndMouseRoomDController__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_CatAndMouseRoomDController__Fields_DEFINED
struct BaseAnimator;
struct Renderer;
struct AnimationCurve;
struct SoundProvider;
struct ActionMethod;
struct CatAndMouseRoomDController__Fields {
    struct MonoBehaviour__Fields _;
    struct BaseAnimator* AttackSpriteAnimator;
    struct Renderer* KuroSprite;
    struct AnimationCurve* PositionXToCameraWeightCurve;
    struct AnimationCurve* PositionXToPlayerWeightCurve;
    struct AnimationCurve* PositionYToCameraWeightCurve;
    struct Vector3 PositionToCameraOffset;
    struct SoundProvider* AttackSoundProvider;
    struct Vector3 m_originalPosition;
    bool m_runningSequence;
    float m_time;
    float CenterLayerTime;
    float SequenceTime;
    float MaxPositionX;
    float MaxPositionEscapedX;
    struct ActionMethod* FinishAction;
    struct Vector3 m_playerPosition;
    bool m_escaped;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CatAndMouseRoomDController__Fields_FWDDECL)
#define IL2CPP_STRUCT_CatAndMouseRoomDController__Fields_FWDDECL
#include <Modloader/app/structs/ActionMethod.h>
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/BaseAnimator.h>
#include <Modloader/app/structs/Renderer.h>
#include <Modloader/app/structs/SoundProvider.h>
#endif
#undef IL2CPP_STRUCT_CatAndMouseRoomDController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CatAndMouseRoomDController__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CatAndMouseRoomDController__Fields_FWDDECL)
#include <Modloader/app/structs/CatAndMouseRoomDController__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CatAndMouseRoomDController__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
