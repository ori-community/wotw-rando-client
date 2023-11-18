#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpiritShardIcons_IconTexture_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpiritShardIcons_IconTexture_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiritShardIcons_IconTexture_DEFINED)
#include <Modloader/app/structs/SpiritShardType__Enum.h>
#if defined(IL2CPP_STRUCT_SpiritShardType__Enum_DEFINED)
#define IL2CPP_STRUCT_SpiritShardIcons_IconTexture_DEFINED
struct Texture2D;
struct SpiritShardIcons_IconTexture {
    SpiritShardType__Enum Type;

    struct Texture2D* Texture;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpiritShardIcons_IconTexture_FWDDECL)
#define IL2CPP_STRUCT_SpiritShardIcons_IconTexture_FWDDECL
#include <Modloader/app/structs/Texture2D.h>
#endif
#undef IL2CPP_STRUCT_SpiritShardIcons_IconTexture_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiritShardIcons_IconTexture_DEFINED) && !defined(IL2CPP_STRUCT_SpiritShardIcons_IconTexture_FWDDECL)
#include <Modloader/app/structs/SpiritShardIcons_IconTexture.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpiritShardIcons_IconTexture.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
