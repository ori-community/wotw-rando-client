#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DamageReceiver_DamageEntry_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DamageReceiver_DamageEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_DamageReceiver_DamageEntry_DEFINED)
#include <Modloader/app/structs/DamageReceiver_DamageEntry__Fields.h>
#if defined(IL2CPP_STRUCT_DamageReceiver_DamageEntry__Fields_DEFINED)
#define IL2CPP_STRUCT_DamageReceiver_DamageEntry_DEFINED
struct DamageReceiver_DamageEntry__Class;
struct DamageReceiver_DamageEntry {
    struct DamageReceiver_DamageEntry__Class* klass;
    MonitorData* monitor;
    struct DamageReceiver_DamageEntry__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DamageReceiver_DamageEntry_FWDDECL)
#define IL2CPP_STRUCT_DamageReceiver_DamageEntry_FWDDECL
#include <Modloader/app/structs/DamageReceiver_DamageEntry__Class.h>
#endif
#undef IL2CPP_STRUCT_DamageReceiver_DamageEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_DamageReceiver_DamageEntry_DEFINED) && !defined(IL2CPP_STRUCT_DamageReceiver_DamageEntry_FWDDECL)
#include <Modloader/app/structs/DamageReceiver_DamageEntry.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DamageReceiver_DamageEntry.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
