#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MovieTextureControllerB__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MovieTextureControllerB__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MovieTextureControllerB__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_MovieTextureControllerB__Fields_DEFINED
struct VideoDescriptor;
struct Renderer;
struct AudioSource;
struct ActionMethod;
struct MessageProvider;
struct GameObject;
struct LegacyAnimator__Array;
struct MessageBox;
struct GUISkin;
struct MovieTextureControllerB__Fields {
    struct MonoBehaviour__Fields _;
    struct VideoDescriptor* VideoDescriptor;
    struct Renderer* MovieTextureRenderer;
    struct AudioSource* MovieAudioSource;
    struct ActionMethod* OnFinishedAction;
    struct MessageProvider* PressToSkipVideoMessage;
    struct GameObject* PauseDimmer;
    struct LegacyAnimator__Array* m_dimmerAnimators;
    bool m_started;
    bool DestroyOnFinish;
    bool PlayAtStart;
    bool CanBePaused;
    bool CanBeSkipped;
    bool SkippedWithButtonPress;
    bool Loop;
    bool UseAudio;
    float m_movieTexturePlayingDuration;
    struct MessageBox* m_messageScreen;
    bool m_pausedByPlayer;
    bool m_finished;
    float m_prevTimeScale;
    struct GUISkin* Skin;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MovieTextureControllerB__Fields_FWDDECL)
#define IL2CPP_STRUCT_MovieTextureControllerB__Fields_FWDDECL
#include <Modloader/app/structs/ActionMethod.h>
#include <Modloader/app/structs/AudioSource.h>
#include <Modloader/app/structs/GUISkin.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/LegacyAnimator__Array.h>
#include <Modloader/app/structs/MessageBox.h>
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/Renderer.h>
#include <Modloader/app/structs/VideoDescriptor.h>
#endif
#undef IL2CPP_STRUCT_MovieTextureControllerB__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MovieTextureControllerB__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MovieTextureControllerB__Fields_FWDDECL)
#include <Modloader/app/structs/MovieTextureControllerB__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MovieTextureControllerB__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
