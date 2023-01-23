#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AnimationListSwap_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AnimationListSwap_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationListSwap_DEFINED)
#include <Modloader/app/structs/AnimationListSwap__Fields.h>
#if defined(IL2CPP_STRUCT_AnimationListSwap__Fields_DEFINED)
#define IL2CPP_STRUCT_AnimationListSwap_DEFINED
struct AnimationListSwap__Class;
struct AnimationListSwap {
    struct AnimationListSwap__Class* klass;
    MonitorData* monitor;
    struct AnimationListSwap__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AnimationListSwap_FWDDECL)
#define IL2CPP_STRUCT_AnimationListSwap_FWDDECL
#include <Modloader/app/structs/AnimationListSwap__Class.h>
#endif
#undef IL2CPP_STRUCT_AnimationListSwap_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationListSwap_DEFINED) && !defined(IL2CPP_STRUCT_AnimationListSwap_FWDDECL)
#include <Modloader/app/structs/AnimationListSwap.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AnimationListSwap.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
