#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LogosState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LogosState_INITIALIZING
#if !defined(IL2CPP_STRUCT_LogosState_DEFINED)
#include <Modloader/app/structs/LogosState__Fields.h>
#if defined(IL2CPP_STRUCT_LogosState__Fields_DEFINED)
#define IL2CPP_STRUCT_LogosState_DEFINED
struct LogosState__Class;
struct LogosState {
    struct LogosState__Class* klass;
    MonitorData* monitor;
    struct LogosState__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LogosState_FWDDECL)
#define IL2CPP_STRUCT_LogosState_FWDDECL
#include <Modloader/app/structs/LogosState__Class.h>
#endif
#undef IL2CPP_STRUCT_LogosState_INITIALIZING
#if !defined(IL2CPP_STRUCT_LogosState_DEFINED) && !defined(IL2CPP_STRUCT_LogosState_FWDDECL)
#include <Modloader/app/structs/LogosState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LogosState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
