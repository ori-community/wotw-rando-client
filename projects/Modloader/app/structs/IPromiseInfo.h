#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IPromiseInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IPromiseInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_IPromiseInfo_DEFINED)
#define IL2CPP_STRUCT_IPromiseInfo_DEFINED
struct IPromiseInfo__Class;
struct IPromiseInfo {
    struct IPromiseInfo__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IPromiseInfo_FWDDECL)
#define IL2CPP_STRUCT_IPromiseInfo_FWDDECL
#include <Modloader/app/structs/IPromiseInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_IPromiseInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_IPromiseInfo_DEFINED) && !defined(IL2CPP_STRUCT_IPromiseInfo_FWDDECL)
#include <Modloader/app/structs/IPromiseInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IPromiseInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
