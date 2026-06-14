#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PerformSkipAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PerformSkipAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_PerformSkipAction_DEFINED)
#include <Modloader/app/structs/PerformSkipAction__Fields.h>
#if defined(IL2CPP_STRUCT_PerformSkipAction__Fields_DEFINED)
#define IL2CPP_STRUCT_PerformSkipAction_DEFINED
struct PerformSkipAction__Class;
struct PerformSkipAction {
    struct PerformSkipAction__Class* klass;
    MonitorData* monitor;
    struct PerformSkipAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PerformSkipAction_FWDDECL)
#define IL2CPP_STRUCT_PerformSkipAction_FWDDECL
#include <Modloader/app/structs/PerformSkipAction__Class.h>
#endif
#undef IL2CPP_STRUCT_PerformSkipAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_PerformSkipAction_DEFINED) && !defined(IL2CPP_STRUCT_PerformSkipAction_FWDDECL)
#include <Modloader/app/structs/PerformSkipAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PerformSkipAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
