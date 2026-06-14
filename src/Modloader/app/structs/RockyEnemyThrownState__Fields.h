#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RockyEnemyThrownState__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RockyEnemyThrownState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RockyEnemyThrownState__Fields_DEFINED)
#include <Modloader/app/structs/RockyEnemyState__Fields.h>
#if defined(IL2CPP_STRUCT_RockyEnemyState__Fields_DEFINED)
#define IL2CPP_STRUCT_RockyEnemyThrownState__Fields_DEFINED
struct Rigidbody;
struct RockyEnemyThrownState__Fields {
    struct RockyEnemyState__Fields _;
    struct Rigidbody* m_rigidbody;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RockyEnemyThrownState__Fields_FWDDECL)
#define IL2CPP_STRUCT_RockyEnemyThrownState__Fields_FWDDECL
#include <Modloader/app/structs/Rigidbody.h>
#endif
#undef IL2CPP_STRUCT_RockyEnemyThrownState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RockyEnemyThrownState__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RockyEnemyThrownState__Fields_FWDDECL)
#include <Modloader/app/structs/RockyEnemyThrownState__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RockyEnemyThrownState__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
