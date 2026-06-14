#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KuDamageReceiver_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KuDamageReceiver_INITIALIZING
#if !defined(IL2CPP_STRUCT_KuDamageReceiver_DEFINED)
#include <Modloader/app/structs/KuDamageReceiver__Fields.h>
#if defined(IL2CPP_STRUCT_KuDamageReceiver__Fields_DEFINED)
#define IL2CPP_STRUCT_KuDamageReceiver_DEFINED
struct KuDamageReceiver__Class;
struct KuDamageReceiver {
    struct KuDamageReceiver__Class* klass;
    MonitorData* monitor;
    struct KuDamageReceiver__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_KuDamageReceiver_FWDDECL)
#define IL2CPP_STRUCT_KuDamageReceiver_FWDDECL
#include <Modloader/app/structs/KuDamageReceiver__Class.h>
#endif
#undef IL2CPP_STRUCT_KuDamageReceiver_INITIALIZING
#if !defined(IL2CPP_STRUCT_KuDamageReceiver_DEFINED) && !defined(IL2CPP_STRUCT_KuDamageReceiver_FWDDECL)
#include <Modloader/app/structs/KuDamageReceiver.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KuDamageReceiver.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
