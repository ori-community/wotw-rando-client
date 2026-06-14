#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LogCallbackHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LogCallbackHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_LogCallbackHandler_DEFINED)
#include <Modloader/app/structs/LogCallbackHandler__Fields.h>
#if defined(IL2CPP_STRUCT_LogCallbackHandler__Fields_DEFINED)
#define IL2CPP_STRUCT_LogCallbackHandler_DEFINED
struct LogCallbackHandler__Class;
struct LogCallbackHandler {
    struct LogCallbackHandler__Class* klass;
    MonitorData* monitor;
    struct LogCallbackHandler__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LogCallbackHandler_FWDDECL)
#define IL2CPP_STRUCT_LogCallbackHandler_FWDDECL
#include <Modloader/app/structs/LogCallbackHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_LogCallbackHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_LogCallbackHandler_DEFINED) && !defined(IL2CPP_STRUCT_LogCallbackHandler_FWDDECL)
#include <Modloader/app/structs/LogCallbackHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LogCallbackHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
