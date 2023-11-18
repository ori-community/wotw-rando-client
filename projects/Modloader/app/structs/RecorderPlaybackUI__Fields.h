#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RecorderPlaybackUI__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RecorderPlaybackUI__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RecorderPlaybackUI__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_RecorderPlaybackUI__Fields_DEFINED
struct RecorderPlaybackUITimeline;
struct GameObject;
struct IButtonInput;
struct Input_InputButtonProcessor;
struct RecorderPlaybackUI__Fields {
    struct MonoBehaviour__Fields _;
    float BlastTimeScale;
    int32_t FrameToStopAt;
    bool ShouldStopAfterFrameToStopAt;
    struct RecorderPlaybackUITimeline* Timeline;
    bool IsJumpingToFrame;
    struct GameObject* HelpTexture;
    struct GameObject* XboxControllerTexture;
    struct GameObject* InspectorUI;
    bool m_hideTimeline;
    bool m_isBlast;
    bool m_isStopped;
    bool m_shouldExit;
    int32_t m_speed;
    struct IButtonInput* m_togglePlayPauseButtonInput;
    struct IButtonInput* m_blastButtonInput;
    struct IButtonInput* m_breakButtonInput;
    struct IButtonInput* m_toggleVisibilityButtonInput;
    struct IButtonInput* m_leftTrigger;
    struct IButtonInput* m_rightTrigger;
    struct Input_InputButtonProcessor* PlayPauseButton;
    struct Input_InputButtonProcessor* BlastButton;
    struct Input_InputButtonProcessor* BreakButton;
    struct Input_InputButtonProcessor* VisibilityButton;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RecorderPlaybackUI__Fields_FWDDECL)
#define IL2CPP_STRUCT_RecorderPlaybackUI__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/IButtonInput.h>
#include <Modloader/app/structs/Input_InputButtonProcessor.h>
#include <Modloader/app/structs/RecorderPlaybackUITimeline.h>
#endif
#undef IL2CPP_STRUCT_RecorderPlaybackUI__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RecorderPlaybackUI__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RecorderPlaybackUI__Fields_FWDDECL)
#include <Modloader/app/structs/RecorderPlaybackUI__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RecorderPlaybackUI__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
