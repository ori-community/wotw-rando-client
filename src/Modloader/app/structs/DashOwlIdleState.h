#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DashOwlIdleState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DashOwlIdleState_INITIALIZING
#if !defined(IL2CPP_STRUCT_DashOwlIdleState_DEFINED)
#include <Modloader/app/structs/DashOwlIdleState__Fields.h>
#if defined(IL2CPP_STRUCT_DashOwlIdleState__Fields_DEFINED)
#define IL2CPP_STRUCT_DashOwlIdleState_DEFINED
struct DashOwlIdleState__Class;
struct DashOwlIdleState {
    struct DashOwlIdleState__Class* klass;
    MonitorData* monitor;
    struct DashOwlIdleState__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DashOwlIdleState_FWDDECL)
#define IL2CPP_STRUCT_DashOwlIdleState_FWDDECL
#include <Modloader/app/structs/DashOwlIdleState__Class.h>
#endif
#undef IL2CPP_STRUCT_DashOwlIdleState_INITIALIZING
#if !defined(IL2CPP_STRUCT_DashOwlIdleState_DEFINED) && !defined(IL2CPP_STRUCT_DashOwlIdleState_FWDDECL)
#include <Modloader/app/structs/DashOwlIdleState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DashOwlIdleState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
