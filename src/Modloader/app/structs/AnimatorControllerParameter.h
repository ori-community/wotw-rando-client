#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AnimatorControllerParameter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AnimatorControllerParameter_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimatorControllerParameter_DEFINED)
#include <Modloader/app/structs/AnimatorControllerParameter__Fields.h>
#if defined(IL2CPP_STRUCT_AnimatorControllerParameter__Fields_DEFINED)
#define IL2CPP_STRUCT_AnimatorControllerParameter_DEFINED
struct AnimatorControllerParameter__Class;
struct AnimatorControllerParameter {
    struct AnimatorControllerParameter__Class* klass;
    MonitorData* monitor;
    struct AnimatorControllerParameter__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AnimatorControllerParameter_FWDDECL)
#define IL2CPP_STRUCT_AnimatorControllerParameter_FWDDECL
#include <Modloader/app/structs/AnimatorControllerParameter__Class.h>
#endif
#undef IL2CPP_STRUCT_AnimatorControllerParameter_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimatorControllerParameter_DEFINED) && !defined(IL2CPP_STRUCT_AnimatorControllerParameter_FWDDECL)
#include <Modloader/app/structs/AnimatorControllerParameter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AnimatorControllerParameter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
