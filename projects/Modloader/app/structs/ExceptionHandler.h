#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ExceptionHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ExceptionHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExceptionHandler_DEFINED)
#include <Modloader/app/structs/ExceptionHandler__Fields.h>
#if defined(IL2CPP_STRUCT_ExceptionHandler__Fields_DEFINED)
#define IL2CPP_STRUCT_ExceptionHandler_DEFINED
struct ExceptionHandler__Class;
struct ExceptionHandler {
    struct ExceptionHandler__Class* klass;
    MonitorData* monitor;
    struct ExceptionHandler__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ExceptionHandler_FWDDECL)
#define IL2CPP_STRUCT_ExceptionHandler_FWDDECL
#include <Modloader/app/structs/ExceptionHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_ExceptionHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExceptionHandler_DEFINED) && !defined(IL2CPP_STRUCT_ExceptionHandler_FWDDECL)
#include <Modloader/app/structs/ExceptionHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ExceptionHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
