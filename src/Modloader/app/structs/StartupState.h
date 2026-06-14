#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StartupState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StartupState_INITIALIZING
#if !defined(IL2CPP_STRUCT_StartupState_DEFINED)
#include <Modloader/app/structs/StartupState__Fields.h>
#if defined(IL2CPP_STRUCT_StartupState__Fields_DEFINED)
#define IL2CPP_STRUCT_StartupState_DEFINED
struct StartupState__Class;
struct StartupState {
    struct StartupState__Class* klass;
    MonitorData* monitor;
    struct StartupState__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StartupState_FWDDECL)
#define IL2CPP_STRUCT_StartupState_FWDDECL
#include <Modloader/app/structs/StartupState__Class.h>
#endif
#undef IL2CPP_STRUCT_StartupState_INITIALIZING
#if !defined(IL2CPP_STRUCT_StartupState_DEFINED) && !defined(IL2CPP_STRUCT_StartupState_FWDDECL)
#include <Modloader/app/structs/StartupState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StartupState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
