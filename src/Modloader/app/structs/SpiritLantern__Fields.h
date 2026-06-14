#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpiritLantern__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpiritLantern__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiritLantern__Fields_DEFINED)
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Color_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_SpiritLantern__Fields_DEFINED
struct ActionMethod;
struct MoonTimeline;
struct Renderer;
struct ParticleSystemRenderer;
struct SoundProvider;
struct GameObject;
struct Transform;
struct IDamageReciever__Array;
struct SpiritLantern__Fields {
    struct MonoBehaviour__Fields _;
    struct ActionMethod* OnAttackAction;
    struct MoonTimeline* OnAttackTimeline;
    struct Color OuterGlowBashColor;
    struct Color SparkParticlesBashColor;
    struct Color m_originalOuterGlowColor;
    struct Color m_originalSparkParticlesColor;
    struct Renderer* OuterGlow;
    struct ParticleSystemRenderer* SparkParticles;
    struct SoundProvider* OnBashSoundProvider;
    struct SoundProvider* OnEnterBashRangeSoundProvider;
    bool ActivatedOnStart;
    bool m_activated;
    struct GameObject* Energy;
    bool CanBeLeashed;
    struct Transform* m_transform;
    struct Transform* m_parentTransform;
    struct Color m_lastOuterGlowColor;
    struct Color m_lastSparkParticlesColor;
    bool m_isBashHighlighted;
    struct Vector3 m_localStartPosition;
    bool m_awakeCalled;
    float _CameraTargetWeight_k__BackingField;
    struct IDamageReciever__Array* m_damageReceivers;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpiritLantern__Fields_FWDDECL)
#define IL2CPP_STRUCT_SpiritLantern__Fields_FWDDECL
#include <Modloader/app/structs/ActionMethod.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/IDamageReciever__Array.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/ParticleSystemRenderer.h>
#include <Modloader/app/structs/Renderer.h>
#include <Modloader/app/structs/SoundProvider.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_SpiritLantern__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiritLantern__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SpiritLantern__Fields_FWDDECL)
#include <Modloader/app/structs/SpiritLantern__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpiritLantern__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
