#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OnObjectStartRunAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OnObjectStartRunAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_OnObjectStartRunAction_DEFINED)
#include <Modloader/app/structs/OnObjectStartRunAction__Fields.h>
#if defined(IL2CPP_STRUCT_OnObjectStartRunAction__Fields_DEFINED)
#define IL2CPP_STRUCT_OnObjectStartRunAction_DEFINED
struct OnObjectStartRunAction__Class;
struct OnObjectStartRunAction {
    struct OnObjectStartRunAction__Class* klass;
    MonitorData* monitor;
    struct OnObjectStartRunAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_OnObjectStartRunAction_FWDDECL)
#define IL2CPP_STRUCT_OnObjectStartRunAction_FWDDECL
#include <Modloader/app/structs/OnObjectStartRunAction__Class.h>
#endif
#undef IL2CPP_STRUCT_OnObjectStartRunAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_OnObjectStartRunAction_DEFINED) && !defined(IL2CPP_STRUCT_OnObjectStartRunAction_FWDDECL)
#include <Modloader/app/structs/OnObjectStartRunAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OnObjectStartRunAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
