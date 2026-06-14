#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DamageReceiver_OverrideInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DamageReceiver_OverrideInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_DamageReceiver_OverrideInfo_DEFINED)
#include <Modloader/app/structs/DamageReceiver_OverrideInfo__Fields.h>
#if defined(IL2CPP_STRUCT_DamageReceiver_OverrideInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_DamageReceiver_OverrideInfo_DEFINED
struct DamageReceiver_OverrideInfo__Class;
struct DamageReceiver_OverrideInfo {
    struct DamageReceiver_OverrideInfo__Class* klass;
    MonitorData* monitor;
    struct DamageReceiver_OverrideInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DamageReceiver_OverrideInfo_FWDDECL)
#define IL2CPP_STRUCT_DamageReceiver_OverrideInfo_FWDDECL
#include <Modloader/app/structs/DamageReceiver_OverrideInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_DamageReceiver_OverrideInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_DamageReceiver_OverrideInfo_DEFINED) && !defined(IL2CPP_STRUCT_DamageReceiver_OverrideInfo_FWDDECL)
#include <Modloader/app/structs/DamageReceiver_OverrideInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DamageReceiver_OverrideInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
