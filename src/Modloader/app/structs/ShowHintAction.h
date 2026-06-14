#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ShowHintAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ShowHintAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShowHintAction_DEFINED)
#include <Modloader/app/structs/ShowHintAction__Fields.h>
#if defined(IL2CPP_STRUCT_ShowHintAction__Fields_DEFINED)
#define IL2CPP_STRUCT_ShowHintAction_DEFINED
struct ShowHintAction__Class;
struct ShowHintAction {
    struct ShowHintAction__Class* klass;
    MonitorData* monitor;
    struct ShowHintAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ShowHintAction_FWDDECL)
#define IL2CPP_STRUCT_ShowHintAction_FWDDECL
#include <Modloader/app/structs/ShowHintAction__Class.h>
#endif
#undef IL2CPP_STRUCT_ShowHintAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShowHintAction_DEFINED) && !defined(IL2CPP_STRUCT_ShowHintAction_FWDDECL)
#include <Modloader/app/structs/ShowHintAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ShowHintAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
