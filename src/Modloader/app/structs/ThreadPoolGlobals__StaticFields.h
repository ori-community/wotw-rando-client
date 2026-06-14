#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ThreadPoolGlobals__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ThreadPoolGlobals__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ThreadPoolGlobals__StaticFields_DEFINED)
#define IL2CPP_STRUCT_ThreadPoolGlobals__StaticFields_DEFINED
struct ThreadPoolWorkQueue;
struct ThreadPoolGlobals__StaticFields {
    uint32_t tpQuantum;
    int32_t processorCount;
    bool tpHosted;
    bool vmTpInitialized;
    bool enableWorkerTracking;
    struct ThreadPoolWorkQueue* workQueue;
};
#endif
#if !defined(IL2CPP_STRUCT_ThreadPoolGlobals__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_ThreadPoolGlobals__StaticFields_FWDDECL
#include <Modloader/app/structs/ThreadPoolWorkQueue.h>
#endif
#undef IL2CPP_STRUCT_ThreadPoolGlobals__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ThreadPoolGlobals__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_ThreadPoolGlobals__StaticFields_FWDDECL)
#include <Modloader/app/structs/ThreadPoolGlobals__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ThreadPoolGlobals__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
