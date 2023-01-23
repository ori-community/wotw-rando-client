#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AnimatedCritter__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AnimatedCritter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimatedCritter__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_AnimatedCritter__Fields_DEFINED
struct MoonTimeline;
struct Transform;
struct AnimatedCritter__Fields {
    struct MonoBehaviour__Fields _;
    float m_distance;
    struct MoonTimeline* Timeline;
    struct Transform* m_transform;
    struct Vector3 m_position;
    float m_effectiveDistance;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AnimatedCritter__Fields_FWDDECL)
#define IL2CPP_STRUCT_AnimatedCritter__Fields_FWDDECL
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_AnimatedCritter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimatedCritter__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AnimatedCritter__Fields_FWDDECL)
#include <Modloader/app/structs/AnimatedCritter__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AnimatedCritter__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
