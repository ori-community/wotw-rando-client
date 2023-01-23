#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NavigableOnGUI__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NavigableOnGUI__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NavigableOnGUI__Fields_DEFINED)
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/NavigableOnGUI_Tracker.h>
#include <Modloader/app/structs/Rect.h>
#if defined(IL2CPP_STRUCT_NavigableOnGUI_Tracker_DEFINED) && defined(IL2CPP_STRUCT_Rect_DEFINED) && defined(IL2CPP_STRUCT_Color_DEFINED)
#define IL2CPP_STRUCT_NavigableOnGUI__Fields_DEFINED
struct String;
struct __declspec(align(8)) NavigableOnGUI__Fields {
    struct NavigableOnGUI_Tracker vertical;
    struct NavigableOnGUI_Tracker horizontal;
    bool isHorizontal;
    struct String* currentControl;
    struct Rect currentControlRect;
    float sliderDeadZone;
    float sliderSensitivity;
    bool inputActivate;
    float inputSlider;
    bool inputLeft;
    bool inputRight;
    bool inputDown;
    bool inputUp;
    float dpadUpDelay;
    float dpadDownDelay;
    float dpadUpTime;
    float dpadDownTime;
    float lastDpadX;
    float lastDpadY;
    float lastLeftStickX;
    float lastLeftStickY;
    struct Color prevControlColor;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NavigableOnGUI__Fields_FWDDECL)
#define IL2CPP_STRUCT_NavigableOnGUI__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_NavigableOnGUI__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NavigableOnGUI__Fields_DEFINED) && !defined(IL2CPP_STRUCT_NavigableOnGUI__Fields_FWDDECL)
#include <Modloader/app/structs/NavigableOnGUI__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NavigableOnGUI__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
