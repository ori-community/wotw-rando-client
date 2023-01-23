#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CCText__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CCText__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CCText__Fields_DEFINED)
#include <Modloader/app/structs/CCText_AlignmentMode__Enum.h>
#include <Modloader/app/structs/CCText_BoundingMode__Enum.h>
#include <Modloader/app/structs/CCText_HorizontalAnchorMode__Enum.h>
#include <Modloader/app/structs/CCText_VerticalAnchorMode__Enum.h>
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_CCText_AlignmentMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_CCText_BoundingMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_CCText_HorizontalAnchorMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_CCText_VerticalAnchorMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_Color_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_CCText__Fields_DEFINED
struct CCFont;
struct CCTextModifier;
struct String;
struct Mesh;
struct Vector3__Array;
struct Color__Array;
struct Vector2__Array;
struct Int32__Array;
struct MeshCollider;
struct CCText__Fields {
    struct MonoBehaviour__Fields _;
    CCText_AlignmentMode__Enum alignment;

    CCText_BoundingMode__Enum bounding;

    CCText_HorizontalAnchorMode__Enum horizontalAnchor;

    CCText_VerticalAnchorMode__Enum verticalAnchor;

    int32_t chunkSize;
    struct Color color;
    struct CCFont* font;
    int32_t lineCount;
    float lineHeight;
    float lineWidth;
    struct CCTextModifier* modifier;
    struct Vector3 offset;
    int32_t spriteCount;
    int32_t usedSpriteCount;
    struct String* text;
    float tabSize;
    float width;
    struct Vector3 minBounds;
    struct Vector3 maxBounds;
    struct Mesh* mesh;
    struct Vector3__Array* vertices;
    struct Color__Array* colors;
    struct Vector2__Array* uv;
    struct Int32__Array* triangles;
    struct MeshCollider* meshCollider;
    struct Vector3 caretStart;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CCText__Fields_FWDDECL)
#define IL2CPP_STRUCT_CCText__Fields_FWDDECL
#include <Modloader/app/structs/CCFont.h>
#include <Modloader/app/structs/CCTextModifier.h>
#include <Modloader/app/structs/Color__Array.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/Mesh.h>
#include <Modloader/app/structs/MeshCollider.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Vector2__Array.h>
#include <Modloader/app/structs/Vector3__Array.h>
#endif
#undef IL2CPP_STRUCT_CCText__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CCText__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CCText__Fields_FWDDECL)
#include <Modloader/app/structs/CCText__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CCText__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
