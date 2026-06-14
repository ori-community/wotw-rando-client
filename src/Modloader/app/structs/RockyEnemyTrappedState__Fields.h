#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RockyEnemyTrappedState__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RockyEnemyTrappedState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RockyEnemyTrappedState__Fields_DEFINED)
#include <Modloader/app/structs/DamageType__Enum.h>
#include <Modloader/app/structs/RockyEnemyState__Fields.h>
#if defined(IL2CPP_STRUCT_RockyEnemyState__Fields_DEFINED) && defined(IL2CPP_STRUCT_DamageType__Enum_DEFINED)
#define IL2CPP_STRUCT_RockyEnemyTrappedState__Fields_DEFINED
struct RockyEnemyTrappedState__Fields {
    struct RockyEnemyState__Fields _;
    float m_timer;
    float m_amount;
    DamageType__Enum m_damageType;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RockyEnemyTrappedState__Fields_FWDDECL)
#define IL2CPP_STRUCT_RockyEnemyTrappedState__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_RockyEnemyTrappedState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RockyEnemyTrappedState__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RockyEnemyTrappedState__Fields_FWDDECL)
#include <Modloader/app/structs/RockyEnemyTrappedState__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RockyEnemyTrappedState__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
