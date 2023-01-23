#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MinerThrowAttack_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MinerThrowAttack_INITIALIZING
#if !defined(IL2CPP_STRUCT_MinerThrowAttack_DEFINED)
#include <Modloader/app/structs/MinerThrowAttack__Fields.h>
#if defined(IL2CPP_STRUCT_MinerThrowAttack__Fields_DEFINED)
#define IL2CPP_STRUCT_MinerThrowAttack_DEFINED
struct MinerThrowAttack__Class;
struct MinerThrowAttack {
    struct MinerThrowAttack__Class* klass;
    MonitorData* monitor;
    struct MinerThrowAttack__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MinerThrowAttack_FWDDECL)
#define IL2CPP_STRUCT_MinerThrowAttack_FWDDECL
#include <Modloader/app/structs/MinerThrowAttack__Class.h>
#endif
#undef IL2CPP_STRUCT_MinerThrowAttack_INITIALIZING
#if !defined(IL2CPP_STRUCT_MinerThrowAttack_DEFINED) && !defined(IL2CPP_STRUCT_MinerThrowAttack_FWDDECL)
#include <Modloader/app/structs/MinerThrowAttack.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MinerThrowAttack.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
