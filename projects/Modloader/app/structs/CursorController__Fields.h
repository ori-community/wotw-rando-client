#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CursorController__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CursorController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CursorController__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_CursorController__Fields_DEFINED
struct LegacyTransparencyAnimator;
struct Texture2D;
struct CursorController__Fields {
    struct MonoBehaviour__Fields _;
    struct LegacyTransparencyAnimator* Transparency;
    struct Vector2 m_mousePosition;
    struct Texture2D* CursorTexture;
    struct Vector2 Offset;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CursorController__Fields_FWDDECL)
#define IL2CPP_STRUCT_CursorController__Fields_FWDDECL
#include <Modloader/app/structs/LegacyTransparencyAnimator.h>
#include <Modloader/app/structs/Texture2D.h>
#endif
#undef IL2CPP_STRUCT_CursorController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CursorController__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CursorController__Fields_FWDDECL)
#include <Modloader/app/structs/CursorController__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CursorController__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
