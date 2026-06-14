#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CharMetaData_1_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CharMetaData_1_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharMetaData_1_DEFINED)
#include <Modloader/app/structs/CharType__Enum_1.h>
#include <Modloader/app/structs/Color32.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_CharType__Enum_1_DEFINED) && defined(IL2CPP_STRUCT_Color32_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_CharMetaData_1_DEFINED
struct BitmapFont_1;
struct TextRenderer_1;
struct CharMetaData_1 {
    uint16_t id;
    int32_t unstyledIndex;
    CharType__Enum_1 type;

    struct Color32 color;
    float scale;
    struct Vector2 positionInBox;
    struct BitmapFont_1* font;
    struct TextRenderer_1* renderer;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CharMetaData_1_FWDDECL)
#define IL2CPP_STRUCT_CharMetaData_1_FWDDECL
#include <Modloader/app/structs/BitmapFont_1.h>
#include <Modloader/app/structs/TextRenderer_1.h>
#endif
#undef IL2CPP_STRUCT_CharMetaData_1_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharMetaData_1_DEFINED) && !defined(IL2CPP_STRUCT_CharMetaData_1_FWDDECL)
#include <Modloader/app/structs/CharMetaData_1.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CharMetaData_1.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
