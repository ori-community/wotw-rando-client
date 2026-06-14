#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KwolokBossSettings__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KwolokBossSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KwolokBossSettings__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_KwolokBossSettings__Fields_DEFINED
struct KwolokBossSettings__Fields {
    struct MonoBehaviour__Fields _;
    float KwolokBossHP;
    int32_t ProjectileFlurryNumberOfProjectiles;
    float ProjectileFlurryTimeBetweenProjectiles;
    float SludgeLaserTime;
    float HeadbuttTime;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_KwolokBossSettings__Fields_FWDDECL)
#define IL2CPP_STRUCT_KwolokBossSettings__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_KwolokBossSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KwolokBossSettings__Fields_DEFINED) && !defined(IL2CPP_STRUCT_KwolokBossSettings__Fields_FWDDECL)
#include <Modloader/app/structs/KwolokBossSettings__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KwolokBossSettings__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
