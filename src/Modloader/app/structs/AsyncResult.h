#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AsyncResult_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AsyncResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_AsyncResult_DEFINED)
#include <Modloader/app/structs/AsyncResult__Fields.h>
#if defined(IL2CPP_STRUCT_AsyncResult__Fields_DEFINED)
#define IL2CPP_STRUCT_AsyncResult_DEFINED
struct AsyncResult__Class;
struct AsyncResult {
    struct AsyncResult__Class* klass;
    MonitorData* monitor;
    struct AsyncResult__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AsyncResult_FWDDECL)
#define IL2CPP_STRUCT_AsyncResult_FWDDECL
#include <Modloader/app/structs/AsyncResult__Class.h>
#endif
#undef IL2CPP_STRUCT_AsyncResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_AsyncResult_DEFINED) && !defined(IL2CPP_STRUCT_AsyncResult_FWDDECL)
#include <Modloader/app/structs/AsyncResult.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AsyncResult.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
