#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XboxControllerRenderer_ButtonContainer__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XboxControllerRenderer_ButtonContainer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XboxControllerRenderer_ButtonContainer__Fields_DEFINED)
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/XboxControllerRenderer_Button__Enum.h>
#if defined(IL2CPP_STRUCT_XboxControllerRenderer_Button__Enum_DEFINED) && defined(IL2CPP_STRUCT_Color_DEFINED)
#define IL2CPP_STRUCT_XboxControllerRenderer_ButtonContainer__Fields_DEFINED
struct String;
struct Renderer;
struct __declspec(align(8)) XboxControllerRenderer_ButtonContainer__Fields {
    struct String* name;
    XboxControllerRenderer_Button__Enum button;

    struct Renderer* renderer;
    struct Color color;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XboxControllerRenderer_ButtonContainer__Fields_FWDDECL)
#define IL2CPP_STRUCT_XboxControllerRenderer_ButtonContainer__Fields_FWDDECL
#include <Modloader/app/structs/Renderer.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_XboxControllerRenderer_ButtonContainer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XboxControllerRenderer_ButtonContainer__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XboxControllerRenderer_ButtonContainer__Fields_FWDDECL)
#include <Modloader/app/structs/XboxControllerRenderer_ButtonContainer__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XboxControllerRenderer_ButtonContainer__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
