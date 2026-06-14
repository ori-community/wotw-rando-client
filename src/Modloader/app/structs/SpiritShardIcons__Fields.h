#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpiritShardIcons__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpiritShardIcons__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiritShardIcons__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_SpiritShardIcons__Fields_DEFINED
struct Texture2D;
struct SpiritShardIcons_IconTexture__Array;
struct SpiritShardIcons__Fields {
    struct MonoBehaviour__Fields _;
    struct Texture2D* Missing;
    struct SpiritShardIcons_IconTexture__Array* m_textures;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpiritShardIcons__Fields_FWDDECL)
#define IL2CPP_STRUCT_SpiritShardIcons__Fields_FWDDECL
#include <Modloader/app/structs/SpiritShardIcons_IconTexture__Array.h>
#include <Modloader/app/structs/Texture2D.h>
#endif
#undef IL2CPP_STRUCT_SpiritShardIcons__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiritShardIcons__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SpiritShardIcons__Fields_FWDDECL)
#include <Modloader/app/structs/SpiritShardIcons__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpiritShardIcons__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
