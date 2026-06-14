#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LegacyUberTransformFollowAnimator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LegacyUberTransformFollowAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyUberTransformFollowAnimator__Fields_DEFINED)
#include <Modloader/app/structs/BaseAnimator__Fields.h>
#include <Modloader/app/structs/LegacyActivateAnimator_TargetMode__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_BaseAnimator__Fields_DEFINED) && defined(IL2CPP_STRUCT_LegacyActivateAnimator_TargetMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_LegacyUberTransformFollowAnimator__Fields_DEFINED
struct LegacyUberTransformFollow;
struct String;
struct List_1_UnityEngine_Transform_;
struct LegacyUberTransformFollowAnimator__Fields {
    struct BaseAnimator__Fields _;
    struct LegacyUberTransformFollow* UberTransformFollow;
    LegacyActivateAnimator_TargetMode__Enum TargetMode;

    struct String* SocketPath;
    struct List_1_UnityEngine_Transform_* FollowTargets;
    bool AdditiveTargets;
    float ClipDuration;
    struct List_1_UnityEngine_Transform_* m_originalTargets;
    struct Vector3 m_originalPosition;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LegacyUberTransformFollowAnimator__Fields_FWDDECL)
#define IL2CPP_STRUCT_LegacyUberTransformFollowAnimator__Fields_FWDDECL
#include <Modloader/app/structs/LegacyUberTransformFollow.h>
#include <Modloader/app/structs/List_1_UnityEngine_Transform_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_LegacyUberTransformFollowAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyUberTransformFollowAnimator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LegacyUberTransformFollowAnimator__Fields_FWDDECL)
#include <Modloader/app/structs/LegacyUberTransformFollowAnimator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LegacyUberTransformFollowAnimator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
