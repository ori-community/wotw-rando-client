#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpellPickup_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpellPickup_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpellPickup_DEFINED)
#include <Modloader/app/structs/SpellPickup__Fields.h>
#if defined(IL2CPP_STRUCT_SpellPickup__Fields_DEFINED)
#define IL2CPP_STRUCT_SpellPickup_DEFINED
struct SpellPickup__Class;
struct SpellPickup {
    struct SpellPickup__Class* klass;
    MonitorData* monitor;
    struct SpellPickup__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpellPickup_FWDDECL)
#define IL2CPP_STRUCT_SpellPickup_FWDDECL
#include <Modloader/app/structs/SpellPickup__Class.h>
#endif
#undef IL2CPP_STRUCT_SpellPickup_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpellPickup_DEFINED) && !defined(IL2CPP_STRUCT_SpellPickup_FWDDECL)
#include <Modloader/app/structs/SpellPickup.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpellPickup.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
