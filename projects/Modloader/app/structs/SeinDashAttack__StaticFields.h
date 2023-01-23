#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinDashAttack__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinDashAttack__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinDashAttack__StaticFields_DEFINED)
#define IL2CPP_STRUCT_SeinDashAttack__StaticFields_DEFINED
struct Action;
struct SeinDashAttack__StaticFields {
    bool RainbowDashActivated;
    struct Action* OnDashEvent;
    struct Action* OnWallDashEvent;
};
#endif
#if !defined(IL2CPP_STRUCT_SeinDashAttack__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_SeinDashAttack__StaticFields_FWDDECL
#include <Modloader/app/structs/Action.h>
#endif
#undef IL2CPP_STRUCT_SeinDashAttack__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinDashAttack__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_SeinDashAttack__StaticFields_FWDDECL)
#include <Modloader/app/structs/SeinDashAttack__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinDashAttack__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
