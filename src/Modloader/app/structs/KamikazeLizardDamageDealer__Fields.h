#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KamikazeLizardDamageDealer__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KamikazeLizardDamageDealer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KamikazeLizardDamageDealer__Fields_DEFINED)
#include <Modloader/app/structs/DamageDealer__Fields.h>
#if defined(IL2CPP_STRUCT_DamageDealer__Fields_DEFINED)
#define IL2CPP_STRUCT_KamikazeLizardDamageDealer__Fields_DEFINED
struct LizardEntity;
struct KamikazeLizardDamageDealer__Fields {
    struct DamageDealer__Fields _;
    struct LizardEntity* Entity;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_KamikazeLizardDamageDealer__Fields_FWDDECL)
#define IL2CPP_STRUCT_KamikazeLizardDamageDealer__Fields_FWDDECL
#include <Modloader/app/structs/LizardEntity.h>
#endif
#undef IL2CPP_STRUCT_KamikazeLizardDamageDealer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KamikazeLizardDamageDealer__Fields_DEFINED) && !defined(IL2CPP_STRUCT_KamikazeLizardDamageDealer__Fields_FWDDECL)
#include <Modloader/app/structs/KamikazeLizardDamageDealer__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KamikazeLizardDamageDealer__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
