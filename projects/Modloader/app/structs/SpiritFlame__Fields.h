#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpiritFlame__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpiritFlame__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiritFlame__Fields_DEFINED)
#include <Modloader/app/structs/ScriptableObject__Fields.h>
#if defined(IL2CPP_STRUCT_ScriptableObject__Fields_DEFINED)
#define IL2CPP_STRUCT_SpiritFlame__Fields_DEFINED
struct GameObject;
struct SpiritFlame__Fields {
    struct ScriptableObject__Fields _;
    struct GameObject* Projectile;
    float Damage;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpiritFlame__Fields_FWDDECL)
#define IL2CPP_STRUCT_SpiritFlame__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#endif
#undef IL2CPP_STRUCT_SpiritFlame__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiritFlame__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SpiritFlame__Fields_FWDDECL)
#include <Modloader/app/structs/SpiritFlame__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpiritFlame__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
