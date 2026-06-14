#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PerformingAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PerformingAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_PerformingAction_DEFINED)
#include <Modloader/app/structs/PerformingAction__Fields.h>
#if defined(IL2CPP_STRUCT_PerformingAction__Fields_DEFINED)
#define IL2CPP_STRUCT_PerformingAction_DEFINED
struct PerformingAction__Class;
struct PerformingAction {
    struct PerformingAction__Class* klass;
    MonitorData* monitor;
    struct PerformingAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PerformingAction_FWDDECL)
#define IL2CPP_STRUCT_PerformingAction_FWDDECL
#include <Modloader/app/structs/PerformingAction__Class.h>
#endif
#undef IL2CPP_STRUCT_PerformingAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_PerformingAction_DEFINED) && !defined(IL2CPP_STRUCT_PerformingAction_FWDDECL)
#include <Modloader/app/structs/PerformingAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PerformingAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
