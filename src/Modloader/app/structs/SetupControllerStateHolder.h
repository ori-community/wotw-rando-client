#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SetupControllerStateHolder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SetupControllerStateHolder_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetupControllerStateHolder_DEFINED)
#include <Modloader/app/structs/SetupControllerStateHolder__Fields.h>
#if defined(IL2CPP_STRUCT_SetupControllerStateHolder__Fields_DEFINED)
#define IL2CPP_STRUCT_SetupControllerStateHolder_DEFINED
struct SetupControllerStateHolder__Class;
struct SetupControllerStateHolder {
    struct SetupControllerStateHolder__Class* klass;
    MonitorData* monitor;
    struct SetupControllerStateHolder__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SetupControllerStateHolder_FWDDECL)
#define IL2CPP_STRUCT_SetupControllerStateHolder_FWDDECL
#include <Modloader/app/structs/SetupControllerStateHolder__Class.h>
#endif
#undef IL2CPP_STRUCT_SetupControllerStateHolder_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetupControllerStateHolder_DEFINED) && !defined(IL2CPP_STRUCT_SetupControllerStateHolder_FWDDECL)
#include <Modloader/app/structs/SetupControllerStateHolder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SetupControllerStateHolder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
