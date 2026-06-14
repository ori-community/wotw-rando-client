#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AnimationSample_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AnimationSample_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationSample_DEFINED)
#include <Modloader/app/structs/AnimationSample__Fields.h>
#if defined(IL2CPP_STRUCT_AnimationSample__Fields_DEFINED)
#define IL2CPP_STRUCT_AnimationSample_DEFINED
struct AnimationSample__Class;
struct AnimationSample {
    struct AnimationSample__Class* klass;
    MonitorData* monitor;
    struct AnimationSample__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AnimationSample_FWDDECL)
#define IL2CPP_STRUCT_AnimationSample_FWDDECL
#include <Modloader/app/structs/AnimationSample__Class.h>
#endif
#undef IL2CPP_STRUCT_AnimationSample_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationSample_DEFINED) && !defined(IL2CPP_STRUCT_AnimationSample_FWDDECL)
#include <Modloader/app/structs/AnimationSample.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AnimationSample.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
