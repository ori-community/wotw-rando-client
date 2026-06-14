#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PerformBackOutAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PerformBackOutAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_PerformBackOutAction_DEFINED)
#include <Modloader/app/structs/PerformBackOutAction__Fields.h>
#if defined(IL2CPP_STRUCT_PerformBackOutAction__Fields_DEFINED)
#define IL2CPP_STRUCT_PerformBackOutAction_DEFINED
struct PerformBackOutAction__Class;
struct PerformBackOutAction {
    struct PerformBackOutAction__Class* klass;
    MonitorData* monitor;
    struct PerformBackOutAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PerformBackOutAction_FWDDECL)
#define IL2CPP_STRUCT_PerformBackOutAction_FWDDECL
#include <Modloader/app/structs/PerformBackOutAction__Class.h>
#endif
#undef IL2CPP_STRUCT_PerformBackOutAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_PerformBackOutAction_DEFINED) && !defined(IL2CPP_STRUCT_PerformBackOutAction_FWDDECL)
#include <Modloader/app/structs/PerformBackOutAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PerformBackOutAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
