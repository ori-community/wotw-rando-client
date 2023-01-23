#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonTrailUpdateContext_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonTrailUpdateContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTrailUpdateContext_DEFINED)
#include <Modloader/app/structs/Matrix4x4.h>
#include <Modloader/app/structs/MoonTrailUpdateFlags__Enum.h>
#include <Modloader/app/structs/Nullable_1_UnityEngine_Vector3_.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_UnityEngine_Vector3__DEFINED) && defined(IL2CPP_STRUCT_Matrix4x4_DEFINED) && defined(IL2CPP_STRUCT_MoonTrailUpdateFlags__Enum_DEFINED)
#define IL2CPP_STRUCT_MoonTrailUpdateContext_DEFINED
struct TrailPathProvider;
struct MoonTrailUpdateContext {
    float DeltaTime;
    float InitialThickness;
    struct Vector3 Position;
    struct Vector3 TargetPosition;
    struct Vector3 MainTargetToSecondaryTargetDirection;
    struct Vector3 TargetNormal;
    struct Nullable_1_UnityEngine_Vector3_ CameraPosition;
    struct Matrix4x4 WorldToLocal;
    struct TrailPathProvider* FirstTargetPathProvider;
    struct TrailPathProvider* SecondTargetPathProvider;
    struct Matrix4x4 FirstTargetPathProviderWorldToLocal;
    struct Matrix4x4 SecondTargetPathProviderWorldToLocal;
    MoonTrailUpdateFlags__Enum Flags;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonTrailUpdateContext_FWDDECL)
#define IL2CPP_STRUCT_MoonTrailUpdateContext_FWDDECL
#include <Modloader/app/structs/TrailPathProvider.h>
#endif
#undef IL2CPP_STRUCT_MoonTrailUpdateContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTrailUpdateContext_DEFINED) && !defined(IL2CPP_STRUCT_MoonTrailUpdateContext_FWDDECL)
#include <Modloader/app/structs/MoonTrailUpdateContext.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonTrailUpdateContext.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
