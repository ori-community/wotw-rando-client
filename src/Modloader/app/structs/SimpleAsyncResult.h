#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SimpleAsyncResult_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SimpleAsyncResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_SimpleAsyncResult_DEFINED)
#include <Modloader/app/structs/SimpleAsyncResult__Fields.h>
#if defined(IL2CPP_STRUCT_SimpleAsyncResult__Fields_DEFINED)
#define IL2CPP_STRUCT_SimpleAsyncResult_DEFINED
struct SimpleAsyncResult__Class;
struct SimpleAsyncResult {
    struct SimpleAsyncResult__Class* klass;
    MonitorData* monitor;
    struct SimpleAsyncResult__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SimpleAsyncResult_FWDDECL)
#define IL2CPP_STRUCT_SimpleAsyncResult_FWDDECL
#include <Modloader/app/structs/SimpleAsyncResult__Class.h>
#endif
#undef IL2CPP_STRUCT_SimpleAsyncResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_SimpleAsyncResult_DEFINED) && !defined(IL2CPP_STRUCT_SimpleAsyncResult_FWDDECL)
#include <Modloader/app/structs/SimpleAsyncResult.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SimpleAsyncResult.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
