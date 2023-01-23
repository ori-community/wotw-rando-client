#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ScreenshotIconData__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ScreenshotIconData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScreenshotIconData__Fields_DEFINED)
#include <Modloader/app/structs/ScreenshotIconGroup__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_ScreenshotIconGroup__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_ScreenshotIconData__Fields_DEFINED
struct String;
struct __declspec(align(8)) ScreenshotIconData__Fields {
    struct String* Name;
    ScreenshotIconGroup__Enum Group;

    int32_t SubGroup;
    struct String* IconPath;
    struct Vector3 Position;
    bool Legacy;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ScreenshotIconData__Fields_FWDDECL)
#define IL2CPP_STRUCT_ScreenshotIconData__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_ScreenshotIconData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScreenshotIconData__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ScreenshotIconData__Fields_FWDDECL)
#include <Modloader/app/structs/ScreenshotIconData__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ScreenshotIconData__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
