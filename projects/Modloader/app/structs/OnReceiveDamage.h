#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OnReceiveDamage_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OnReceiveDamage_INITIALIZING
#if !defined(IL2CPP_STRUCT_OnReceiveDamage_DEFINED)
#include <Modloader/app/structs/OnReceiveDamage__Fields.h>
#if defined(IL2CPP_STRUCT_OnReceiveDamage__Fields_DEFINED)
#define IL2CPP_STRUCT_OnReceiveDamage_DEFINED
struct OnReceiveDamage__Class;
struct OnReceiveDamage {
    struct OnReceiveDamage__Class* klass;
    MonitorData* monitor;
    struct OnReceiveDamage__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_OnReceiveDamage_FWDDECL)
#define IL2CPP_STRUCT_OnReceiveDamage_FWDDECL
#include <Modloader/app/structs/OnReceiveDamage__Class.h>
#endif
#undef IL2CPP_STRUCT_OnReceiveDamage_INITIALIZING
#if !defined(IL2CPP_STRUCT_OnReceiveDamage_DEFINED) && !defined(IL2CPP_STRUCT_OnReceiveDamage_FWDDECL)
#include <Modloader/app/structs/OnReceiveDamage.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OnReceiveDamage.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
