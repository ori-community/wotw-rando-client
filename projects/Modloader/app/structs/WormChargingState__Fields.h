#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WormChargingState__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WormChargingState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WormChargingState__Fields_DEFINED)
#include <Modloader/app/structs/WormState__Fields.h>
#if defined(IL2CPP_STRUCT_WormState__Fields_DEFINED)
#define IL2CPP_STRUCT_WormChargingState__Fields_DEFINED
struct TextureAnimationWithTransitions;
struct PrefabSpawner;
struct WormChargingState__Fields {
    struct WormState__Fields _;
    struct TextureAnimationWithTransitions* m_charging;
    struct PrefabSpawner* m_chargingEffect;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WormChargingState__Fields_FWDDECL)
#define IL2CPP_STRUCT_WormChargingState__Fields_FWDDECL
#include <Modloader/app/structs/PrefabSpawner.h>
#include <Modloader/app/structs/TextureAnimationWithTransitions.h>
#endif
#undef IL2CPP_STRUCT_WormChargingState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WormChargingState__Fields_DEFINED) && !defined(IL2CPP_STRUCT_WormChargingState__Fields_FWDDECL)
#include <Modloader/app/structs/WormChargingState__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WormChargingState__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
