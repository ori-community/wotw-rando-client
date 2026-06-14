#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ExecuteAlways_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ExecuteAlways_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExecuteAlways_DEFINED)
#define IL2CPP_STRUCT_ExecuteAlways_DEFINED
struct ExecuteAlways__Class;
struct ExecuteAlways {
    struct ExecuteAlways__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ExecuteAlways_FWDDECL)
#define IL2CPP_STRUCT_ExecuteAlways_FWDDECL
#include <Modloader/app/structs/ExecuteAlways__Class.h>
#endif
#undef IL2CPP_STRUCT_ExecuteAlways_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExecuteAlways_DEFINED) && !defined(IL2CPP_STRUCT_ExecuteAlways_FWDDECL)
#include <Modloader/app/structs/ExecuteAlways.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ExecuteAlways.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
