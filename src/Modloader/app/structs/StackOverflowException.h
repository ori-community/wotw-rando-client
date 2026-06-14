#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StackOverflowException_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StackOverflowException_INITIALIZING
#if !defined(IL2CPP_STRUCT_StackOverflowException_DEFINED)
#include <Modloader/app/structs/StackOverflowException__Fields.h>
#if defined(IL2CPP_STRUCT_StackOverflowException__Fields_DEFINED)
#define IL2CPP_STRUCT_StackOverflowException_DEFINED
struct StackOverflowException__Class;
struct StackOverflowException {
    struct StackOverflowException__Class* klass;
    MonitorData* monitor;
    struct StackOverflowException__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StackOverflowException_FWDDECL)
#define IL2CPP_STRUCT_StackOverflowException_FWDDECL
#include <Modloader/app/structs/StackOverflowException__Class.h>
#endif
#undef IL2CPP_STRUCT_StackOverflowException_INITIALIZING
#if !defined(IL2CPP_STRUCT_StackOverflowException_DEFINED) && !defined(IL2CPP_STRUCT_StackOverflowException_FWDDECL)
#include <Modloader/app/structs/StackOverflowException.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StackOverflowException.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
