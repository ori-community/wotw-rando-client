#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ThreadStart_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ThreadStart_INITIALIZING
#if !defined(IL2CPP_STRUCT_ThreadStart_DEFINED)
#include <Modloader/app/structs/ThreadStart__Fields.h>
#if defined(IL2CPP_STRUCT_ThreadStart__Fields_DEFINED)
#define IL2CPP_STRUCT_ThreadStart_DEFINED
struct ThreadStart__Class;
struct ThreadStart {
    struct ThreadStart__Class* klass;
    MonitorData* monitor;
    struct ThreadStart__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ThreadStart_FWDDECL)
#define IL2CPP_STRUCT_ThreadStart_FWDDECL
#include <Modloader/app/structs/ThreadStart__Class.h>
#endif
#undef IL2CPP_STRUCT_ThreadStart_INITIALIZING
#if !defined(IL2CPP_STRUCT_ThreadStart_DEFINED) && !defined(IL2CPP_STRUCT_ThreadStart_FWDDECL)
#include <Modloader/app/structs/ThreadStart.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ThreadStart.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
