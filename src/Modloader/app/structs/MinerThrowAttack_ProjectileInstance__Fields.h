#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MinerThrowAttack_ProjectileInstance__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MinerThrowAttack_ProjectileInstance__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MinerThrowAttack_ProjectileInstance__Fields_DEFINED)
#define IL2CPP_STRUCT_MinerThrowAttack_ProjectileInstance__Fields_DEFINED
struct SpiritGrenade;
struct Transform;
struct IMinerThrowable;
struct __declspec(align(8)) MinerThrowAttack_ProjectileInstance__Fields {
    struct SpiritGrenade* m_spiritProjectile;
    struct Transform* m_projectileTranform;
    struct IMinerThrowable* m_minerThrowable;
};
#endif
#if !defined(IL2CPP_STRUCT_MinerThrowAttack_ProjectileInstance__Fields_FWDDECL)
#define IL2CPP_STRUCT_MinerThrowAttack_ProjectileInstance__Fields_FWDDECL
#include <Modloader/app/structs/IMinerThrowable.h>
#include <Modloader/app/structs/SpiritGrenade.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_MinerThrowAttack_ProjectileInstance__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MinerThrowAttack_ProjectileInstance__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MinerThrowAttack_ProjectileInstance__Fields_FWDDECL)
#include <Modloader/app/structs/MinerThrowAttack_ProjectileInstance__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MinerThrowAttack_ProjectileInstance__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
