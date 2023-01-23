#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ActivateOriAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ActivateOriAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_ActivateOriAction_DEFINED)
#include <Modloader/app/structs/ActivateOriAction__Fields.h>
#if defined(IL2CPP_STRUCT_ActivateOriAction__Fields_DEFINED)
#define IL2CPP_STRUCT_ActivateOriAction_DEFINED
struct ActivateOriAction__Class;
struct ActivateOriAction {
    struct ActivateOriAction__Class* klass;
    MonitorData* monitor;
    struct ActivateOriAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ActivateOriAction_FWDDECL)
#define IL2CPP_STRUCT_ActivateOriAction_FWDDECL
#include <Modloader/app/structs/ActivateOriAction__Class.h>
#endif
#undef IL2CPP_STRUCT_ActivateOriAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_ActivateOriAction_DEFINED) && !defined(IL2CPP_STRUCT_ActivateOriAction_FWDDECL)
#include <Modloader/app/structs/ActivateOriAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ActivateOriAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
