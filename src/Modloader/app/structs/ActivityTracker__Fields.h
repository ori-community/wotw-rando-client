#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ActivityTracker__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ActivityTracker__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ActivityTracker__Fields_DEFINED)
#define IL2CPP_STRUCT_ActivityTracker__Fields_DEFINED
struct AsyncLocal_1_System_Diagnostics_Tracing_ActivityTracker_ActivityInfo_;
struct __declspec(align(8)) ActivityTracker__Fields {
    struct AsyncLocal_1_System_Diagnostics_Tracing_ActivityTracker_ActivityInfo_* m_current;
    bool m_checkedForEnable;
};
#endif
#if !defined(IL2CPP_STRUCT_ActivityTracker__Fields_FWDDECL)
#define IL2CPP_STRUCT_ActivityTracker__Fields_FWDDECL
#include <Modloader/app/structs/AsyncLocal_1_System_Diagnostics_Tracing_ActivityTracker_ActivityInfo_.h>
#endif
#undef IL2CPP_STRUCT_ActivityTracker__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ActivityTracker__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ActivityTracker__Fields_FWDDECL)
#include <Modloader/app/structs/ActivityTracker__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ActivityTracker__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
