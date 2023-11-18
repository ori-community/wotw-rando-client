#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinAttack__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinAttack__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinAttack__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinAttack__Fields_DEFINED
struct SeinBashAttack;
struct SeinSpiritFlameAbility;
struct __declspec(align(8)) SeinAttack__Fields {
    struct SeinBashAttack* Bash;
    struct SeinSpiritFlameAbility* SpiritFlame;
};
#endif
#if !defined(IL2CPP_STRUCT_SeinAttack__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinAttack__Fields_FWDDECL
#include <Modloader/app/structs/SeinBashAttack.h>
#include <Modloader/app/structs/SeinSpiritFlameAbility.h>
#endif
#undef IL2CPP_STRUCT_SeinAttack__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinAttack__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinAttack__Fields_FWDDECL)
#include <Modloader/app/structs/SeinAttack__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinAttack__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
