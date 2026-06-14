#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Input_InputButtonProcessor__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Input_InputButtonProcessor__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Input_InputButtonProcessor__Fields_DEFINED)
#define IL2CPP_STRUCT_Input_InputButtonProcessor__Fields_DEFINED
struct __declspec(align(8)) Input_InputButtonProcessor__Fields {
    bool WasPressed;
    bool IsPressed;
    bool Used;
    int32_t _ForcePressedFrames_k__BackingField;
};
#endif
#if !defined(IL2CPP_STRUCT_Input_InputButtonProcessor__Fields_FWDDECL)
#define IL2CPP_STRUCT_Input_InputButtonProcessor__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_Input_InputButtonProcessor__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Input_InputButtonProcessor__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Input_InputButtonProcessor__Fields_FWDDECL)
#include <Modloader/app/structs/Input_InputButtonProcessor__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Input_InputButtonProcessor__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
