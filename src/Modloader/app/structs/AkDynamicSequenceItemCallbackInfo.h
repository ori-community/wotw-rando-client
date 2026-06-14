#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkDynamicSequenceItemCallbackInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkDynamicSequenceItemCallbackInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkDynamicSequenceItemCallbackInfo_DEFINED)
#include <Modloader/app/structs/AkDynamicSequenceItemCallbackInfo__Fields.h>
#if defined(IL2CPP_STRUCT_AkDynamicSequenceItemCallbackInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_AkDynamicSequenceItemCallbackInfo_DEFINED
struct AkDynamicSequenceItemCallbackInfo__Class;
struct AkDynamicSequenceItemCallbackInfo {
    struct AkDynamicSequenceItemCallbackInfo__Class* klass;
    MonitorData* monitor;
    struct AkDynamicSequenceItemCallbackInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AkDynamicSequenceItemCallbackInfo_FWDDECL)
#define IL2CPP_STRUCT_AkDynamicSequenceItemCallbackInfo_FWDDECL
#include <Modloader/app/structs/AkDynamicSequenceItemCallbackInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_AkDynamicSequenceItemCallbackInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkDynamicSequenceItemCallbackInfo_DEFINED) && !defined(IL2CPP_STRUCT_AkDynamicSequenceItemCallbackInfo_FWDDECL)
#include <Modloader/app/structs/AkDynamicSequenceItemCallbackInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkDynamicSequenceItemCallbackInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
