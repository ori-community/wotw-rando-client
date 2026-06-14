#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PointerUIGUI__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PointerUIGUI__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PointerUIGUI__Fields_DEFINED)
#include <Modloader/app/structs/PointerUIBase__Fields.h>
#if defined(IL2CPP_STRUCT_PointerUIBase__Fields_DEFINED)
#define IL2CPP_STRUCT_PointerUIGUI__Fields_DEFINED
struct RawImage;
struct BaseRaycaster;
struct RectTransform;
struct PointerUIGUI__Fields {
    struct PointerUIBase__Fields _;
    struct RawImage* myImage;
    bool enableInput;
    bool automaticResize;
    struct BaseRaycaster* raycaster;
    struct RectTransform* rTransform;
    bool _mouseHasFocus;
    bool _keyboardHasFocus;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PointerUIGUI__Fields_FWDDECL)
#define IL2CPP_STRUCT_PointerUIGUI__Fields_FWDDECL
#include <Modloader/app/structs/BaseRaycaster.h>
#include <Modloader/app/structs/RawImage.h>
#include <Modloader/app/structs/RectTransform.h>
#endif
#undef IL2CPP_STRUCT_PointerUIGUI__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PointerUIGUI__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PointerUIGUI__Fields_FWDDECL)
#include <Modloader/app/structs/PointerUIGUI__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PointerUIGUI__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
