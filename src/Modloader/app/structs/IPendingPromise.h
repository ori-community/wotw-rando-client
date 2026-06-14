#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IPendingPromise_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IPendingPromise_INITIALIZING
#if !defined(IL2CPP_STRUCT_IPendingPromise_DEFINED)
#define IL2CPP_STRUCT_IPendingPromise_DEFINED
struct IPendingPromise__Class;
struct IPendingPromise {
    struct IPendingPromise__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IPendingPromise_FWDDECL)
#define IL2CPP_STRUCT_IPendingPromise_FWDDECL
#include <Modloader/app/structs/IPendingPromise__Class.h>
#endif
#undef IL2CPP_STRUCT_IPendingPromise_INITIALIZING
#if !defined(IL2CPP_STRUCT_IPendingPromise_DEFINED) && !defined(IL2CPP_STRUCT_IPendingPromise_FWDDECL)
#include <Modloader/app/structs/IPendingPromise.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IPendingPromise.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
