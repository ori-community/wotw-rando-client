#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimeoutException_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimeoutException_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimeoutException_DEFINED)
#include <Modloader/app/structs/TimeoutException__Fields.h>
#if defined(IL2CPP_STRUCT_TimeoutException__Fields_DEFINED)
#define IL2CPP_STRUCT_TimeoutException_DEFINED
struct TimeoutException__Class;
struct TimeoutException {
    struct TimeoutException__Class* klass;
    MonitorData* monitor;
    struct TimeoutException__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TimeoutException_FWDDECL)
#define IL2CPP_STRUCT_TimeoutException_FWDDECL
#include <Modloader/app/structs/TimeoutException__Class.h>
#endif
#undef IL2CPP_STRUCT_TimeoutException_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimeoutException_DEFINED) && !defined(IL2CPP_STRUCT_TimeoutException_FWDDECL)
#include <Modloader/app/structs/TimeoutException.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimeoutException.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
