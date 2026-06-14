#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IOAsyncResult_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IOAsyncResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_IOAsyncResult_DEFINED)
#include <Modloader/app/structs/IOAsyncResult__Fields.h>
#if defined(IL2CPP_STRUCT_IOAsyncResult__Fields_DEFINED)
#define IL2CPP_STRUCT_IOAsyncResult_DEFINED
struct IOAsyncResult__Class;
struct IOAsyncResult {
    struct IOAsyncResult__Class* klass;
    MonitorData* monitor;
    struct IOAsyncResult__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IOAsyncResult_FWDDECL)
#define IL2CPP_STRUCT_IOAsyncResult_FWDDECL
#include <Modloader/app/structs/IOAsyncResult__Class.h>
#endif
#undef IL2CPP_STRUCT_IOAsyncResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_IOAsyncResult_DEFINED) && !defined(IL2CPP_STRUCT_IOAsyncResult_FWDDECL)
#include <Modloader/app/structs/IOAsyncResult.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IOAsyncResult.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
