#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Promise_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Promise_INITIALIZING
#if !defined(IL2CPP_STRUCT_Promise_DEFINED)
#include <Modloader/app/structs/Promise__Fields.h>
#if defined(IL2CPP_STRUCT_Promise__Fields_DEFINED)
#define IL2CPP_STRUCT_Promise_DEFINED
struct Promise__Class;
struct Promise {
    struct Promise__Class* klass;
    MonitorData* monitor;
    struct Promise__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Promise_FWDDECL)
#define IL2CPP_STRUCT_Promise_FWDDECL
#include <Modloader/app/structs/Promise__Class.h>
#endif
#undef IL2CPP_STRUCT_Promise_INITIALIZING
#if !defined(IL2CPP_STRUCT_Promise_DEFINED) && !defined(IL2CPP_STRUCT_Promise_FWDDECL)
#include <Modloader/app/structs/Promise.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Promise.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
