#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ElectricSlugDamageDealer__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ElectricSlugDamageDealer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ElectricSlugDamageDealer__Fields_DEFINED)
#include <Modloader/app/structs/DamageDealer__Fields.h>
#if defined(IL2CPP_STRUCT_DamageDealer__Fields_DEFINED)
#define IL2CPP_STRUCT_ElectricSlugDamageDealer__Fields_DEFINED
struct ElectricSlugEntity;
struct ElectricSlugDamageDealer__Fields {
    struct DamageDealer__Fields _;
    struct ElectricSlugEntity* Entity;
    float m_timeCartHit;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ElectricSlugDamageDealer__Fields_FWDDECL)
#define IL2CPP_STRUCT_ElectricSlugDamageDealer__Fields_FWDDECL
#include <Modloader/app/structs/ElectricSlugEntity.h>
#endif
#undef IL2CPP_STRUCT_ElectricSlugDamageDealer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ElectricSlugDamageDealer__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ElectricSlugDamageDealer__Fields_FWDDECL)
#include <Modloader/app/structs/ElectricSlugDamageDealer__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ElectricSlugDamageDealer__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
