#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TransformOffsetter__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TransformOffsetter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TransformOffsetter__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_TransformOffsetter__Fields_DEFINED
struct MoonReference_1_Moon_Timeline_MoonTimeline_;
struct MoonReference_1_UnityEngine_Transform_;
struct TransformOffsetter__Fields {
    struct MonoBehaviour__Fields _;
    struct MoonReference_1_Moon_Timeline_MoonTimeline_* Timeline;
    struct MoonReference_1_UnityEngine_Transform_* ObjectToOffset;
    struct MoonReference_1_UnityEngine_Transform_* ObjectA;
    struct MoonReference_1_UnityEngine_Transform_* ObjectB;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TransformOffsetter__Fields_FWDDECL)
#define IL2CPP_STRUCT_TransformOffsetter__Fields_FWDDECL
#include <Modloader/app/structs/MoonReference_1_Moon_Timeline_MoonTimeline_.h>
#include <Modloader/app/structs/MoonReference_1_UnityEngine_Transform_.h>
#endif
#undef IL2CPP_STRUCT_TransformOffsetter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TransformOffsetter__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TransformOffsetter__Fields_FWDDECL)
#include <Modloader/app/structs/TransformOffsetter__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TransformOffsetter__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
