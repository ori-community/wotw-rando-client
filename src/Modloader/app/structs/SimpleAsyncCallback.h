#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SimpleAsyncCallback_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SimpleAsyncCallback_INITIALIZING
#if !defined(IL2CPP_STRUCT_SimpleAsyncCallback_DEFINED)
#include <Modloader/app/structs/SimpleAsyncCallback__Fields.h>
#if defined(IL2CPP_STRUCT_SimpleAsyncCallback__Fields_DEFINED)
#define IL2CPP_STRUCT_SimpleAsyncCallback_DEFINED
struct SimpleAsyncCallback__Class;
struct SimpleAsyncCallback {
    struct SimpleAsyncCallback__Class* klass;
    MonitorData* monitor;
    struct SimpleAsyncCallback__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SimpleAsyncCallback_FWDDECL)
#define IL2CPP_STRUCT_SimpleAsyncCallback_FWDDECL
#include <Modloader/app/structs/SimpleAsyncCallback__Class.h>
#endif
#undef IL2CPP_STRUCT_SimpleAsyncCallback_INITIALIZING
#if !defined(IL2CPP_STRUCT_SimpleAsyncCallback_DEFINED) && !defined(IL2CPP_STRUCT_SimpleAsyncCallback_FWDDECL)
#include <Modloader/app/structs/SimpleAsyncCallback.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SimpleAsyncCallback.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
