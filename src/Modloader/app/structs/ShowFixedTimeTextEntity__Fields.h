#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ShowFixedTimeTextEntity__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ShowFixedTimeTextEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShowFixedTimeTextEntity__Fields_DEFINED)
#include <Modloader/app/structs/ShowFixedTimeTextEntity_InteractionType__Enum.h>
#include <Modloader/app/structs/ShowFixedTimeTextEntity_MessageType__Enum.h>
#include <Modloader/app/structs/TimelineEntity__Fields.h>
#if defined(IL2CPP_STRUCT_TimelineEntity__Fields_DEFINED) && defined(IL2CPP_STRUCT_ShowFixedTimeTextEntity_MessageType__Enum_DEFINED) && defined(IL2CPP_STRUCT_ShowFixedTimeTextEntity_InteractionType__Enum_DEFINED)
#define IL2CPP_STRUCT_ShowFixedTimeTextEntity__Fields_DEFINED
struct GameObject;
struct MessageProvider;
struct MoonReference_1_MessageProvider_;
struct ShowFixedTimeTextEntity_TextVisuals;
struct Action_1_MessageBox_HideAction_;
struct MoonReference_1_Moon_Wwise_SoundHost_;
struct MoonReference_1_NPCEntity_;
struct InteractiveMessageBox;
struct MessageBox;
struct WriteOutTextBox;
struct MoonTimeline;
struct Action;
struct ShowFixedTimeTextEntity__Fields {
    struct TimelineEntity__Fields _;
    ShowFixedTimeTextEntity_MessageType__Enum Type;

    struct GameObject* MessageIcon;
    struct MessageProvider* m_messageProvider;
    struct MoonReference_1_MessageProvider_* m_dynamicMessage;
    float MinWaitTime;
    bool IsInteractive;
    int32_t StartMessageId;
    int32_t EndMessageId;
    bool FreezeTime;
    bool HideHud;
    float MaxWaitTime;
    float LineGapSeconds;
    struct ShowFixedTimeTextEntity_TextVisuals* VisualsOffset;
    bool LockInput;
    bool ForceStopTimelineOnEndHack;
    bool ForceNewAPIToCalculateDuration;
    struct Action_1_MessageBox_HideAction_* FinishedReading;
    struct MoonReference_1_Moon_Wwise_SoundHost_* SoundHost;
    ShowFixedTimeTextEntity_InteractionType__Enum Interaction;

    struct MoonReference_1_NPCEntity_* NPCTalk;
    float m_time;
    float m_messageTimer;
    struct InteractiveMessageBox* m_box;
    struct MessageBox* m_message;
    struct WriteOutTextBox* m_writeOut;
    bool m_resettedWriteOut;
    struct MoonTimeline* m_parentTimeline;
    struct Action* OnNextMessage;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ShowFixedTimeTextEntity__Fields_FWDDECL)
#define IL2CPP_STRUCT_ShowFixedTimeTextEntity__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/Action_1_MessageBox_HideAction_.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/InteractiveMessageBox.h>
#include <Modloader/app/structs/MessageBox.h>
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/MoonReference_1_MessageProvider_.h>
#include <Modloader/app/structs/MoonReference_1_Moon_Wwise_SoundHost_.h>
#include <Modloader/app/structs/MoonReference_1_NPCEntity_.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/ShowFixedTimeTextEntity_TextVisuals.h>
#include <Modloader/app/structs/WriteOutTextBox.h>
#endif
#undef IL2CPP_STRUCT_ShowFixedTimeTextEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShowFixedTimeTextEntity__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ShowFixedTimeTextEntity__Fields_FWDDECL)
#include <Modloader/app/structs/ShowFixedTimeTextEntity__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ShowFixedTimeTextEntity__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
