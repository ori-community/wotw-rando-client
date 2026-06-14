#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AnimatorAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AnimatorAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimatorAction_DEFINED)
#include <Modloader/app/structs/AnimatorAction__Fields.h>
#if defined(IL2CPP_STRUCT_AnimatorAction__Fields_DEFINED)
#define IL2CPP_STRUCT_AnimatorAction_DEFINED
struct AnimatorAction__Class;
struct AnimatorAction {
    struct AnimatorAction__Class* klass;
    MonitorData* monitor;
    struct AnimatorAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AnimatorAction_FWDDECL)
#define IL2CPP_STRUCT_AnimatorAction_FWDDECL
#include <Modloader/app/structs/AnimatorAction__Class.h>
#endif
#undef IL2CPP_STRUCT_AnimatorAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimatorAction_DEFINED) && !defined(IL2CPP_STRUCT_AnimatorAction_FWDDECL)
#include <Modloader/app/structs/AnimatorAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AnimatorAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
