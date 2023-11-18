#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkCallbackManager_BGMCallback_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkCallbackManager_BGMCallback_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkCallbackManager_BGMCallback_DEFINED)
#include <Modloader/app/structs/AkCallbackManager_BGMCallback__Fields.h>
#if defined(IL2CPP_STRUCT_AkCallbackManager_BGMCallback__Fields_DEFINED)
#define IL2CPP_STRUCT_AkCallbackManager_BGMCallback_DEFINED
struct AkCallbackManager_BGMCallback__Class;
struct AkCallbackManager_BGMCallback {
    struct AkCallbackManager_BGMCallback__Class* klass;
    MonitorData* monitor;
    struct AkCallbackManager_BGMCallback__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AkCallbackManager_BGMCallback_FWDDECL)
#define IL2CPP_STRUCT_AkCallbackManager_BGMCallback_FWDDECL
#include <Modloader/app/structs/AkCallbackManager_BGMCallback__Class.h>
#endif
#undef IL2CPP_STRUCT_AkCallbackManager_BGMCallback_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkCallbackManager_BGMCallback_DEFINED) && !defined(IL2CPP_STRUCT_AkCallbackManager_BGMCallback_FWDDECL)
#include <Modloader/app/structs/AkCallbackManager_BGMCallback.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkCallbackManager_BGMCallback.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
