#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpellPickupContext_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpellPickupContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpellPickupContext_DEFINED)
#include <Modloader/app/structs/SpellPickupContext__Fields.h>
#if defined(IL2CPP_STRUCT_SpellPickupContext__Fields_DEFINED)
#define IL2CPP_STRUCT_SpellPickupContext_DEFINED
struct SpellPickupContext__Class;
struct SpellPickupContext {
    struct SpellPickupContext__Class* klass;
    MonitorData* monitor;
    struct SpellPickupContext__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpellPickupContext_FWDDECL)
#define IL2CPP_STRUCT_SpellPickupContext_FWDDECL
#include <Modloader/app/structs/SpellPickupContext__Class.h>
#endif
#undef IL2CPP_STRUCT_SpellPickupContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpellPickupContext_DEFINED) && !defined(IL2CPP_STRUCT_SpellPickupContext_FWDDECL)
#include <Modloader/app/structs/SpellPickupContext.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpellPickupContext.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
