#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ErrorContext_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ErrorContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_ErrorContext_DEFINED)
#include <Modloader/app/structs/ErrorContext__Fields.h>
#if defined(IL2CPP_STRUCT_ErrorContext__Fields_DEFINED)
#define IL2CPP_STRUCT_ErrorContext_DEFINED
struct ErrorContext__Class;
struct ErrorContext {
    struct ErrorContext__Class* klass;
    MonitorData* monitor;
    struct ErrorContext__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ErrorContext_FWDDECL)
#define IL2CPP_STRUCT_ErrorContext_FWDDECL
#include <Modloader/app/structs/ErrorContext__Class.h>
#endif
#undef IL2CPP_STRUCT_ErrorContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_ErrorContext_DEFINED) && !defined(IL2CPP_STRUCT_ErrorContext_FWDDECL)
#include <Modloader/app/structs/ErrorContext.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ErrorContext.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
