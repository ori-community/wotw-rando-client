#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ExceptionFilter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ExceptionFilter_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExceptionFilter_DEFINED)
#include <Modloader/app/structs/ExceptionFilter__Fields.h>
#if defined(IL2CPP_STRUCT_ExceptionFilter__Fields_DEFINED)
#define IL2CPP_STRUCT_ExceptionFilter_DEFINED
struct ExceptionFilter__Class;
struct ExceptionFilter {
    struct ExceptionFilter__Class* klass;
    MonitorData* monitor;
    struct ExceptionFilter__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ExceptionFilter_FWDDECL)
#define IL2CPP_STRUCT_ExceptionFilter_FWDDECL
#include <Modloader/app/structs/ExceptionFilter__Class.h>
#endif
#undef IL2CPP_STRUCT_ExceptionFilter_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExceptionFilter_DEFINED) && !defined(IL2CPP_STRUCT_ExceptionFilter_FWDDECL)
#include <Modloader/app/structs/ExceptionFilter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ExceptionFilter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
