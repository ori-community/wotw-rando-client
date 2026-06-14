#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ListenerAsyncResult_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ListenerAsyncResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_ListenerAsyncResult_DEFINED)
#include <Modloader/app/structs/ListenerAsyncResult__Fields.h>
#if defined(IL2CPP_STRUCT_ListenerAsyncResult__Fields_DEFINED)
#define IL2CPP_STRUCT_ListenerAsyncResult_DEFINED
struct ListenerAsyncResult__Class;
struct ListenerAsyncResult {
    struct ListenerAsyncResult__Class* klass;
    MonitorData* monitor;
    struct ListenerAsyncResult__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ListenerAsyncResult_FWDDECL)
#define IL2CPP_STRUCT_ListenerAsyncResult_FWDDECL
#include <Modloader/app/structs/ListenerAsyncResult__Class.h>
#endif
#undef IL2CPP_STRUCT_ListenerAsyncResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_ListenerAsyncResult_DEFINED) && !defined(IL2CPP_STRUCT_ListenerAsyncResult_FWDDECL)
#include <Modloader/app/structs/ListenerAsyncResult.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ListenerAsyncResult.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
