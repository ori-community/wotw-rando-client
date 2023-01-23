#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpikeSlugLocomotion__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpikeSlugLocomotion__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpikeSlugLocomotion__Fields_DEFINED)
#include <Modloader/app/structs/GroundEntityLocomotion__Fields.h>
#if defined(IL2CPP_STRUCT_GroundEntityLocomotion__Fields_DEFINED)
#define IL2CPP_STRUCT_SpikeSlugLocomotion__Fields_DEFINED
struct FloatAnimationParameter;
struct Transform;
struct Event_1;
struct SpikeSlugLocomotion__Fields {
    struct GroundEntityLocomotion__Fields _;
    float MaxSpiningSpeed;
    struct FloatAnimationParameter* SpinToFallBlend;
    float SpiningSpeedDividerForAnimBlend;
    struct Transform* SpinTransform;
    float SurfaceCheckOrigin;
    float SurfaceCheckLenght;
    float FallDelay;
    struct Event_1* FlyAwaySpinSound;
    float m_continousRotationSpeed;
    float m_timeOnGround;
    float m_allowFallDelay;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpikeSlugLocomotion__Fields_FWDDECL)
#define IL2CPP_STRUCT_SpikeSlugLocomotion__Fields_FWDDECL
#include <Modloader/app/structs/Event_1.h>
#include <Modloader/app/structs/FloatAnimationParameter.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_SpikeSlugLocomotion__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpikeSlugLocomotion__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SpikeSlugLocomotion__Fields_FWDDECL)
#include <Modloader/app/structs/SpikeSlugLocomotion__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpikeSlugLocomotion__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
