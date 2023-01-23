#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AnimationPostprocessGroup_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AnimationPostprocessGroup_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationPostprocessGroup_DEFINED)
#include <Modloader/app/structs/AnimationPostprocessGroup__Fields.h>
#if defined(IL2CPP_STRUCT_AnimationPostprocessGroup__Fields_DEFINED)
#define IL2CPP_STRUCT_AnimationPostprocessGroup_DEFINED
struct AnimationPostprocessGroup__Class;
struct AnimationPostprocessGroup {
    struct AnimationPostprocessGroup__Class* klass;
    MonitorData* monitor;
    struct AnimationPostprocessGroup__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AnimationPostprocessGroup_FWDDECL)
#define IL2CPP_STRUCT_AnimationPostprocessGroup_FWDDECL
#include <Modloader/app/structs/AnimationPostprocessGroup__Class.h>
#endif
#undef IL2CPP_STRUCT_AnimationPostprocessGroup_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationPostprocessGroup_DEFINED) && !defined(IL2CPP_STRUCT_AnimationPostprocessGroup_FWDDECL)
#include <Modloader/app/structs/AnimationPostprocessGroup.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AnimationPostprocessGroup.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
