#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ExceptionProcessor_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ExceptionProcessor_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExceptionProcessor_DEFINED)
#include <Modloader/app/structs/ExceptionProcessor__Fields.h>
#if defined(IL2CPP_STRUCT_ExceptionProcessor__Fields_DEFINED)
#define IL2CPP_STRUCT_ExceptionProcessor_DEFINED
struct ExceptionProcessor__Class;
struct ExceptionProcessor {
    struct ExceptionProcessor__Class* klass;
    MonitorData* monitor;
    struct ExceptionProcessor__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ExceptionProcessor_FWDDECL)
#define IL2CPP_STRUCT_ExceptionProcessor_FWDDECL
#include <Modloader/app/structs/ExceptionProcessor__Class.h>
#endif
#undef IL2CPP_STRUCT_ExceptionProcessor_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExceptionProcessor_DEFINED) && !defined(IL2CPP_STRUCT_ExceptionProcessor_FWDDECL)
#include <Modloader/app/structs/ExceptionProcessor.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ExceptionProcessor.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
