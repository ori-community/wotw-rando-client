#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BlendAnimation2D_Input__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BlendAnimation2D_Input__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BlendAnimation2D_Input__Fields_DEFINED)
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_BlendAnimation2D_Input__Fields_DEFINED
struct MoonAnimation;
struct __declspec(align(8)) BlendAnimation2D_Input__Fields {
    struct Vector2 Value;
    int32_t GridIndex;
    struct MoonAnimation* Animation;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BlendAnimation2D_Input__Fields_FWDDECL)
#define IL2CPP_STRUCT_BlendAnimation2D_Input__Fields_FWDDECL
#include <Modloader/app/structs/MoonAnimation.h>
#endif
#undef IL2CPP_STRUCT_BlendAnimation2D_Input__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BlendAnimation2D_Input__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BlendAnimation2D_Input__Fields_FWDDECL)
#include <Modloader/app/structs/BlendAnimation2D_Input__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BlendAnimation2D_Input__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
