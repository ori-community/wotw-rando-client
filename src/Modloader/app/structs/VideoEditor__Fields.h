#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VideoEditor__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VideoEditor__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VideoEditor__Fields_DEFINED)
#include <Modloader/app/structs/ColorBlock.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_ColorBlock_DEFINED)
#define IL2CPP_STRUCT_VideoEditor__Fields_DEFINED
struct Button;
struct Canvas;
struct EventSystem;
struct List_1_UnityEngine_UI_Button_;
struct VideoPlayer;
struct AudioSource;
struct VideoProgressBar;
struct VideoTrimMarker;
struct Image;
struct RawImage;
struct RectTransform;
struct List_1_UnityEngine_GameObject_;
struct GUIStyle;
struct VideoEditor__Fields {
    struct MonoBehaviour__Fields _;
    struct Button* m_recordButton;
    struct Button* m_playButton;
    struct Canvas* m_canvas;
    struct EventSystem* m_eventSystem;
    struct List_1_UnityEngine_UI_Button_* m_buttonsToDestroyOnSwitch;
    struct VideoPlayer* m_videoPlayer;
    struct AudioSource* m_audioSource;
    struct VideoProgressBar* m_progressBar;
    struct VideoTrimMarker* m_start;
    struct VideoTrimMarker* m_end;
    struct Image* segment;
    struct RawImage* m_image;
    struct RectTransform* m_imageTransform;
    bool m_playing;
    float m_playTime;
    struct List_1_UnityEngine_GameObject_* m_segments;
    struct Vector3 m_mousePosition;
    bool m_recording;
    struct ColorBlock m_activeColor;
    struct ColorBlock m_inactiveColor;
    bool DoTrim;
    bool TrimReady;
    bool DoneSeeking;
    struct GUIStyle* m_labelStyle;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VideoEditor__Fields_FWDDECL)
#define IL2CPP_STRUCT_VideoEditor__Fields_FWDDECL
#include <Modloader/app/structs/AudioSource.h>
#include <Modloader/app/structs/Button.h>
#include <Modloader/app/structs/Canvas.h>
#include <Modloader/app/structs/EventSystem.h>
#include <Modloader/app/structs/GUIStyle.h>
#include <Modloader/app/structs/Image.h>
#include <Modloader/app/structs/List_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/List_1_UnityEngine_UI_Button_.h>
#include <Modloader/app/structs/RawImage.h>
#include <Modloader/app/structs/RectTransform.h>
#include <Modloader/app/structs/VideoPlayer.h>
#include <Modloader/app/structs/VideoProgressBar.h>
#include <Modloader/app/structs/VideoTrimMarker.h>
#endif
#undef IL2CPP_STRUCT_VideoEditor__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VideoEditor__Fields_DEFINED) && !defined(IL2CPP_STRUCT_VideoEditor__Fields_FWDDECL)
#include <Modloader/app/structs/VideoEditor__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VideoEditor__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
