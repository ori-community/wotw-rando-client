#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AnimationMontageEventContext_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AnimationMontageEventContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationMontageEventContext_DEFINED)
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_AnimationMontageEventContext_DEFINED
struct AnimationMontageEventContext {
    struct Vector3 Position;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AnimationMontageEventContext_FWDDECL)
#define IL2CPP_STRUCT_AnimationMontageEventContext_FWDDECL
#endif
#undef IL2CPP_STRUCT_AnimationMontageEventContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationMontageEventContext_DEFINED) && !defined(IL2CPP_STRUCT_AnimationMontageEventContext_FWDDECL)
#include <Modloader/app/structs/AnimationMontageEventContext.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AnimationMontageEventContext.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
