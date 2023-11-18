#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CatAndMouseRoomTimerController__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CatAndMouseRoomTimerController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CatAndMouseRoomTimerController__Fields_DEFINED)
#include <Modloader/app/structs/Suspendable__Fields.h>
#if defined(IL2CPP_STRUCT_Suspendable__Fields_DEFINED)
#define IL2CPP_STRUCT_CatAndMouseRoomTimerController__Fields_DEFINED
struct GameObject;
struct SoundSource;
struct LegacyTimelineSequence;
struct CatAndMouseRoomTimerController__Fields {
    struct Suspendable__Fields _;
    float RoomTime;
    struct GameObject* RoomController;
    struct SoundSource* KuroAlertSound;
    struct SoundSource* KuroWingFlapSound;
    struct SoundSource* KuroGettingNearSound;
    struct SoundSource* KuroFlyOffSound;
    float m_time;
    bool m_active;
    struct LegacyTimelineSequence* FeedbackSequence;
    bool _IsSuspended_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CatAndMouseRoomTimerController__Fields_FWDDECL)
#define IL2CPP_STRUCT_CatAndMouseRoomTimerController__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/LegacyTimelineSequence.h>
#include <Modloader/app/structs/SoundSource.h>
#endif
#undef IL2CPP_STRUCT_CatAndMouseRoomTimerController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CatAndMouseRoomTimerController__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CatAndMouseRoomTimerController__Fields_FWDDECL)
#include <Modloader/app/structs/CatAndMouseRoomTimerController__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CatAndMouseRoomTimerController__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
