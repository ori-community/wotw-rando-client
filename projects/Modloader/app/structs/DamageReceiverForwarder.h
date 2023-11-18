#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DamageReceiverForwarder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DamageReceiverForwarder_INITIALIZING
#if !defined(IL2CPP_STRUCT_DamageReceiverForwarder_DEFINED)
#include <Modloader/app/structs/DamageReceiverForwarder__Fields.h>
#if defined(IL2CPP_STRUCT_DamageReceiverForwarder__Fields_DEFINED)
#define IL2CPP_STRUCT_DamageReceiverForwarder_DEFINED
struct DamageReceiverForwarder__Class;
struct DamageReceiverForwarder {
    struct DamageReceiverForwarder__Class* klass;
    MonitorData* monitor;
    struct DamageReceiverForwarder__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DamageReceiverForwarder_FWDDECL)
#define IL2CPP_STRUCT_DamageReceiverForwarder_FWDDECL
#include <Modloader/app/structs/DamageReceiverForwarder__Class.h>
#endif
#undef IL2CPP_STRUCT_DamageReceiverForwarder_INITIALIZING
#if !defined(IL2CPP_STRUCT_DamageReceiverForwarder_DEFINED) && !defined(IL2CPP_STRUCT_DamageReceiverForwarder_FWDDECL)
#include <Modloader/app/structs/DamageReceiverForwarder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DamageReceiverForwarder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
