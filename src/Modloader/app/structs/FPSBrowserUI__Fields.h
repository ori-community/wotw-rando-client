#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FPSBrowserUI__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FPSBrowserUI__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FPSBrowserUI__Fields_DEFINED)
#include <Modloader/app/structs/ClickMeshBrowserUI__Fields.h>
#if defined(IL2CPP_STRUCT_ClickMeshBrowserUI__Fields_DEFINED)
#define IL2CPP_STRUCT_FPSBrowserUI__Fields_DEFINED
struct Transform;
struct FPSCursorRenderer;
struct FPSBrowserUI__Fields {
    struct ClickMeshBrowserUI__Fields _;
    struct Transform* worldPointer;
    struct FPSCursorRenderer* cursorRenderer;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FPSBrowserUI__Fields_FWDDECL)
#define IL2CPP_STRUCT_FPSBrowserUI__Fields_FWDDECL
#include <Modloader/app/structs/FPSCursorRenderer.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_FPSBrowserUI__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FPSBrowserUI__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FPSBrowserUI__Fields_FWDDECL)
#include <Modloader/app/structs/FPSBrowserUI__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FPSBrowserUI__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
