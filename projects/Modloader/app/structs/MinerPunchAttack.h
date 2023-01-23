#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MinerPunchAttack_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MinerPunchAttack_INITIALIZING
#if !defined(IL2CPP_STRUCT_MinerPunchAttack_DEFINED)
#include <Modloader/app/structs/MinerPunchAttack__Fields.h>
#if defined(IL2CPP_STRUCT_MinerPunchAttack__Fields_DEFINED)
#define IL2CPP_STRUCT_MinerPunchAttack_DEFINED
struct MinerPunchAttack__Class;
struct MinerPunchAttack {
    struct MinerPunchAttack__Class* klass;
    MonitorData* monitor;
    struct MinerPunchAttack__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MinerPunchAttack_FWDDECL)
#define IL2CPP_STRUCT_MinerPunchAttack_FWDDECL
#include <Modloader/app/structs/MinerPunchAttack__Class.h>
#endif
#undef IL2CPP_STRUCT_MinerPunchAttack_INITIALIZING
#if !defined(IL2CPP_STRUCT_MinerPunchAttack_DEFINED) && !defined(IL2CPP_STRUCT_MinerPunchAttack_FWDDECL)
#include <Modloader/app/structs/MinerPunchAttack.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MinerPunchAttack.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
