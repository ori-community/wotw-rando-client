#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkCallbackManager_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkCallbackManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkCallbackManager_DEFINED)
#define IL2CPP_STRUCT_AkCallbackManager_DEFINED
struct AkCallbackManager__Class;
struct AkCallbackManager {
    struct AkCallbackManager__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_AkCallbackManager_FWDDECL)
#define IL2CPP_STRUCT_AkCallbackManager_FWDDECL
#include <Modloader/app/structs/AkCallbackManager__Class.h>
#endif
#undef IL2CPP_STRUCT_AkCallbackManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkCallbackManager_DEFINED) && !defined(IL2CPP_STRUCT_AkCallbackManager_FWDDECL)
#include <Modloader/app/structs/AkCallbackManager.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkCallbackManager.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
