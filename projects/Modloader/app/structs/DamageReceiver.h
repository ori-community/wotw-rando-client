#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DamageReceiver_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DamageReceiver_INITIALIZING
#if !defined(IL2CPP_STRUCT_DamageReceiver_DEFINED)
#include <Modloader/app/structs/DamageReceiver__Fields.h>
#if defined(IL2CPP_STRUCT_DamageReceiver__Fields_DEFINED)
#define IL2CPP_STRUCT_DamageReceiver_DEFINED
struct DamageReceiver__Class;
struct DamageReceiver {
    struct DamageReceiver__Class* klass;
    MonitorData* monitor;
    struct DamageReceiver__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DamageReceiver_FWDDECL)
#define IL2CPP_STRUCT_DamageReceiver_FWDDECL
#include <Modloader/app/structs/DamageReceiver__Class.h>
#endif
#undef IL2CPP_STRUCT_DamageReceiver_INITIALIZING
#if !defined(IL2CPP_STRUCT_DamageReceiver_DEFINED) && !defined(IL2CPP_STRUCT_DamageReceiver_FWDDECL)
#include <Modloader/app/structs/DamageReceiver.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DamageReceiver.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
