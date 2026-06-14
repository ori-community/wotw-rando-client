#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerGrabPushPullHintSystem__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerGrabPushPullHintSystem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerGrabPushPullHintSystem__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayerGrabPushPullHintSystem__Fields_DEFINED
struct SeinCharacter;
struct MessageProvider;
struct MessageBox;
struct PlayerGrabPushPullHintSystem__Fields {
    struct MonoBehaviour__Fields _;
    struct SeinCharacter* Sein;
    struct MessageProvider* PressToGrabMessage;
    struct MessageProvider* PressToPushOrPullMessage;
    struct MessageProvider* PressToGrabOrBashMessage;
    struct MessageProvider* FreeHandsToPushPullMessage;
    float m_timeOfLastPressToGrabMessage;
    float m_timeOfLastPressToPushOrPullMessage;
    struct MessageBox* m_pressToGrab;
    struct MessageBox* m_pressToPushOrPull;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerGrabPushPullHintSystem__Fields_FWDDECL)
#define IL2CPP_STRUCT_PlayerGrabPushPullHintSystem__Fields_FWDDECL
#include <Modloader/app/structs/MessageBox.h>
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/SeinCharacter.h>
#endif
#undef IL2CPP_STRUCT_PlayerGrabPushPullHintSystem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerGrabPushPullHintSystem__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PlayerGrabPushPullHintSystem__Fields_FWDDECL)
#include <Modloader/app/structs/PlayerGrabPushPullHintSystem__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerGrabPushPullHintSystem__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
