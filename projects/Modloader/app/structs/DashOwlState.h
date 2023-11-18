#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DashOwlState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DashOwlState_INITIALIZING
#if !defined(IL2CPP_STRUCT_DashOwlState_DEFINED)
#include <Modloader/app/structs/DashOwlState__Fields.h>
#if defined(IL2CPP_STRUCT_DashOwlState__Fields_DEFINED)
#define IL2CPP_STRUCT_DashOwlState_DEFINED
struct DashOwlState__Class;
struct DashOwlState {
    struct DashOwlState__Class* klass;
    MonitorData* monitor;
    struct DashOwlState__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DashOwlState_FWDDECL)
#define IL2CPP_STRUCT_DashOwlState_FWDDECL
#include <Modloader/app/structs/DashOwlState__Class.h>
#endif
#undef IL2CPP_STRUCT_DashOwlState_INITIALIZING
#if !defined(IL2CPP_STRUCT_DashOwlState_DEFINED) && !defined(IL2CPP_STRUCT_DashOwlState_FWDDECL)
#include <Modloader/app/structs/DashOwlState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DashOwlState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
