#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InstantiateAnimator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InstantiateAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InstantiateAnimator__Fields_DEFINED)
#include <Modloader/app/structs/PrefabReferenceType__Enum.h>
#include <Modloader/app/structs/TimelineEntity__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_TimelineEntity__Fields_DEFINED) && defined(IL2CPP_STRUCT_PrefabReferenceType__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_InstantiateAnimator__Fields_DEFINED
struct MoonReference_1_UnityEngine_GameObject_;
struct MoonEffectWispsRoot;
struct MoonReference_1_UnityEngine_Transform_;
struct MoonBool;
struct InstantiateAnimator__Fields {
    struct TimelineEntity__Fields _;
    PrefabReferenceType__Enum PrefabType;

    struct MoonReference_1_UnityEngine_GameObject_* Prefab;
    struct MoonEffectWispsRoot* MoonEffect;
    int32_t PrewarmAmount;
    struct MoonReference_1_UnityEngine_Transform_* InstantiationLocation;
    struct Vector3 InstantiationPosition;
    struct MoonBool* ShouldMirror;
    bool FollowLocationTransform;
    bool UseConstant;
    bool ApplyRotation;
    bool ProjectOnGround;
    bool ProjectYOnly;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InstantiateAnimator__Fields_FWDDECL)
#define IL2CPP_STRUCT_InstantiateAnimator__Fields_FWDDECL
#include <Modloader/app/structs/MoonBool.h>
#include <Modloader/app/structs/MoonEffectWispsRoot.h>
#include <Modloader/app/structs/MoonReference_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/MoonReference_1_UnityEngine_Transform_.h>
#endif
#undef IL2CPP_STRUCT_InstantiateAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InstantiateAnimator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_InstantiateAnimator__Fields_FWDDECL)
#include <Modloader/app/structs/InstantiateAnimator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InstantiateAnimator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
