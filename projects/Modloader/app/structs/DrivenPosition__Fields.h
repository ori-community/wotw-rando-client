#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DrivenPosition__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DrivenPosition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DrivenPosition__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Nullable_1_UnityEngine_Vector3_.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_UnityEngine_Vector3__DEFINED)
#define IL2CPP_STRUCT_DrivenPosition__Fields_DEFINED
struct MoonReference_1_UnityEngine_Transform_;
struct MoonVector3;
struct MoonReference_1_ITweenLerpInputProvider_;
struct ITweenLerpInputProvider;
struct LerpVector3Tweenable;
struct Transform;
struct DrivenPosition__Fields {
    struct MonoBehaviour__Fields _;
    bool Active;
    struct MoonReference_1_UnityEngine_Transform_* TargetTransform;
    struct MoonVector3* InitialPosition;
    struct MoonVector3* EndPosition;
    struct MoonReference_1_ITweenLerpInputProvider_* InputProvider;
    struct ITweenLerpInputProvider* m_resolvedInputProvider;
    struct LerpVector3Tweenable* m_tweenPosition;
    struct Transform* m_resolvedTarget;
    struct Nullable_1_UnityEngine_Vector3_ m_resolvedInitialPosition;
    struct Nullable_1_UnityEngine_Vector3_ m_resolvedEndPosition;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DrivenPosition__Fields_FWDDECL)
#define IL2CPP_STRUCT_DrivenPosition__Fields_FWDDECL
#include <Modloader/app/structs/ITweenLerpInputProvider.h>
#include <Modloader/app/structs/LerpVector3Tweenable.h>
#include <Modloader/app/structs/MoonReference_1_ITweenLerpInputProvider_.h>
#include <Modloader/app/structs/MoonReference_1_UnityEngine_Transform_.h>
#include <Modloader/app/structs/MoonVector3.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_DrivenPosition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DrivenPosition__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DrivenPosition__Fields_FWDDECL)
#include <Modloader/app/structs/DrivenPosition__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DrivenPosition__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
