#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BrowserCursor__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BrowserCursor__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BrowserCursor__Fields_DEFINED)
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_BrowserCursor__Fields_DEFINED
struct Action;
struct Texture2D;
struct __declspec(align(8)) BrowserCursor__Fields {
    struct Action* cursorChange;
    struct Texture2D* _Texture_k__BackingField;
    struct Vector2 _Hotspot_k__BackingField;
    bool _hasMouse;
    struct Texture2D* normalTexture;
    struct Texture2D* customTexture;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BrowserCursor__Fields_FWDDECL)
#define IL2CPP_STRUCT_BrowserCursor__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/Texture2D.h>
#endif
#undef IL2CPP_STRUCT_BrowserCursor__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BrowserCursor__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BrowserCursor__Fields_FWDDECL)
#include <Modloader/app/structs/BrowserCursor__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BrowserCursor__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
