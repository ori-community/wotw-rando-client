#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Promise__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Promise__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Promise__StaticFields_DEFINED)
#define IL2CPP_STRUCT_Promise__StaticFields_DEFINED
struct EventHandler_1_ZenFulcrum_EmbeddedBrowser_ExceptionEventArgs_;
struct HashSet_1_ZenFulcrum_EmbeddedBrowser_IPromiseInfo_;
struct Promise__StaticFields {
    bool EnablePromiseTracking;
    struct EventHandler_1_ZenFulcrum_EmbeddedBrowser_ExceptionEventArgs_* unhandlerException;
    int32_t nextPromiseId;
    struct HashSet_1_ZenFulcrum_EmbeddedBrowser_IPromiseInfo_* pendingPromises;
};
#endif
#if !defined(IL2CPP_STRUCT_Promise__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_Promise__StaticFields_FWDDECL
#include <Modloader/app/structs/EventHandler_1_ZenFulcrum_EmbeddedBrowser_ExceptionEventArgs_.h>
#include <Modloader/app/structs/HashSet_1_ZenFulcrum_EmbeddedBrowser_IPromiseInfo_.h>
#endif
#undef IL2CPP_STRUCT_Promise__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Promise__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_Promise__StaticFields_FWDDECL)
#include <Modloader/app/structs/Promise__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Promise__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
