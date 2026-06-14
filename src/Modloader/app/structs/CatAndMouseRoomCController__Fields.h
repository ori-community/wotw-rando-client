#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CatAndMouseRoomCController__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CatAndMouseRoomCController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CatAndMouseRoomCController__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_CatAndMouseRoomCController__Fields_DEFINED
struct BaseAnimator;
struct Renderer;
struct AnimationCurve;
struct SoundProvider;
struct ActionMethod;
struct CatAndMouseRoomCController__Fields {
    struct MonoBehaviour__Fields _;
    struct BaseAnimator* AttackSpriteSurfaceAnimator;
    struct BaseAnimator* AttackSpriteAnimator;
    struct Renderer* KuroSprite;
    struct Renderer* KuroSurfaceSprite;
    struct AnimationCurve* PositionToCameraWeightCurve;
    struct Vector3 PositionToCameraOffset;
    struct SoundProvider* AttackSoundProvider;
    struct Vector3 m_originalPosition;
    bool m_runningSequence;
    float m_time;
    float CenterLayerTime;
    float SequenceTime;
    float MaxVertical;
    float SurfaceTime;
    bool m_kuroWillFlyOverSurface;
    struct ActionMethod* FinishAction;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CatAndMouseRoomCController__Fields_FWDDECL)
#define IL2CPP_STRUCT_CatAndMouseRoomCController__Fields_FWDDECL
#include <Modloader/app/structs/ActionMethod.h>
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/BaseAnimator.h>
#include <Modloader/app/structs/Renderer.h>
#include <Modloader/app/structs/SoundProvider.h>
#endif
#undef IL2CPP_STRUCT_CatAndMouseRoomCController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CatAndMouseRoomCController__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CatAndMouseRoomCController__Fields_FWDDECL)
#include <Modloader/app/structs/CatAndMouseRoomCController__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CatAndMouseRoomCController__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
