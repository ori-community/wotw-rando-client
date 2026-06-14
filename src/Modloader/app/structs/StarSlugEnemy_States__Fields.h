#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StarSlugEnemy_States__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StarSlugEnemy_States__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StarSlugEnemy_States__Fields_DEFINED)
#define IL2CPP_STRUCT_StarSlugEnemy_States__Fields_DEFINED
struct StarSlugCrawlingState;
struct StarSlugChargingState;
struct StarSlugShootingState;
struct __declspec(align(8)) StarSlugEnemy_States__Fields {
    struct StarSlugCrawlingState* Crawl;
    struct StarSlugChargingState* Charging;
    struct StarSlugShootingState* Shooting;
};
#endif
#if !defined(IL2CPP_STRUCT_StarSlugEnemy_States__Fields_FWDDECL)
#define IL2CPP_STRUCT_StarSlugEnemy_States__Fields_FWDDECL
#include <Modloader/app/structs/StarSlugChargingState.h>
#include <Modloader/app/structs/StarSlugCrawlingState.h>
#include <Modloader/app/structs/StarSlugShootingState.h>
#endif
#undef IL2CPP_STRUCT_StarSlugEnemy_States__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StarSlugEnemy_States__Fields_DEFINED) && !defined(IL2CPP_STRUCT_StarSlugEnemy_States__Fields_FWDDECL)
#include <Modloader/app/structs/StarSlugEnemy_States__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StarSlugEnemy_States__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
