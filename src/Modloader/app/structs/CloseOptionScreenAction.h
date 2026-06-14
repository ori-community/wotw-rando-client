#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CloseOptionScreenAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CloseOptionScreenAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_CloseOptionScreenAction_DEFINED)
#include <Modloader/app/structs/CloseOptionScreenAction__Fields.h>
#if defined(IL2CPP_STRUCT_CloseOptionScreenAction__Fields_DEFINED)
#define IL2CPP_STRUCT_CloseOptionScreenAction_DEFINED
struct CloseOptionScreenAction__Class;
struct CloseOptionScreenAction {
    struct CloseOptionScreenAction__Class* klass;
    MonitorData* monitor;
    struct CloseOptionScreenAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CloseOptionScreenAction_FWDDECL)
#define IL2CPP_STRUCT_CloseOptionScreenAction_FWDDECL
#include <Modloader/app/structs/CloseOptionScreenAction__Class.h>
#endif
#undef IL2CPP_STRUCT_CloseOptionScreenAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_CloseOptionScreenAction_DEFINED) && !defined(IL2CPP_STRUCT_CloseOptionScreenAction_FWDDECL)
#include <Modloader/app/structs/CloseOptionScreenAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CloseOptionScreenAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
