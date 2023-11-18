#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Input_Dbg__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Input_Dbg__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Input_Dbg__StaticFields_DEFINED)
#define IL2CPP_STRUCT_Input_Dbg__StaticFields_DEFINED
struct Input_InputButtonProcessor;
struct Input_Dbg__StaticFields {
    struct Input_InputButtonProcessor* Down;
    struct Input_InputButtonProcessor* Up;
    struct Input_InputButtonProcessor* Left;
    struct Input_InputButtonProcessor* Right;
    struct Input_InputButtonProcessor* LeftShoulder;
    struct Input_InputButtonProcessor* RightShoulder;
    struct Input_InputButtonProcessor* LeftTrigger;
    struct Input_InputButtonProcessor* RightTrigger;
    struct Input_InputButtonProcessor* Start;
    struct Input_InputButtonProcessor* AnyStart;
    struct Input_InputButtonProcessor* Select;
    struct Input_InputButtonProcessor* LeftStick;
    struct Input_InputButtonProcessor* RightStick;
    struct Input_InputButtonProcessor* ActionButtonA;
    struct Input_InputButtonProcessor* ActionButtonB;
    struct Input_InputButtonProcessor* ActionButtonX;
    struct Input_InputButtonProcessor* ActionButtonY;
    struct Input_InputButtonProcessor* Cancel;
};
#endif
#if !defined(IL2CPP_STRUCT_Input_Dbg__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_Input_Dbg__StaticFields_FWDDECL
#include <Modloader/app/structs/Input_InputButtonProcessor.h>
#endif
#undef IL2CPP_STRUCT_Input_Dbg__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Input_Dbg__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_Input_Dbg__StaticFields_FWDDECL)
#include <Modloader/app/structs/Input_Dbg__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Input_Dbg__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
