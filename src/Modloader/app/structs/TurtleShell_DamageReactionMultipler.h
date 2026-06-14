#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TurtleShell_DamageReactionMultipler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TurtleShell_DamageReactionMultipler_INITIALIZING
#if !defined(IL2CPP_STRUCT_TurtleShell_DamageReactionMultipler_DEFINED)
#include <Modloader/app/structs/DamageType__Enum.h>
#if defined(IL2CPP_STRUCT_DamageType__Enum_DEFINED)
#define IL2CPP_STRUCT_TurtleShell_DamageReactionMultipler_DEFINED
struct TurtleShell_DamageReactionMultipler {
    DamageType__Enum DamageType;

    float Multiplier;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TurtleShell_DamageReactionMultipler_FWDDECL)
#define IL2CPP_STRUCT_TurtleShell_DamageReactionMultipler_FWDDECL
#endif
#undef IL2CPP_STRUCT_TurtleShell_DamageReactionMultipler_INITIALIZING
#if !defined(IL2CPP_STRUCT_TurtleShell_DamageReactionMultipler_DEFINED) && !defined(IL2CPP_STRUCT_TurtleShell_DamageReactionMultipler_FWDDECL)
#include <Modloader/app/structs/TurtleShell_DamageReactionMultipler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TurtleShell_DamageReactionMultipler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
