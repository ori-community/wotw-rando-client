#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DamageReceiverForwarder__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DamageReceiverForwarder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DamageReceiverForwarder__Fields_DEFINED)
#include <Modloader/app/structs/LegacyEntityDamageReciever__Fields.h>
#if defined(IL2CPP_STRUCT_LegacyEntityDamageReciever__Fields_DEFINED)
#define IL2CPP_STRUCT_DamageReceiverForwarder__Fields_DEFINED
struct Action_1_Damage_;
struct DamageReceiverForwarder__Fields {
    struct LegacyEntityDamageReciever__Fields _;
    struct Action_1_Damage_* DamageReceived;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DamageReceiverForwarder__Fields_FWDDECL)
#define IL2CPP_STRUCT_DamageReceiverForwarder__Fields_FWDDECL
#include <Modloader/app/structs/Action_1_Damage_.h>
#endif
#undef IL2CPP_STRUCT_DamageReceiverForwarder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DamageReceiverForwarder__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DamageReceiverForwarder__Fields_FWDDECL)
#include <Modloader/app/structs/DamageReceiverForwarder__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DamageReceiverForwarder__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
