#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpiritShardIconsCollection_Icons_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpiritShardIconsCollection_Icons_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiritShardIconsCollection_Icons_DEFINED)
#define IL2CPP_STRUCT_SpiritShardIconsCollection_Icons_DEFINED
struct Texture2D;
struct SpiritShardIconsCollection_Icons {
    struct Texture2D* InventoryIcon;
    struct Texture2D* SocketIcon;
    struct Texture2D* HeaderIcon;
    struct Texture2D* MessageIcon;
};
#endif
#if !defined(IL2CPP_STRUCT_SpiritShardIconsCollection_Icons_FWDDECL)
#define IL2CPP_STRUCT_SpiritShardIconsCollection_Icons_FWDDECL
#include <Modloader/app/structs/Texture2D.h>
#endif
#undef IL2CPP_STRUCT_SpiritShardIconsCollection_Icons_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiritShardIconsCollection_Icons_DEFINED) && !defined(IL2CPP_STRUCT_SpiritShardIconsCollection_Icons_FWDDECL)
#include <Modloader/app/structs/SpiritShardIconsCollection_Icons.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpiritShardIconsCollection_Icons.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
