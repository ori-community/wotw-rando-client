#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OverridableTextureProperty__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OverridableTextureProperty__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_OverridableTextureProperty__Fields_DEFINED)
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_OverridableTextureProperty__Fields_DEFINED
struct String;
struct Texture;
struct __declspec(align(8)) OverridableTextureProperty__Fields {
    bool Override;
    struct String* Name;
    int32_t _ID;
    struct Texture* Texture;
    struct Vector2 Offset;
    struct Vector2 Scale;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_OverridableTextureProperty__Fields_FWDDECL)
#define IL2CPP_STRUCT_OverridableTextureProperty__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Texture.h>
#endif
#undef IL2CPP_STRUCT_OverridableTextureProperty__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_OverridableTextureProperty__Fields_DEFINED) && !defined(IL2CPP_STRUCT_OverridableTextureProperty__Fields_FWDDECL)
#include <Modloader/app/structs/OverridableTextureProperty__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OverridableTextureProperty__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
