#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ExceptionHandlingClause_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ExceptionHandlingClause_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExceptionHandlingClause_DEFINED)
#include <Modloader/app/structs/ExceptionHandlingClause__Fields.h>
#if defined(IL2CPP_STRUCT_ExceptionHandlingClause__Fields_DEFINED)
#define IL2CPP_STRUCT_ExceptionHandlingClause_DEFINED
struct ExceptionHandlingClause__Class;
struct ExceptionHandlingClause {
    struct ExceptionHandlingClause__Class* klass;
    MonitorData* monitor;
    struct ExceptionHandlingClause__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ExceptionHandlingClause_FWDDECL)
#define IL2CPP_STRUCT_ExceptionHandlingClause_FWDDECL
#include <Modloader/app/structs/ExceptionHandlingClause__Class.h>
#endif
#undef IL2CPP_STRUCT_ExceptionHandlingClause_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExceptionHandlingClause_DEFINED) && !defined(IL2CPP_STRUCT_ExceptionHandlingClause_FWDDECL)
#include <Modloader/app/structs/ExceptionHandlingClause.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ExceptionHandlingClause.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
