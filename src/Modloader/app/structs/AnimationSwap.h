#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AnimationSwap_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AnimationSwap_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationSwap_DEFINED)
#include <Modloader/app/structs/AnimationSwap__Fields.h>
#if defined(IL2CPP_STRUCT_AnimationSwap__Fields_DEFINED)
#define IL2CPP_STRUCT_AnimationSwap_DEFINED
struct AnimationSwap__Class;
struct AnimationSwap {
    struct AnimationSwap__Class* klass;
    MonitorData* monitor;
    struct AnimationSwap__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AnimationSwap_FWDDECL)
#define IL2CPP_STRUCT_AnimationSwap_FWDDECL
#include <Modloader/app/structs/AnimationSwap__Class.h>
#endif
#undef IL2CPP_STRUCT_AnimationSwap_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationSwap_DEFINED) && !defined(IL2CPP_STRUCT_AnimationSwap_FWDDECL)
#include <Modloader/app/structs/AnimationSwap.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AnimationSwap.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
