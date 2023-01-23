#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ScreenshotIcon__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ScreenshotIcon__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScreenshotIcon__Fields_DEFINED)
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_ScreenshotIcon__Fields_DEFINED
struct String;
struct Type;
struct __declspec(align(8)) ScreenshotIcon__Fields {
    struct String* FullTypeName;
    int32_t EnumIntegerValue;
    struct Vector2 Position;
    struct Type* m_type;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ScreenshotIcon__Fields_FWDDECL)
#define IL2CPP_STRUCT_ScreenshotIcon__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>
#endif
#undef IL2CPP_STRUCT_ScreenshotIcon__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScreenshotIcon__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ScreenshotIcon__Fields_FWDDECL)
#include <Modloader/app/structs/ScreenshotIcon__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ScreenshotIcon__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
