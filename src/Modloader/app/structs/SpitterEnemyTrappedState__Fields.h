#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpitterEnemyTrappedState__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpitterEnemyTrappedState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpitterEnemyTrappedState__Fields_DEFINED)
#include <Modloader/app/structs/DamageType__Enum.h>
#include <Modloader/app/structs/SpitterEnemyState__Fields.h>
#if defined(IL2CPP_STRUCT_SpitterEnemyState__Fields_DEFINED) && defined(IL2CPP_STRUCT_DamageType__Enum_DEFINED)
#define IL2CPP_STRUCT_SpitterEnemyTrappedState__Fields_DEFINED
struct SpitterEnemyTrappedState__Fields {
    struct SpitterEnemyState__Fields _;
    float m_timer;
    float m_amount;
    DamageType__Enum m_damageType;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpitterEnemyTrappedState__Fields_FWDDECL)
#define IL2CPP_STRUCT_SpitterEnemyTrappedState__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_SpitterEnemyTrappedState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpitterEnemyTrappedState__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SpitterEnemyTrappedState__Fields_FWDDECL)
#include <Modloader/app/structs/SpitterEnemyTrappedState__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpitterEnemyTrappedState__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
