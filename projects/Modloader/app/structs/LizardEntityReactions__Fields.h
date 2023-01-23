#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LizardEntityReactions__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LizardEntityReactions__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LizardEntityReactions__Fields_DEFINED)
#include <Modloader/app/structs/GroundEntityReactions__Fields.h>
#if defined(IL2CPP_STRUCT_GroundEntityReactions__Fields_DEFINED)
#define IL2CPP_STRUCT_LizardEntityReactions__Fields_DEFINED
struct LizardDodgeReaction;
struct LizardEntityReactions__Fields {
    struct GroundEntityReactions__Fields _;
    struct LizardDodgeReaction* DodgeReaction;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LizardEntityReactions__Fields_FWDDECL)
#define IL2CPP_STRUCT_LizardEntityReactions__Fields_FWDDECL
#include <Modloader/app/structs/LizardDodgeReaction.h>
#endif
#undef IL2CPP_STRUCT_LizardEntityReactions__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LizardEntityReactions__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LizardEntityReactions__Fields_FWDDECL)
#include <Modloader/app/structs/LizardEntityReactions__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LizardEntityReactions__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
