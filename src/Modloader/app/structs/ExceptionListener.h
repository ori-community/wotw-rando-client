#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ExceptionListener_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ExceptionListener_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExceptionListener_DEFINED)
#include <Modloader/app/structs/ExceptionListener__Fields.h>
#if defined(IL2CPP_STRUCT_ExceptionListener__Fields_DEFINED)
#define IL2CPP_STRUCT_ExceptionListener_DEFINED
struct ExceptionListener__Class;
struct ExceptionListener {
    struct ExceptionListener__Class* klass;
    MonitorData* monitor;
    struct ExceptionListener__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ExceptionListener_FWDDECL)
#define IL2CPP_STRUCT_ExceptionListener_FWDDECL
#include <Modloader/app/structs/ExceptionListener__Class.h>
#endif
#undef IL2CPP_STRUCT_ExceptionListener_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExceptionListener_DEFINED) && !defined(IL2CPP_STRUCT_ExceptionListener_FWDDECL)
#include <Modloader/app/structs/ExceptionListener.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ExceptionListener.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
