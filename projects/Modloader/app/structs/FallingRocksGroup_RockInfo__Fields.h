#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FallingRocksGroup_RockInfo__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FallingRocksGroup_RockInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FallingRocksGroup_RockInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_FallingRocksGroup_RockInfo__Fields_DEFINED
struct GameObject;
struct __declspec(align(8)) FallingRocksGroup_RockInfo__Fields {
    struct GameObject* Prefab;
    bool ShowAntic;
    struct GameObject* AnticGroundPrefab;
    struct GameObject* AnticWaterPrefab;
    float RandomSelectionWeight;
};
#endif
#if !defined(IL2CPP_STRUCT_FallingRocksGroup_RockInfo__Fields_FWDDECL)
#define IL2CPP_STRUCT_FallingRocksGroup_RockInfo__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#endif
#undef IL2CPP_STRUCT_FallingRocksGroup_RockInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FallingRocksGroup_RockInfo__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FallingRocksGroup_RockInfo__Fields_FWDDECL)
#include <Modloader/app/structs/FallingRocksGroup_RockInfo__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FallingRocksGroup_RockInfo__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
