#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkDurationCallbackInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkDurationCallbackInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkDurationCallbackInfo_DEFINED)
#include <Modloader/app/structs/AkDurationCallbackInfo__Fields.h>
#if defined(IL2CPP_STRUCT_AkDurationCallbackInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_AkDurationCallbackInfo_DEFINED
struct AkDurationCallbackInfo__Class;
struct AkDurationCallbackInfo {
    struct AkDurationCallbackInfo__Class* klass;
    MonitorData* monitor;
    struct AkDurationCallbackInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AkDurationCallbackInfo_FWDDECL)
#define IL2CPP_STRUCT_AkDurationCallbackInfo_FWDDECL
#include <Modloader/app/structs/AkDurationCallbackInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_AkDurationCallbackInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkDurationCallbackInfo_DEFINED) && !defined(IL2CPP_STRUCT_AkDurationCallbackInfo_FWDDECL)
#include <Modloader/app/structs/AkDurationCallbackInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkDurationCallbackInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
