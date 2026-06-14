#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StackTrace_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StackTrace_INITIALIZING
#if !defined(IL2CPP_STRUCT_StackTrace_DEFINED)
#include <Modloader/app/structs/StackTrace__Fields.h>
#if defined(IL2CPP_STRUCT_StackTrace__Fields_DEFINED)
#define IL2CPP_STRUCT_StackTrace_DEFINED
struct StackTrace__Class;
struct StackTrace {
    struct StackTrace__Class* klass;
    MonitorData* monitor;
    struct StackTrace__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StackTrace_FWDDECL)
#define IL2CPP_STRUCT_StackTrace_FWDDECL
#include <Modloader/app/structs/StackTrace__Class.h>
#endif
#undef IL2CPP_STRUCT_StackTrace_INITIALIZING
#if !defined(IL2CPP_STRUCT_StackTrace_DEFINED) && !defined(IL2CPP_STRUCT_StackTrace_FWDDECL)
#include <Modloader/app/structs/StackTrace.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StackTrace.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
