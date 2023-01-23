#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DefaultControls__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DefaultControls__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DefaultControls__StaticFields_DEFINED)
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_Color_DEFINED)
#define IL2CPP_STRUCT_DefaultControls__StaticFields_DEFINED
struct DefaultControls__StaticFields {
    struct Vector2 s_ThickElementSize;
    struct Vector2 s_ThinElementSize;
    struct Vector2 s_ImageElementSize;
    struct Color s_DefaultSelectableColor;
    struct Color s_PanelColor;
    struct Color s_TextColor;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DefaultControls__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_DefaultControls__StaticFields_FWDDECL
#endif
#undef IL2CPP_STRUCT_DefaultControls__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DefaultControls__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_DefaultControls__StaticFields_FWDDECL)
#include <Modloader/app/structs/DefaultControls__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DefaultControls__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
