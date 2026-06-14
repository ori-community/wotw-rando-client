#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UnhandledExceptionHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UnhandledExceptionHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnhandledExceptionHandler_DEFINED)
#define IL2CPP_STRUCT_UnhandledExceptionHandler_DEFINED
struct UnhandledExceptionHandler__Class;
struct UnhandledExceptionHandler {
    struct UnhandledExceptionHandler__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_UnhandledExceptionHandler_FWDDECL)
#define IL2CPP_STRUCT_UnhandledExceptionHandler_FWDDECL
#include <Modloader/app/structs/UnhandledExceptionHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_UnhandledExceptionHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnhandledExceptionHandler_DEFINED) && !defined(IL2CPP_STRUCT_UnhandledExceptionHandler_FWDDECL)
#include <Modloader/app/structs/UnhandledExceptionHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UnhandledExceptionHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
