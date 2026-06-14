#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DeactivateDamageDealerAction__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DeactivateDamageDealerAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DeactivateDamageDealerAction__Fields_DEFINED)
#include <Modloader/app/structs/ActionMethod__Fields.h>
#if defined(IL2CPP_STRUCT_ActionMethod__Fields_DEFINED)
#define IL2CPP_STRUCT_DeactivateDamageDealerAction__Fields_DEFINED
struct List_1_DamageDealer_;
struct DeactivateDamageDealerAction__Fields {
    struct ActionMethod__Fields _;
    struct List_1_DamageDealer_* Targets;
    bool ShouldActivate;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DeactivateDamageDealerAction__Fields_FWDDECL)
#define IL2CPP_STRUCT_DeactivateDamageDealerAction__Fields_FWDDECL
#include <Modloader/app/structs/List_1_DamageDealer_.h>
#endif
#undef IL2CPP_STRUCT_DeactivateDamageDealerAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DeactivateDamageDealerAction__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DeactivateDamageDealerAction__Fields_FWDDECL)
#include <Modloader/app/structs/DeactivateDamageDealerAction__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DeactivateDamageDealerAction__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
