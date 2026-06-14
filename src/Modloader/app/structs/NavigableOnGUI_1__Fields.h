#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NavigableOnGUI_1__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NavigableOnGUI_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NavigableOnGUI_1__Fields_DEFINED)
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/NavigableOnGUI_Tracker_1.h>
#if defined(IL2CPP_STRUCT_NavigableOnGUI_Tracker_1_DEFINED) && defined(IL2CPP_STRUCT_Color_DEFINED)
#define IL2CPP_STRUCT_NavigableOnGUI_1__Fields_DEFINED
struct String;
struct __declspec(align(8)) NavigableOnGUI_1__Fields {
    struct NavigableOnGUI_Tracker_1 vertical;
    struct NavigableOnGUI_Tracker_1 horizontal;
    bool isHorizontal;
    struct String* currentControl;
    bool changingValue;
    bool waitForInputClear;
    float sliderDeadZone;
    float sliderSensitivity;
    float repeatDuration;
    bool inputActivate;
    float inputSlider;
    bool inputLeft;
    bool inputRight;
    struct Color prevControlColor;
    struct Color prevControlColor2;
    struct Color prevFieldColor;
    struct Color prevFieldColor2;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NavigableOnGUI_1__Fields_FWDDECL)
#define IL2CPP_STRUCT_NavigableOnGUI_1__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_NavigableOnGUI_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NavigableOnGUI_1__Fields_DEFINED) && !defined(IL2CPP_STRUCT_NavigableOnGUI_1__Fields_FWDDECL)
#include <Modloader/app/structs/NavigableOnGUI_1__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NavigableOnGUI_1__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
