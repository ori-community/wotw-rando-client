#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ThreadAbortException_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ThreadAbortException_INITIALIZING
#if !defined(IL2CPP_STRUCT_ThreadAbortException_DEFINED)
#include <Modloader/app/structs/ThreadAbortException__Fields.h>
#if defined(IL2CPP_STRUCT_ThreadAbortException__Fields_DEFINED)
#define IL2CPP_STRUCT_ThreadAbortException_DEFINED
struct ThreadAbortException__Class;
struct ThreadAbortException {
    struct ThreadAbortException__Class* klass;
    MonitorData* monitor;
    struct ThreadAbortException__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ThreadAbortException_FWDDECL)
#define IL2CPP_STRUCT_ThreadAbortException_FWDDECL
#include <Modloader/app/structs/ThreadAbortException__Class.h>
#endif
#undef IL2CPP_STRUCT_ThreadAbortException_INITIALIZING
#if !defined(IL2CPP_STRUCT_ThreadAbortException_DEFINED) && !defined(IL2CPP_STRUCT_ThreadAbortException_FWDDECL)
#include <Modloader/app/structs/ThreadAbortException.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ThreadAbortException.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
