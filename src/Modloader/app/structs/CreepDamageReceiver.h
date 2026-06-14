#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CreepDamageReceiver_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CreepDamageReceiver_INITIALIZING
#if !defined(IL2CPP_STRUCT_CreepDamageReceiver_DEFINED)
#include <Modloader/app/structs/CreepDamageReceiver__Fields.h>
#if defined(IL2CPP_STRUCT_CreepDamageReceiver__Fields_DEFINED)
#define IL2CPP_STRUCT_CreepDamageReceiver_DEFINED
struct CreepDamageReceiver__Class;
struct CreepDamageReceiver {
    struct CreepDamageReceiver__Class* klass;
    MonitorData* monitor;
    struct CreepDamageReceiver__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CreepDamageReceiver_FWDDECL)
#define IL2CPP_STRUCT_CreepDamageReceiver_FWDDECL
#include <Modloader/app/structs/CreepDamageReceiver__Class.h>
#endif
#undef IL2CPP_STRUCT_CreepDamageReceiver_INITIALIZING
#if !defined(IL2CPP_STRUCT_CreepDamageReceiver_DEFINED) && !defined(IL2CPP_STRUCT_CreepDamageReceiver_FWDDECL)
#include <Modloader/app/structs/CreepDamageReceiver.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CreepDamageReceiver.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
