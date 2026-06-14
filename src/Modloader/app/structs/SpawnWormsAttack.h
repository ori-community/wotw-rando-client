#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpawnWormsAttack_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpawnWormsAttack_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpawnWormsAttack_DEFINED)
#include <Modloader/app/structs/SpawnWormsAttack__Fields.h>
#if defined(IL2CPP_STRUCT_SpawnWormsAttack__Fields_DEFINED)
#define IL2CPP_STRUCT_SpawnWormsAttack_DEFINED
struct SpawnWormsAttack__Class;
struct SpawnWormsAttack {
    struct SpawnWormsAttack__Class* klass;
    MonitorData* monitor;
    struct SpawnWormsAttack__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpawnWormsAttack_FWDDECL)
#define IL2CPP_STRUCT_SpawnWormsAttack_FWDDECL
#include <Modloader/app/structs/SpawnWormsAttack__Class.h>
#endif
#undef IL2CPP_STRUCT_SpawnWormsAttack_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpawnWormsAttack_DEFINED) && !defined(IL2CPP_STRUCT_SpawnWormsAttack_FWDDECL)
#include <Modloader/app/structs/SpawnWormsAttack.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpawnWormsAttack.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
