#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DirectionalHitReactionPostprocess__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DirectionalHitReactionPostprocess__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DirectionalHitReactionPostprocess__Fields_DEFINED)
#include <Modloader/app/structs/AnimationPostprocess__Fields.h>
#include <Modloader/app/structs/DirectionalHitReactionPostprocessState__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_AnimationPostprocess__Fields_DEFINED) && defined(IL2CPP_STRUCT_DirectionalHitReactionPostprocessState__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_DirectionalHitReactionPostprocess__Fields_DEFINED
struct Transform;
struct AnimationCurve;
struct DirectionalHitReactionPostprocess__Fields {
    struct AnimationPostprocess__Fields _;
    int32_t PostprocessOrder;
    struct Transform* Joint;
    struct AnimationCurve* Curve;
    float Strength;
    DirectionalHitReactionPostprocessState__Enum m_state;

    struct Vector3 m_direction;
    float m_strengthMultiplier;
    float m_playTime;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DirectionalHitReactionPostprocess__Fields_FWDDECL)
#define IL2CPP_STRUCT_DirectionalHitReactionPostprocess__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_DirectionalHitReactionPostprocess__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DirectionalHitReactionPostprocess__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DirectionalHitReactionPostprocess__Fields_FWDDECL)
#include <Modloader/app/structs/DirectionalHitReactionPostprocess__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DirectionalHitReactionPostprocess__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
