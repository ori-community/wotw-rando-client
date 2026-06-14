#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GUIController_FontPackage__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GUIController_FontPackage__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GUIController_FontPackage__Fields_DEFINED)
#define IL2CPP_STRUCT_GUIController_FontPackage__Fields_DEFINED
struct CCFont;
struct Texture2D;
struct __declspec(align(8)) GUIController_FontPackage__Fields {
    struct CCFont* font;
    struct Texture2D* atlas;
    struct Texture2D* distanceMap;
};
#endif
#if !defined(IL2CPP_STRUCT_GUIController_FontPackage__Fields_FWDDECL)
#define IL2CPP_STRUCT_GUIController_FontPackage__Fields_FWDDECL
#include <Modloader/app/structs/CCFont.h>
#include <Modloader/app/structs/Texture2D.h>
#endif
#undef IL2CPP_STRUCT_GUIController_FontPackage__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GUIController_FontPackage__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GUIController_FontPackage__Fields_FWDDECL)
#include <Modloader/app/structs/GUIController_FontPackage__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GUIController_FontPackage__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
