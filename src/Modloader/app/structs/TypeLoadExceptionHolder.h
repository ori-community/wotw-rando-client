#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TypeLoadExceptionHolder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TypeLoadExceptionHolder_INITIALIZING
#if !defined(IL2CPP_STRUCT_TypeLoadExceptionHolder_DEFINED)
#include <Modloader/app/structs/TypeLoadExceptionHolder__Fields.h>
#if defined(IL2CPP_STRUCT_TypeLoadExceptionHolder__Fields_DEFINED)
#define IL2CPP_STRUCT_TypeLoadExceptionHolder_DEFINED
struct TypeLoadExceptionHolder__Class;
struct TypeLoadExceptionHolder {
    struct TypeLoadExceptionHolder__Class* klass;
    MonitorData* monitor;
    struct TypeLoadExceptionHolder__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TypeLoadExceptionHolder_FWDDECL)
#define IL2CPP_STRUCT_TypeLoadExceptionHolder_FWDDECL
#include <Modloader/app/structs/TypeLoadExceptionHolder__Class.h>
#endif
#undef IL2CPP_STRUCT_TypeLoadExceptionHolder_INITIALIZING
#if !defined(IL2CPP_STRUCT_TypeLoadExceptionHolder_DEFINED) && !defined(IL2CPP_STRUCT_TypeLoadExceptionHolder_FWDDECL)
#include <Modloader/app/structs/TypeLoadExceptionHolder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TypeLoadExceptionHolder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
