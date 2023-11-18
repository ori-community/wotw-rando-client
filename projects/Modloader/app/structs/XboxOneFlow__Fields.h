#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XboxOneFlow__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XboxOneFlow__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XboxOneFlow__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_XboxOneFlow__Fields_DEFINED
struct MessageProvider;
struct String;
struct XboxOneFlow__Fields {
    struct MonoBehaviour__Fields _;
    struct MessageProvider* OfflineMessageProvider;
    struct MessageProvider* ControllerDisconnectedMessageProvider;
    bool m_engaged;
    bool m_isRequestingUser;
    bool m_isSwitchingUser;
    int32_t m_lastUser;
    int32_t m_saveSlotToUpdate;
    int32_t m_lastActiveUserOnSignOut;
    struct String* m_activeUserWhenPaused;
    bool m_wasOnlineBeforeConstrain;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XboxOneFlow__Fields_FWDDECL)
#define IL2CPP_STRUCT_XboxOneFlow__Fields_FWDDECL
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_XboxOneFlow__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XboxOneFlow__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XboxOneFlow__Fields_FWDDECL)
#include <Modloader/app/structs/XboxOneFlow__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XboxOneFlow__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
