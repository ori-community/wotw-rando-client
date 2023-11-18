#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayAnimatorAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayAnimatorAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayAnimatorAction_DEFINED)
#include <Modloader/app/structs/PlayAnimatorAction__Fields.h>
#if defined(IL2CPP_STRUCT_PlayAnimatorAction__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayAnimatorAction_DEFINED
struct PlayAnimatorAction__Class;
struct PlayAnimatorAction {
    struct PlayAnimatorAction__Class* klass;
    MonitorData* monitor;
    struct PlayAnimatorAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayAnimatorAction_FWDDECL)
#define IL2CPP_STRUCT_PlayAnimatorAction_FWDDECL
#include <Modloader/app/structs/PlayAnimatorAction__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayAnimatorAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayAnimatorAction_DEFINED) && !defined(IL2CPP_STRUCT_PlayAnimatorAction_FWDDECL)
#include <Modloader/app/structs/PlayAnimatorAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayAnimatorAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
