#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ActivateAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ActivateAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_ActivateAction_DEFINED)
#include <Modloader/app/structs/ActivateAction__Fields.h>
#if defined(IL2CPP_STRUCT_ActivateAction__Fields_DEFINED)
#define IL2CPP_STRUCT_ActivateAction_DEFINED
struct ActivateAction__Class;
struct ActivateAction {
    struct ActivateAction__Class* klass;
    MonitorData* monitor;
    struct ActivateAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ActivateAction_FWDDECL)
#define IL2CPP_STRUCT_ActivateAction_FWDDECL
#include <Modloader/app/structs/ActivateAction__Class.h>
#endif
#undef IL2CPP_STRUCT_ActivateAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_ActivateAction_DEFINED) && !defined(IL2CPP_STRUCT_ActivateAction_FWDDECL)
#include <Modloader/app/structs/ActivateAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ActivateAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
