#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AtlasSpriteTexture__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AtlasSpriteTexture__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AtlasSpriteTexture__Fields_DEFINED)
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_Rect_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_AtlasSpriteTexture__Fields_DEFINED
struct String;
struct MoonGuid;
struct __declspec(align(8)) AtlasSpriteTexture__Fields {
    struct String* Name;
    struct MoonGuid* Guid;
    struct Rect NormalizedRect;
    bool Flipped;
    struct Vector2 CenterOffset;
    struct Vector2 OriginalSize;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AtlasSpriteTexture__Fields_FWDDECL)
#define IL2CPP_STRUCT_AtlasSpriteTexture__Fields_FWDDECL
#include <Modloader/app/structs/MoonGuid.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_AtlasSpriteTexture__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AtlasSpriteTexture__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AtlasSpriteTexture__Fields_FWDDECL)
#include <Modloader/app/structs/AtlasSpriteTexture__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AtlasSpriteTexture__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
