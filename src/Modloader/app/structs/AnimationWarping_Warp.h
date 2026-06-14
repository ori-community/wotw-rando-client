#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AnimationWarping_Warp_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AnimationWarping_Warp_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationWarping_Warp_DEFINED)
#include <Modloader/app/structs/FullBodyBipedEffector__Enum.h>
#if defined(IL2CPP_STRUCT_FullBodyBipedEffector__Enum_DEFINED)
#define IL2CPP_STRUCT_AnimationWarping_Warp_DEFINED
struct String;
struct AnimationCurve;
struct Transform;
struct AnimationWarping_Warp {
    int32_t animationLayer;
    struct String* animationState;
    struct AnimationCurve* weightCurve;
    struct Transform* warpFrom;
    struct Transform* warpTo;
    FullBodyBipedEffector__Enum effector;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AnimationWarping_Warp_FWDDECL)
#define IL2CPP_STRUCT_AnimationWarping_Warp_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_AnimationWarping_Warp_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationWarping_Warp_DEFINED) && !defined(IL2CPP_STRUCT_AnimationWarping_Warp_FWDDECL)
#include <Modloader/app/structs/AnimationWarping_Warp.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AnimationWarping_Warp.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
