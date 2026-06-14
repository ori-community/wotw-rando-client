#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SetColosseumTimeAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SetColosseumTimeAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetColosseumTimeAction_DEFINED)
#include <Modloader/app/structs/SetColosseumTimeAction__Fields.h>
#if defined(IL2CPP_STRUCT_SetColosseumTimeAction__Fields_DEFINED)
#define IL2CPP_STRUCT_SetColosseumTimeAction_DEFINED
struct SetColosseumTimeAction__Class;
struct SetColosseumTimeAction {
    struct SetColosseumTimeAction__Class* klass;
    MonitorData* monitor;
    struct SetColosseumTimeAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SetColosseumTimeAction_FWDDECL)
#define IL2CPP_STRUCT_SetColosseumTimeAction_FWDDECL
#include <Modloader/app/structs/SetColosseumTimeAction__Class.h>
#endif
#undef IL2CPP_STRUCT_SetColosseumTimeAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetColosseumTimeAction_DEFINED) && !defined(IL2CPP_STRUCT_SetColosseumTimeAction_FWDDECL)
#include <Modloader/app/structs/SetColosseumTimeAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SetColosseumTimeAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
