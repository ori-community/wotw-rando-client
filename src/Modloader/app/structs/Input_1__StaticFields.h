#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Input_1__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Input_1__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Input_1__StaticFields_DEFINED)
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_Input_1__StaticFields_DEFINED
struct Input_InputButtonProcessor__Array;
struct Input_1__StaticFields {
    float Horizontal;
    float Vertical;
    float HorizontalMenu;
    float VerticalMenu;
    int32_t HorizontalDigiPad;
    int32_t VerticalDigiPad;
    int32_t HorizontalKey;
    int32_t VerticalKey;
    float HorizontalAnalogLeft;
    float VerticalAnalogLeft;
    float HorizontalAnalogRight;
    float VerticalAnalogRight;
    float LeftTriggerAxis;
    float RightTriggerAxis;
    struct Vector2 CursorPosition;
    bool CursorMoved;
    struct Input_InputButtonProcessor__Array* m_AllInputProcessors;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Input_1__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_Input_1__StaticFields_FWDDECL
#include <Modloader/app/structs/Input_InputButtonProcessor__Array.h>
#endif
#undef IL2CPP_STRUCT_Input_1__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Input_1__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_Input_1__StaticFields_FWDDECL)
#include <Modloader/app/structs/Input_1__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Input_1__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
