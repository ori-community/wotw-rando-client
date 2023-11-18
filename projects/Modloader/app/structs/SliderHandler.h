#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SliderHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SliderHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_SliderHandler_DEFINED)
#include <Modloader/app/structs/Rect.h>
#if defined(IL2CPP_STRUCT_Rect_DEFINED)
#define IL2CPP_STRUCT_SliderHandler_DEFINED
struct GUIStyle;
struct SliderHandler {
    struct Rect position;
    float currentValue;
    float size;
    float start;
    float end;
    struct GUIStyle* slider;
    struct GUIStyle* thumb;
    bool horiz;
    int32_t id;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SliderHandler_FWDDECL)
#define IL2CPP_STRUCT_SliderHandler_FWDDECL
#include <Modloader/app/structs/GUIStyle.h>
#endif
#undef IL2CPP_STRUCT_SliderHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_SliderHandler_DEFINED) && !defined(IL2CPP_STRUCT_SliderHandler_FWDDECL)
#include <Modloader/app/structs/SliderHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SliderHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
