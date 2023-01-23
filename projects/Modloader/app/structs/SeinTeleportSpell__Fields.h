#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinTeleportSpell__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinTeleportSpell__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinTeleportSpell__Fields_DEFINED)
#include <Modloader/app/structs/SeinGrenadeAttack__Fields.h>
#if defined(IL2CPP_STRUCT_SeinGrenadeAttack__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinTeleportSpell__Fields_DEFINED
struct Action;
struct SeinTeleportSpell__Fields {
    struct SeinGrenadeAttack__Fields _;
    struct Action* OnBeforeOriTeleport;
    struct Action* OnAfterOriTeleport;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinTeleportSpell__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinTeleportSpell__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#endif
#undef IL2CPP_STRUCT_SeinTeleportSpell__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinTeleportSpell__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinTeleportSpell__Fields_FWDDECL)
#include <Modloader/app/structs/SeinTeleportSpell__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinTeleportSpell__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
