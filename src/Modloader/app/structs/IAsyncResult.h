#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IAsyncResult_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IAsyncResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_IAsyncResult_DEFINED)
#define IL2CPP_STRUCT_IAsyncResult_DEFINED
struct IAsyncResult__Class;
struct IAsyncResult {
    struct IAsyncResult__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IAsyncResult_FWDDECL)
#define IL2CPP_STRUCT_IAsyncResult_FWDDECL
#include <Modloader/app/structs/IAsyncResult__Class.h>
#endif
#undef IL2CPP_STRUCT_IAsyncResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_IAsyncResult_DEFINED) && !defined(IL2CPP_STRUCT_IAsyncResult_FWDDECL)
#include <Modloader/app/structs/IAsyncResult.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IAsyncResult.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
