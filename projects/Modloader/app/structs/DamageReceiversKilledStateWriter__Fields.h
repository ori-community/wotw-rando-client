#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DamageReceiversKilledStateWriter__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DamageReceiversKilledStateWriter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DamageReceiversKilledStateWriter__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_DamageReceiversKilledStateWriter__Fields_DEFINED
struct StateChangeDefinition;
struct List_1_LegacyDamageReciever_;
struct DamageReceiversKilledStateWriter__Fields {
    struct MonoBehaviour__Fields _;
    struct StateChangeDefinition* OnAllReceiversDestroyed;
    struct List_1_LegacyDamageReciever_* LegacyDamageReceivers;
    bool m_hasPerformed;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DamageReceiversKilledStateWriter__Fields_FWDDECL)
#define IL2CPP_STRUCT_DamageReceiversKilledStateWriter__Fields_FWDDECL
#include <Modloader/app/structs/List_1_LegacyDamageReciever_.h>
#include <Modloader/app/structs/StateChangeDefinition.h>
#endif
#undef IL2CPP_STRUCT_DamageReceiversKilledStateWriter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DamageReceiversKilledStateWriter__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DamageReceiversKilledStateWriter__Fields_FWDDECL)
#include <Modloader/app/structs/DamageReceiversKilledStateWriter__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DamageReceiversKilledStateWriter__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
