#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CleverValueSlider__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CleverValueSlider__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CleverValueSlider__Fields_DEFINED)
#include <Modloader/app/structs/CleverMenuItemGroupBase__Fields.h>
#include <Modloader/app/structs/Rect.h>
#if defined(IL2CPP_STRUCT_CleverMenuItemGroupBase__Fields_DEFINED) && defined(IL2CPP_STRUCT_Rect_DEFINED)
#define IL2CPP_STRUCT_CleverValueSlider__Fields_DEFINED
struct CleverMenuItem;
struct SoundProvider;
struct MessageBox__Array;
struct MessageProvider;
struct BaseAnimator;
struct Transform;
struct SoundPlayer;
struct TextBox;
struct CleverValueSlider__Fields {
    struct CleverMenuItemGroupBase__Fields _;
    struct CleverMenuItem* CleverMenuItem;
    struct SoundProvider* ChangeVolumeUpSound;
    struct SoundProvider* ChangeVolumeDownSound;
    float MinValue;
    float MaxValue;
    float DefaultValue;
    float m_step;
    struct MessageBox__Array* NavigateMessageBoxes;
    struct MessageProvider* ActivateNavigateMessageProvider;
    struct MessageProvider* DeactivateNavigateMessageProvider;
    struct BaseAnimator* HighlightAnimator;
    struct Transform* SliderDot;
    struct Transform* SliderBackground;
    struct Transform* SliderDefaultValueBar;
    float MinX;
    float MaxX;
    bool SnapSliderAroundDefault;
    bool ForceDefaultToCenter;
    struct SoundPlayer* m_soundPlayer;
    struct TextBox* ValueTextBox;
    struct Rect m_sliderRect;
    float m_defaultValueSnapRange;
    bool m_isActive;
    bool _IsVisible_k__BackingField;
    bool m_isHighlightVisible;
    float m_holdRemainingTime;
    float m_holdAccelerationTime;
    bool m_isDragged;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CleverValueSlider__Fields_FWDDECL)
#define IL2CPP_STRUCT_CleverValueSlider__Fields_FWDDECL
#include <Modloader/app/structs/BaseAnimator.h>
#include <Modloader/app/structs/CleverMenuItem.h>
#include <Modloader/app/structs/MessageBox__Array.h>
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/SoundPlayer.h>
#include <Modloader/app/structs/SoundProvider.h>
#include <Modloader/app/structs/TextBox.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_CleverValueSlider__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CleverValueSlider__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CleverValueSlider__Fields_FWDDECL)
#include <Modloader/app/structs/CleverValueSlider__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CleverValueSlider__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
