#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SetupState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SetupState_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetupState_DEFINED)
#include <Modloader/app/structs/SetupState__Fields.h>
#if defined(IL2CPP_STRUCT_SetupState__Fields_DEFINED)
#define IL2CPP_STRUCT_SetupState_DEFINED
struct SetupState__Class;
struct SetupState {
    struct SetupState__Class* klass;
    MonitorData* monitor;
    struct SetupState__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SetupState_FWDDECL)
#define IL2CPP_STRUCT_SetupState_FWDDECL
#include <Modloader/app/structs/SetupState__Class.h>
#endif
#undef IL2CPP_STRUCT_SetupState_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetupState_DEFINED) && !defined(IL2CPP_STRUCT_SetupState_FWDDECL)
#include <Modloader/app/structs/SetupState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SetupState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
