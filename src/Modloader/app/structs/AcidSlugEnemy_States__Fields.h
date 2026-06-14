#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AcidSlugEnemy_States__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AcidSlugEnemy_States__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AcidSlugEnemy_States__Fields_DEFINED)
#define IL2CPP_STRUCT_AcidSlugEnemy_States__Fields_DEFINED
struct AcidSlugCrawlingState;
struct AcidSlugChargingState;
struct AcidSlugShootingState;
struct __declspec(align(8)) AcidSlugEnemy_States__Fields {
    struct AcidSlugCrawlingState* Crawl;
    struct AcidSlugChargingState* Charging;
    struct AcidSlugShootingState* Shooting;
};
#endif
#if !defined(IL2CPP_STRUCT_AcidSlugEnemy_States__Fields_FWDDECL)
#define IL2CPP_STRUCT_AcidSlugEnemy_States__Fields_FWDDECL
#include <Modloader/app/structs/AcidSlugChargingState.h>
#include <Modloader/app/structs/AcidSlugCrawlingState.h>
#include <Modloader/app/structs/AcidSlugShootingState.h>
#endif
#undef IL2CPP_STRUCT_AcidSlugEnemy_States__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AcidSlugEnemy_States__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AcidSlugEnemy_States__Fields_FWDDECL)
#include <Modloader/app/structs/AcidSlugEnemy_States__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AcidSlugEnemy_States__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
