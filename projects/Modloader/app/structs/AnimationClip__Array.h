#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AnimationClip__Array_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AnimationClip__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationClip__Array_DEFINED)
#define IL2CPP_STRUCT_AnimationClip__Array_DEFINED
struct AnimationClip__Array__Class;
struct AnimationClip;
struct AnimationClip__Array {
    struct AnimationClip__Array__Class* klass;
    MonitorData* monitor;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    struct AnimationClip* vector[32];
};
#endif
#if !defined(IL2CPP_STRUCT_AnimationClip__Array_FWDDECL)
#define IL2CPP_STRUCT_AnimationClip__Array_FWDDECL
#include <Modloader/app/structs/AnimationClip.h>
#include <Modloader/app/structs/AnimationClip__Array__Class.h>
#endif
#undef IL2CPP_STRUCT_AnimationClip__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationClip__Array_DEFINED) && !defined(IL2CPP_STRUCT_AnimationClip__Array_FWDDECL)
#include <Modloader/app/structs/AnimationClip__Array.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AnimationClip__Array.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
