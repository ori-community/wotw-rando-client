#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinGlowSpell_GlowLightInfo__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinGlowSpell_GlowLightInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinGlowSpell_GlowLightInfo__Fields_DEFINED)
#include <Modloader/app/structs/SeinGlowSpell_GlowLightState__Enum.h>
#include <Modloader/app/structs/SeinGlowSpell_GlowType__Enum.h>
#if defined(IL2CPP_STRUCT_SeinGlowSpell_GlowLightState__Enum_DEFINED) && defined(IL2CPP_STRUCT_SeinGlowSpell_GlowType__Enum_DEFINED)
#define IL2CPP_STRUCT_SeinGlowSpell_GlowLightInfo__Fields_DEFINED
struct AnimationCurve;
struct Transform;
struct __declspec(align(8)) SeinGlowSpell_GlowLightInfo__Fields {
    float m_minRadius;
    float m_maxRadius;
    float m_onDuration;
    struct AnimationCurve* m_turnOnCurve;
    struct AnimationCurve* m_turnOffCurve;
    SeinGlowSpell_GlowLightState__Enum m_state;

    float m_stateTime;
    float m_radius;
    SeinGlowSpell_GlowType__Enum m_glowType;

    struct Transform* m_effect;
    float m_intensity;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinGlowSpell_GlowLightInfo__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinGlowSpell_GlowLightInfo__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_SeinGlowSpell_GlowLightInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinGlowSpell_GlowLightInfo__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinGlowSpell_GlowLightInfo__Fields_FWDDECL)
#include <Modloader/app/structs/SeinGlowSpell_GlowLightInfo__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinGlowSpell_GlowLightInfo__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
