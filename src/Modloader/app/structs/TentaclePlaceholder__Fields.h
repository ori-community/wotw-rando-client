#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TentaclePlaceholder__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TentaclePlaceholder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TentaclePlaceholder__Fields_DEFINED)
#include <Modloader/app/structs/EntityPlaceholder__Fields.h>
#if defined(IL2CPP_STRUCT_EntityPlaceholder__Fields_DEFINED)
#define IL2CPP_STRUCT_TentaclePlaceholder__Fields_DEFINED
struct TentacleInterestPoint__Array;
struct GameObject;
struct TentaclePlaceholder__Fields {
    struct EntityPlaceholder__Fields _;
    struct TentacleInterestPoint__Array* InterestPoints;
    float SpawnDelay;
    struct GameObject* TentaclePrefab;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TentaclePlaceholder__Fields_FWDDECL)
#define IL2CPP_STRUCT_TentaclePlaceholder__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/TentacleInterestPoint__Array.h>
#endif
#undef IL2CPP_STRUCT_TentaclePlaceholder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TentaclePlaceholder__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TentaclePlaceholder__Fields_FWDDECL)
#include <Modloader/app/structs/TentaclePlaceholder__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TentaclePlaceholder__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
