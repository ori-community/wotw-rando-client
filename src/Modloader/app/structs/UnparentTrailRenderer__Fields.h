#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UnparentTrailRenderer__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UnparentTrailRenderer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnparentTrailRenderer__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_UnparentTrailRenderer__Fields_DEFINED
struct Transform;
struct LegacyTransparencyAnimator;
struct TrailRenderer;
struct UnparentTrailRenderer__Fields {
    struct MonoBehaviour__Fields _;
    struct Transform* m_targetTransform;
    struct Vector3 m_localPosition;
    float DestroyDelayAfterTarget;
    struct LegacyTransparencyAnimator* Fade;
    float m_time;
    bool m_didDestroy;
    struct TrailRenderer* m_trailRenderer;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UnparentTrailRenderer__Fields_FWDDECL)
#define IL2CPP_STRUCT_UnparentTrailRenderer__Fields_FWDDECL
#include <Modloader/app/structs/LegacyTransparencyAnimator.h>
#include <Modloader/app/structs/TrailRenderer.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_UnparentTrailRenderer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnparentTrailRenderer__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UnparentTrailRenderer__Fields_FWDDECL)
#include <Modloader/app/structs/UnparentTrailRenderer__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UnparentTrailRenderer__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
