#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UnobservedTaskExceptionEventArgs__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UnobservedTaskExceptionEventArgs__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnobservedTaskExceptionEventArgs__Fields_DEFINED)
#define IL2CPP_STRUCT_UnobservedTaskExceptionEventArgs__Fields_DEFINED
struct AggregateException;
struct __declspec(align(8)) UnobservedTaskExceptionEventArgs__Fields {
    struct AggregateException* m_exception;
    bool m_observed;
};
#endif
#if !defined(IL2CPP_STRUCT_UnobservedTaskExceptionEventArgs__Fields_FWDDECL)
#define IL2CPP_STRUCT_UnobservedTaskExceptionEventArgs__Fields_FWDDECL
#include <Modloader/app/structs/AggregateException.h>
#endif
#undef IL2CPP_STRUCT_UnobservedTaskExceptionEventArgs__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnobservedTaskExceptionEventArgs__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UnobservedTaskExceptionEventArgs__Fields_FWDDECL)
#include <Modloader/app/structs/UnobservedTaskExceptionEventArgs__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UnobservedTaskExceptionEventArgs__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
