#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinMeleeAttack_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinMeleeAttack_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinMeleeAttack_DEFINED)
#include <Modloader/app/structs/SeinMeleeAttack__Fields.h>
#if defined(IL2CPP_STRUCT_SeinMeleeAttack__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinMeleeAttack_DEFINED
struct SeinMeleeAttack__Class;
struct SeinMeleeAttack {
    struct SeinMeleeAttack__Class* klass;
    MonitorData* monitor;
    struct SeinMeleeAttack__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinMeleeAttack_FWDDECL)
#define IL2CPP_STRUCT_SeinMeleeAttack_FWDDECL
#include <Modloader/app/structs/SeinMeleeAttack__Class.h>
#endif
#undef IL2CPP_STRUCT_SeinMeleeAttack_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinMeleeAttack_DEFINED) && !defined(IL2CPP_STRUCT_SeinMeleeAttack_FWDDECL)
#include <Modloader/app/structs/SeinMeleeAttack.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinMeleeAttack.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
