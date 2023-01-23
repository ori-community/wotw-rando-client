#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpiderlingLocomotion__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpiderlingLocomotion__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiderlingLocomotion__Fields_DEFINED)
#include <Modloader/app/structs/GroundEntityLocomotion__Fields.h>
#if defined(IL2CPP_STRUCT_GroundEntityLocomotion__Fields_DEFINED)
#define IL2CPP_STRUCT_SpiderlingLocomotion__Fields_DEFINED
struct SpiderlingLocomotion__Fields {
    struct GroundEntityLocomotion__Fields _;
    float SurfaceCheckOrigin;
    float SurfaceCheckLength;
    float m_continousRotationSpeed;
    float m_timeOnGround;
    float m_allowFallDelay;
    int32_t m_stickCastID;
    bool UseDelayedRaycast;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpiderlingLocomotion__Fields_FWDDECL)
#define IL2CPP_STRUCT_SpiderlingLocomotion__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_SpiderlingLocomotion__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiderlingLocomotion__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SpiderlingLocomotion__Fields_FWDDECL)
#include <Modloader/app/structs/SpiderlingLocomotion__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpiderlingLocomotion__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
