#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AsyncCallback_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AsyncCallback_INITIALIZING
#if !defined(IL2CPP_STRUCT_AsyncCallback_DEFINED)
#include <Modloader/app/structs/AsyncCallback__Fields.h>
#if defined(IL2CPP_STRUCT_AsyncCallback__Fields_DEFINED)
#define IL2CPP_STRUCT_AsyncCallback_DEFINED
struct AsyncCallback__Class;
struct AsyncCallback {
    struct AsyncCallback__Class* klass;
    MonitorData* monitor;
    struct AsyncCallback__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AsyncCallback_FWDDECL)
#define IL2CPP_STRUCT_AsyncCallback_FWDDECL
#include <Modloader/app/structs/AsyncCallback__Class.h>
#endif
#undef IL2CPP_STRUCT_AsyncCallback_INITIALIZING
#if !defined(IL2CPP_STRUCT_AsyncCallback_DEFINED) && !defined(IL2CPP_STRUCT_AsyncCallback_FWDDECL)
#include <Modloader/app/structs/AsyncCallback.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AsyncCallback.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
