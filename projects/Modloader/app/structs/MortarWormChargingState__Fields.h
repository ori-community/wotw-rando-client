#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MortarWormChargingState__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MortarWormChargingState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MortarWormChargingState__Fields_DEFINED)
#include <Modloader/app/structs/WormChargingState__Fields.h>
#if defined(IL2CPP_STRUCT_WormChargingState__Fields_DEFINED)
#define IL2CPP_STRUCT_MortarWormChargingState__Fields_DEFINED
struct PrefabSpawner;
struct SoundSource;
struct MortarWormChargingState__Fields {
    struct WormChargingState__Fields _;
    struct PrefabSpawner* m_chargingEffect;
    struct SoundSource* m_chargingSound;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MortarWormChargingState__Fields_FWDDECL)
#define IL2CPP_STRUCT_MortarWormChargingState__Fields_FWDDECL
#include <Modloader/app/structs/PrefabSpawner.h>
#include <Modloader/app/structs/SoundSource.h>
#endif
#undef IL2CPP_STRUCT_MortarWormChargingState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MortarWormChargingState__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MortarWormChargingState__Fields_FWDDECL)
#include <Modloader/app/structs/MortarWormChargingState__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MortarWormChargingState__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
