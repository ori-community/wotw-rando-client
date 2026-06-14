#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkCallbackManager_EventCallbackPackage__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkCallbackManager_EventCallbackPackage__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkCallbackManager_EventCallbackPackage__Fields_DEFINED)
#define IL2CPP_STRUCT_AkCallbackManager_EventCallbackPackage__Fields_DEFINED
struct AkCallbackManager_EventCallback;
struct Object;
struct __declspec(align(8)) AkCallbackManager_EventCallbackPackage__Fields {
    bool m_bNotifyEndOfEvent;
    struct AkCallbackManager_EventCallback* m_Callback;
    struct Object* m_Cookie;
    uint32_t m_playingID;
};
#endif
#if !defined(IL2CPP_STRUCT_AkCallbackManager_EventCallbackPackage__Fields_FWDDECL)
#define IL2CPP_STRUCT_AkCallbackManager_EventCallbackPackage__Fields_FWDDECL
#include <Modloader/app/structs/AkCallbackManager_EventCallback.h>
#include <Modloader/app/structs/Object.h>
#endif
#undef IL2CPP_STRUCT_AkCallbackManager_EventCallbackPackage__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkCallbackManager_EventCallbackPackage__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AkCallbackManager_EventCallbackPackage__Fields_FWDDECL)
#include <Modloader/app/structs/AkCallbackManager_EventCallbackPackage__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkCallbackManager_EventCallbackPackage__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
