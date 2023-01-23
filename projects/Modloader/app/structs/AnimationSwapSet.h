#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AnimationSwapSet_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AnimationSwapSet_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationSwapSet_DEFINED)
#include <Modloader/app/structs/AnimationSwapSet__Fields.h>
#if defined(IL2CPP_STRUCT_AnimationSwapSet__Fields_DEFINED)
#define IL2CPP_STRUCT_AnimationSwapSet_DEFINED
struct AnimationSwapSet__Class;
struct AnimationSwapSet {
    struct AnimationSwapSet__Class* klass;
    MonitorData* monitor;
    struct AnimationSwapSet__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AnimationSwapSet_FWDDECL)
#define IL2CPP_STRUCT_AnimationSwapSet_FWDDECL
#include <Modloader/app/structs/AnimationSwapSet__Class.h>
#endif
#undef IL2CPP_STRUCT_AnimationSwapSet_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationSwapSet_DEFINED) && !defined(IL2CPP_STRUCT_AnimationSwapSet_FWDDECL)
#include <Modloader/app/structs/AnimationSwapSet.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AnimationSwapSet.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
