#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BowArrowTrajectory__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BowArrowTrajectory__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BowArrowTrajectory__Fields_DEFINED)
#include <Modloader/app/structs/LayerMask.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_LayerMask_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_BowArrowTrajectory__Fields_DEFINED
struct LineRenderer;
struct LegacyTransparencyAnimator;
struct BowArrowTrajectory__Fields {
    struct MonoBehaviour__Fields _;
    struct Vector2 StartPosition;
    struct Vector2 StartDirection;
    struct LineRenderer* LineRenderer;
    struct LegacyTransparencyAnimator* FadeIn;
    struct LayerMask LayerMask;
    float MaxLength;
    struct Vector3 m_endPosition;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BowArrowTrajectory__Fields_FWDDECL)
#define IL2CPP_STRUCT_BowArrowTrajectory__Fields_FWDDECL
#include <Modloader/app/structs/LegacyTransparencyAnimator.h>
#include <Modloader/app/structs/LineRenderer.h>
#endif
#undef IL2CPP_STRUCT_BowArrowTrajectory__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BowArrowTrajectory__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BowArrowTrajectory__Fields_FWDDECL)
#include <Modloader/app/structs/BowArrowTrajectory__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BowArrowTrajectory__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
