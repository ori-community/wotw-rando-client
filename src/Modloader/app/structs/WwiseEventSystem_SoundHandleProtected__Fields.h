#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WwiseEventSystem_SoundHandleProtected__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WwiseEventSystem_SoundHandleProtected__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WwiseEventSystem_SoundHandleProtected__Fields_DEFINED)
#include <Modloader/app/structs/AkCallbackType__Enum.h>
#include <Modloader/app/structs/SoundHostReference.h>
#if defined(IL2CPP_STRUCT_SoundHostReference_DEFINED) && defined(IL2CPP_STRUCT_AkCallbackType__Enum_DEFINED)
#define IL2CPP_STRUCT_WwiseEventSystem_SoundHandleProtected__Fields_DEFINED
struct Event_1;
struct AkCallbackManager_EventCallback;
struct WwiseEventSystem_EventState;
struct __declspec(align(8)) WwiseEventSystem_SoundHandleProtected__Fields {
    struct Event_1* m_event;
    struct SoundHostReference m_host;
    uint32_t m_postId;
    int64_t m_version;
    struct AkCallbackManager_EventCallback* m_customEventCallback;
    AkCallbackType__Enum m_customEventCallbackFlags;

    struct WwiseEventSystem_EventState* m_state;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WwiseEventSystem_SoundHandleProtected__Fields_FWDDECL)
#define IL2CPP_STRUCT_WwiseEventSystem_SoundHandleProtected__Fields_FWDDECL
#include <Modloader/app/structs/AkCallbackManager_EventCallback.h>
#include <Modloader/app/structs/Event_1.h>
#include <Modloader/app/structs/WwiseEventSystem_EventState.h>
#endif
#undef IL2CPP_STRUCT_WwiseEventSystem_SoundHandleProtected__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WwiseEventSystem_SoundHandleProtected__Fields_DEFINED) && !defined(IL2CPP_STRUCT_WwiseEventSystem_SoundHandleProtected__Fields_FWDDECL)
#include <Modloader/app/structs/WwiseEventSystem_SoundHandleProtected__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WwiseEventSystem_SoundHandleProtected__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
