#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberShaderAtlasSettings__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberShaderAtlasSettings__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderAtlasSettings__StaticFields_DEFINED)
#include <Modloader/app/structs/UberAtlassingPlatform__Enum.h>
#if defined(IL2CPP_STRUCT_UberAtlassingPlatform__Enum_DEFINED)
#define IL2CPP_STRUCT_UberShaderAtlasSettings__StaticFields_DEFINED
struct AtlassingSetting__Array;
struct UberShaderAtlasSettings__StaticFields {
    struct AtlassingSetting__Array* s_settings;
    UberAtlassingPlatform__Enum s_curPlatform;

    int32_t AnimationMargin;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberShaderAtlasSettings__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_UberShaderAtlasSettings__StaticFields_FWDDECL
#include <Modloader/app/structs/AtlassingSetting__Array.h>
#endif
#undef IL2CPP_STRUCT_UberShaderAtlasSettings__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderAtlasSettings__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_UberShaderAtlasSettings__StaticFields_FWDDECL)
#include <Modloader/app/structs/UberShaderAtlasSettings__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberShaderAtlasSettings__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
