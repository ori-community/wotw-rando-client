#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpiritShardSettings__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpiritShardSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiritShardSettings__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_SpiritShardSettings__Fields_DEFINED
struct SpiritShardIconsCollection;
struct SpiritShardDescriptionCollection;
struct SpiritShardPrefabs;
struct MessageProvider;
struct SpiritShardSettings__Fields {
    struct MonoBehaviour__Fields _;
    struct SpiritShardIconsCollection* Icons;
    struct SpiritShardDescriptionCollection* Descriptions;
    struct SpiritShardPrefabs* Prefabs;
    struct MessageProvider* AlreadyOwnedText;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpiritShardSettings__Fields_FWDDECL)
#define IL2CPP_STRUCT_SpiritShardSettings__Fields_FWDDECL
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/SpiritShardDescriptionCollection.h>
#include <Modloader/app/structs/SpiritShardIconsCollection.h>
#include <Modloader/app/structs/SpiritShardPrefabs.h>
#endif
#undef IL2CPP_STRUCT_SpiritShardSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiritShardSettings__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SpiritShardSettings__Fields_FWDDECL)
#include <Modloader/app/structs/SpiritShardSettings__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpiritShardSettings__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
