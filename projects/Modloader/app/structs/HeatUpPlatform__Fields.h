#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HeatUpPlatform__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HeatUpPlatform__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HeatUpPlatform__Fields_DEFINED)
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/HeatUpPlatform_State__Enum.h>
#include <Modloader/app/structs/SaveSerialize__Fields.h>
#if defined(IL2CPP_STRUCT_SaveSerialize__Fields_DEFINED) && defined(IL2CPP_STRUCT_HeatUpPlatform_State__Enum_DEFINED) && defined(IL2CPP_STRUCT_Color_DEFINED)
#define IL2CPP_STRUCT_HeatUpPlatform__Fields_DEFINED
struct Transform;
struct SoundSource;
struct Renderer;
struct AnimationCurve;
struct HeatUpPlatform__Fields {
    struct SaveSerialize__Fields _;
    struct Transform* m_transform;
    struct SoundSource* ActivateSoundSource;
    struct SoundSource* DeacivateSoundSource;
    bool Activated;
    bool m_beingTriggered;
    HeatUpPlatform_State__Enum CurrentState;

    float m_stateCurrentTime;
    float m_heat;
    struct Renderer* Target;
    struct Color ColdColor;
    struct Color HotColor;
    struct AnimationCurve* HeatCurve;
    float Damage;
    float HeatingDuration;
    float CoolingDuration;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HeatUpPlatform__Fields_FWDDECL)
#define IL2CPP_STRUCT_HeatUpPlatform__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/Renderer.h>
#include <Modloader/app/structs/SoundSource.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_HeatUpPlatform__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HeatUpPlatform__Fields_DEFINED) && !defined(IL2CPP_STRUCT_HeatUpPlatform__Fields_FWDDECL)
#include <Modloader/app/structs/HeatUpPlatform__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HeatUpPlatform__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
