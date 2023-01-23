#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CancellationCallbackInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CancellationCallbackInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_CancellationCallbackInfo_DEFINED)
#include <Modloader/app/structs/CancellationCallbackInfo__Fields.h>
#if defined(IL2CPP_STRUCT_CancellationCallbackInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_CancellationCallbackInfo_DEFINED
struct CancellationCallbackInfo__Class;
struct CancellationCallbackInfo {
    struct CancellationCallbackInfo__Class* klass;
    MonitorData* monitor;
    struct CancellationCallbackInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CancellationCallbackInfo_FWDDECL)
#define IL2CPP_STRUCT_CancellationCallbackInfo_FWDDECL
#include <Modloader/app/structs/CancellationCallbackInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_CancellationCallbackInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_CancellationCallbackInfo_DEFINED) && !defined(IL2CPP_STRUCT_CancellationCallbackInfo_FWDDECL)
#include <Modloader/app/structs/CancellationCallbackInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CancellationCallbackInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
