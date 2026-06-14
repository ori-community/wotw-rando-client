#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ShowAreaMessageAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ShowAreaMessageAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShowAreaMessageAction_DEFINED)
#include <Modloader/app/structs/ShowAreaMessageAction__Fields.h>
#if defined(IL2CPP_STRUCT_ShowAreaMessageAction__Fields_DEFINED)
#define IL2CPP_STRUCT_ShowAreaMessageAction_DEFINED
struct ShowAreaMessageAction__Class;
struct ShowAreaMessageAction {
    struct ShowAreaMessageAction__Class* klass;
    MonitorData* monitor;
    struct ShowAreaMessageAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ShowAreaMessageAction_FWDDECL)
#define IL2CPP_STRUCT_ShowAreaMessageAction_FWDDECL
#include <Modloader/app/structs/ShowAreaMessageAction__Class.h>
#endif
#undef IL2CPP_STRUCT_ShowAreaMessageAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShowAreaMessageAction_DEFINED) && !defined(IL2CPP_STRUCT_ShowAreaMessageAction_FWDDECL)
#include <Modloader/app/structs/ShowAreaMessageAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ShowAreaMessageAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
