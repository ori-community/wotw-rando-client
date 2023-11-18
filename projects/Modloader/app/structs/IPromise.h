#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IPromise_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IPromise_INITIALIZING
#if !defined(IL2CPP_STRUCT_IPromise_DEFINED)
#define IL2CPP_STRUCT_IPromise_DEFINED
struct IPromise__Class;
struct IPromise {
    struct IPromise__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IPromise_FWDDECL)
#define IL2CPP_STRUCT_IPromise_FWDDECL
#include <Modloader/app/structs/IPromise__Class.h>
#endif
#undef IL2CPP_STRUCT_IPromise_INITIALIZING
#if !defined(IL2CPP_STRUCT_IPromise_DEFINED) && !defined(IL2CPP_STRUCT_IPromise_FWDDECL)
#include <Modloader/app/structs/IPromise.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IPromise.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
