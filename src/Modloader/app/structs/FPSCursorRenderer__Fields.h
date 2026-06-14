#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FPSCursorRenderer__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FPSCursorRenderer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FPSCursorRenderer__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_FPSCursorRenderer__Fields_DEFINED
struct Transform;
struct BrowserCursor;
struct FPSCursorRenderer__Fields {
    struct MonoBehaviour__Fields _;
    float scale;
    float maxDistance;
    struct Transform* pointer;
    bool _EnableInput_k__BackingField;
    struct BrowserCursor* baseCursor;
    struct BrowserCursor* currentCursor;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FPSCursorRenderer__Fields_FWDDECL)
#define IL2CPP_STRUCT_FPSCursorRenderer__Fields_FWDDECL
#include <Modloader/app/structs/BrowserCursor.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_FPSCursorRenderer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FPSCursorRenderer__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FPSCursorRenderer__Fields_FWDDECL)
#include <Modloader/app/structs/FPSCursorRenderer__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FPSCursorRenderer__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
