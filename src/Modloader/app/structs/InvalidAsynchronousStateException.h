#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InvalidAsynchronousStateException_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InvalidAsynchronousStateException_INITIALIZING
#if !defined(IL2CPP_STRUCT_InvalidAsynchronousStateException_DEFINED)
#include <Modloader/app/structs/InvalidAsynchronousStateException__Fields.h>
#if defined(IL2CPP_STRUCT_InvalidAsynchronousStateException__Fields_DEFINED)
#define IL2CPP_STRUCT_InvalidAsynchronousStateException_DEFINED
struct InvalidAsynchronousStateException__Class;
struct InvalidAsynchronousStateException {
    struct InvalidAsynchronousStateException__Class* klass;
    MonitorData* monitor;
    struct InvalidAsynchronousStateException__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InvalidAsynchronousStateException_FWDDECL)
#define IL2CPP_STRUCT_InvalidAsynchronousStateException_FWDDECL
#include <Modloader/app/structs/InvalidAsynchronousStateException__Class.h>
#endif
#undef IL2CPP_STRUCT_InvalidAsynchronousStateException_INITIALIZING
#if !defined(IL2CPP_STRUCT_InvalidAsynchronousStateException_DEFINED) && !defined(IL2CPP_STRUCT_InvalidAsynchronousStateException_FWDDECL)
#include <Modloader/app/structs/InvalidAsynchronousStateException.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InvalidAsynchronousStateException.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
