#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AsyncOperation_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AsyncOperation_INITIALIZING
#if !defined(IL2CPP_STRUCT_AsyncOperation_DEFINED)
#include <Modloader/app/structs/AsyncOperation__Fields.h>
#if defined(IL2CPP_STRUCT_AsyncOperation__Fields_DEFINED)
#define IL2CPP_STRUCT_AsyncOperation_DEFINED
struct AsyncOperation__Class;
struct AsyncOperation {
    struct AsyncOperation__Class* klass;
    MonitorData* monitor;
    struct AsyncOperation__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AsyncOperation_FWDDECL)
#define IL2CPP_STRUCT_AsyncOperation_FWDDECL
#include <Modloader/app/structs/AsyncOperation__Class.h>
#endif
#undef IL2CPP_STRUCT_AsyncOperation_INITIALIZING
#if !defined(IL2CPP_STRUCT_AsyncOperation_DEFINED) && !defined(IL2CPP_STRUCT_AsyncOperation_FWDDECL)
#include <Modloader/app/structs/AsyncOperation.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AsyncOperation.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
