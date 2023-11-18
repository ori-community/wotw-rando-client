#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SafeSocketHandle__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SafeSocketHandle__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SafeSocketHandle__Fields_DEFINED)
#include <Modloader/app/structs/SafeHandleZeroOrMinusOneIsInvalid__Fields.h>
#if defined(IL2CPP_STRUCT_SafeHandleZeroOrMinusOneIsInvalid__Fields_DEFINED)
#define IL2CPP_STRUCT_SafeSocketHandle__Fields_DEFINED
struct List_1_System_Threading_Thread_;
struct Dictionary_2_System_Threading_Thread_System_Diagnostics_StackTrace_;
struct SafeSocketHandle__Fields {
    struct SafeHandleZeroOrMinusOneIsInvalid__Fields _;
    struct List_1_System_Threading_Thread_* blocking_threads;
    struct Dictionary_2_System_Threading_Thread_System_Diagnostics_StackTrace_* threads_stacktraces;
    bool in_cleanup;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SafeSocketHandle__Fields_FWDDECL)
#define IL2CPP_STRUCT_SafeSocketHandle__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_Threading_Thread_System_Diagnostics_StackTrace_.h>
#include <Modloader/app/structs/List_1_System_Threading_Thread_.h>
#endif
#undef IL2CPP_STRUCT_SafeSocketHandle__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SafeSocketHandle__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SafeSocketHandle__Fields_FWDDECL)
#include <Modloader/app/structs/SafeSocketHandle__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SafeSocketHandle__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
