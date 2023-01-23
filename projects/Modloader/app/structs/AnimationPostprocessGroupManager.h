#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AnimationPostprocessGroupManager_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AnimationPostprocessGroupManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationPostprocessGroupManager_DEFINED)
#include <Modloader/app/structs/AnimationPostprocessGroupManager__Fields.h>
#if defined(IL2CPP_STRUCT_AnimationPostprocessGroupManager__Fields_DEFINED)
#define IL2CPP_STRUCT_AnimationPostprocessGroupManager_DEFINED
struct AnimationPostprocessGroupManager__Class;
struct AnimationPostprocessGroupManager {
    struct AnimationPostprocessGroupManager__Class* klass;
    MonitorData* monitor;
    struct AnimationPostprocessGroupManager__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AnimationPostprocessGroupManager_FWDDECL)
#define IL2CPP_STRUCT_AnimationPostprocessGroupManager_FWDDECL
#include <Modloader/app/structs/AnimationPostprocessGroupManager__Class.h>
#endif
#undef IL2CPP_STRUCT_AnimationPostprocessGroupManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationPostprocessGroupManager_DEFINED) && !defined(IL2CPP_STRUCT_AnimationPostprocessGroupManager_FWDDECL)
#include <Modloader/app/structs/AnimationPostprocessGroupManager.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AnimationPostprocessGroupManager.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
