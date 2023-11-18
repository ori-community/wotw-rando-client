#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CameraChaseTargetSetAnimator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CameraChaseTargetSetAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraChaseTargetSetAnimator__Fields_DEFINED)
#include <Modloader/app/structs/TimelineEntity__Fields.h>
#if defined(IL2CPP_STRUCT_TimelineEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_CameraChaseTargetSetAnimator__Fields_DEFINED
struct MoonReference_1_UnityEngine_Transform_;
struct Transform;
struct CameraChaseTargetSetAnimator__Fields {
    struct TimelineEntity__Fields _;
    struct MoonReference_1_UnityEngine_Transform_* TargetTransform;
    bool MoveInstantly;
    bool Revert;
    struct Transform* m_originalTarget;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CameraChaseTargetSetAnimator__Fields_FWDDECL)
#define IL2CPP_STRUCT_CameraChaseTargetSetAnimator__Fields_FWDDECL
#include <Modloader/app/structs/MoonReference_1_UnityEngine_Transform_.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_CameraChaseTargetSetAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraChaseTargetSetAnimator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CameraChaseTargetSetAnimator__Fields_FWDDECL)
#include <Modloader/app/structs/CameraChaseTargetSetAnimator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CameraChaseTargetSetAnimator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
