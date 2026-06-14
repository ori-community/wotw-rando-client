#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BlendAnimation2D_InputContainer__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BlendAnimation2D_InputContainer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BlendAnimation2D_InputContainer__Fields_DEFINED)
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_BlendAnimation2D_InputContainer__Fields_DEFINED
struct BlendAnimation2D_Input;
struct __declspec(align(8)) BlendAnimation2D_InputContainer__Fields {
    struct BlendAnimation2D_Input* Input;
    struct Vector2 GridIndex;
    struct Vector2 Value;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BlendAnimation2D_InputContainer__Fields_FWDDECL)
#define IL2CPP_STRUCT_BlendAnimation2D_InputContainer__Fields_FWDDECL
#include <Modloader/app/structs/BlendAnimation2D_Input.h>
#endif
#undef IL2CPP_STRUCT_BlendAnimation2D_InputContainer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BlendAnimation2D_InputContainer__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BlendAnimation2D_InputContainer__Fields_FWDDECL)
#include <Modloader/app/structs/BlendAnimation2D_InputContainer__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BlendAnimation2D_InputContainer__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
