#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Button_1__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Button_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Button_1__Fields_DEFINED)
#include <Modloader/app/structs/UIInteractable__Fields.h>
#if defined(IL2CPP_STRUCT_UIInteractable__Fields_DEFINED)
#define IL2CPP_STRUCT_Button_1__Fields_DEFINED
struct LegacyTimelineSequence;
struct Image_1;
struct Text_1;
struct InputTrigger;
struct Action_1_Moon_UI_UIContext_;
struct Button_1__Fields {
    struct UIInteractable__Fields _;
    struct LegacyTimelineSequence* NormalSequence;
    struct LegacyTimelineSequence* HightlightSequence;
    struct LegacyTimelineSequence* PressedSequence;
    struct LegacyTimelineSequence* DisabledSequence;
    struct Image_1* m_image;
    struct Text_1* m_text;
    struct InputTrigger* m_inputTrigger;
    struct Action_1_Moon_UI_UIContext_* OnClick;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Button_1__Fields_FWDDECL)
#define IL2CPP_STRUCT_Button_1__Fields_FWDDECL
#include <Modloader/app/structs/Action_1_Moon_UI_UIContext_.h>
#include <Modloader/app/structs/Image_1.h>
#include <Modloader/app/structs/InputTrigger.h>
#include <Modloader/app/structs/LegacyTimelineSequence.h>
#include <Modloader/app/structs/Text_1.h>
#endif
#undef IL2CPP_STRUCT_Button_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Button_1__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Button_1__Fields_FWDDECL)
#include <Modloader/app/structs/Button_1__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Button_1__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
