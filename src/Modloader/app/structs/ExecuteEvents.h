#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ExecuteEvents_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ExecuteEvents_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExecuteEvents_DEFINED)
#define IL2CPP_STRUCT_ExecuteEvents_DEFINED
struct ExecuteEvents__Class;
struct ExecuteEvents {
    struct ExecuteEvents__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ExecuteEvents_FWDDECL)
#define IL2CPP_STRUCT_ExecuteEvents_FWDDECL
#include <Modloader/app/structs/ExecuteEvents__Class.h>
#endif
#undef IL2CPP_STRUCT_ExecuteEvents_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExecuteEvents_DEFINED) && !defined(IL2CPP_STRUCT_ExecuteEvents_FWDDECL)
#include <Modloader/app/structs/ExecuteEvents.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ExecuteEvents.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
