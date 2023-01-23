#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CharMetaData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CharMetaData_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharMetaData_DEFINED)
#include <Modloader/app/structs/CharType__Enum.h>
#include <Modloader/app/structs/Color32.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_CharType__Enum_DEFINED) && defined(IL2CPP_STRUCT_Color32_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_CharMetaData_DEFINED
struct BitmapFont;
struct TextRenderer;
struct CharMetaData {
    uint16_t id;
    int32_t unstyledIndex;
    CharType__Enum type;

    struct Color32 color;
    float scale;
    struct Vector2 positionInBox;
    struct BitmapFont* font;
    struct TextRenderer* renderer;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CharMetaData_FWDDECL)
#define IL2CPP_STRUCT_CharMetaData_FWDDECL
#include <Modloader/app/structs/BitmapFont.h>
#include <Modloader/app/structs/TextRenderer.h>
#endif
#undef IL2CPP_STRUCT_CharMetaData_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharMetaData_DEFINED) && !defined(IL2CPP_STRUCT_CharMetaData_FWDDECL)
#include <Modloader/app/structs/CharMetaData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CharMetaData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
