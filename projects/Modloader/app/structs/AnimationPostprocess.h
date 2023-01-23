#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AnimationPostprocess_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AnimationPostprocess_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationPostprocess_DEFINED)
#include <Modloader/app/structs/AnimationPostprocess__Fields.h>
#if defined(IL2CPP_STRUCT_AnimationPostprocess__Fields_DEFINED)
#define IL2CPP_STRUCT_AnimationPostprocess_DEFINED
struct AnimationPostprocess__Class;
struct AnimationPostprocess {
    struct AnimationPostprocess__Class* klass;
    MonitorData* monitor;
    struct AnimationPostprocess__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AnimationPostprocess_FWDDECL)
#define IL2CPP_STRUCT_AnimationPostprocess_FWDDECL
#include <Modloader/app/structs/AnimationPostprocess__Class.h>
#endif
#undef IL2CPP_STRUCT_AnimationPostprocess_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationPostprocess_DEFINED) && !defined(IL2CPP_STRUCT_AnimationPostprocess_FWDDECL)
#include <Modloader/app/structs/AnimationPostprocess.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AnimationPostprocess.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
