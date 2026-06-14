#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ReceivedDamageCondition__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ReceivedDamageCondition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReceivedDamageCondition__Fields_DEFINED)
#include <Modloader/app/structs/Condition__Fields.h>
#if defined(IL2CPP_STRUCT_Condition__Fields_DEFINED)
#define IL2CPP_STRUCT_ReceivedDamageCondition__Fields_DEFINED
struct Entity;
struct ReceivedDamageCondition__Fields {
    struct Condition__Fields _;
    bool m_damageReceived;
    bool m_subscribed;
    struct Entity* m_entity;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ReceivedDamageCondition__Fields_FWDDECL)
#define IL2CPP_STRUCT_ReceivedDamageCondition__Fields_FWDDECL
#include <Modloader/app/structs/Entity.h>
#endif
#undef IL2CPP_STRUCT_ReceivedDamageCondition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReceivedDamageCondition__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ReceivedDamageCondition__Fields_FWDDECL)
#include <Modloader/app/structs/ReceivedDamageCondition__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ReceivedDamageCondition__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
