#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AnimationStream_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AnimationStream_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationStream_DEFINED)
#define IL2CPP_STRUCT_AnimationStream_DEFINED
struct AnimationStream {
    uint32_t m_AnimatorBindingsVersion;
    void* constant;
    void* input;
    void* output;
    void* workspace;
    void* inputStreamAccessor;
    void* animationHandleBinder;
};
#endif
#if !defined(IL2CPP_STRUCT_AnimationStream_FWDDECL)
#define IL2CPP_STRUCT_AnimationStream_FWDDECL
#endif
#undef IL2CPP_STRUCT_AnimationStream_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationStream_DEFINED) && !defined(IL2CPP_STRUCT_AnimationStream_FWDDECL)
#include <Modloader/app/structs/AnimationStream.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AnimationStream.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
