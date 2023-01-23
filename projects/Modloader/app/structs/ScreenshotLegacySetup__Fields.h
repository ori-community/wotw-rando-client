#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ScreenshotLegacySetup__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ScreenshotLegacySetup__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScreenshotLegacySetup__Fields_DEFINED)
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_ScreenshotLegacySetup__Fields_DEFINED
struct String;
struct Type;
struct __declspec(align(8)) ScreenshotLegacySetup__Fields {
    struct String* GameObjectName;
    struct String* TypeName;
    struct String* HierarchyPath;
    struct Vector2 Position;
    struct String* PrefabGUID;
    bool MarkedAsTurd;
    struct Type* m_type;
    struct String* m_formattedName;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ScreenshotLegacySetup__Fields_FWDDECL)
#define IL2CPP_STRUCT_ScreenshotLegacySetup__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>
#endif
#undef IL2CPP_STRUCT_ScreenshotLegacySetup__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScreenshotLegacySetup__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ScreenshotLegacySetup__Fields_FWDDECL)
#include <Modloader/app/structs/ScreenshotLegacySetup__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ScreenshotLegacySetup__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
