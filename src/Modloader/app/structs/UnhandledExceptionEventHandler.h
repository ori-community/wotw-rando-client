#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UnhandledExceptionEventHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UnhandledExceptionEventHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnhandledExceptionEventHandler_DEFINED)
#include <Modloader/app/structs/UnhandledExceptionEventHandler__Fields.h>
#if defined(IL2CPP_STRUCT_UnhandledExceptionEventHandler__Fields_DEFINED)
#define IL2CPP_STRUCT_UnhandledExceptionEventHandler_DEFINED
struct UnhandledExceptionEventHandler__Class;
struct UnhandledExceptionEventHandler {
    struct UnhandledExceptionEventHandler__Class* klass;
    MonitorData* monitor;
    struct UnhandledExceptionEventHandler__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UnhandledExceptionEventHandler_FWDDECL)
#define IL2CPP_STRUCT_UnhandledExceptionEventHandler_FWDDECL
#include <Modloader/app/structs/UnhandledExceptionEventHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_UnhandledExceptionEventHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnhandledExceptionEventHandler_DEFINED) && !defined(IL2CPP_STRUCT_UnhandledExceptionEventHandler_FWDDECL)
#include <Modloader/app/structs/UnhandledExceptionEventHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UnhandledExceptionEventHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
