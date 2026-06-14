#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpellSwitcher_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpellSwitcher_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpellSwitcher_DEFINED)
#include <Modloader/app/structs/SpellSwitcher__Fields.h>
#if defined(IL2CPP_STRUCT_SpellSwitcher__Fields_DEFINED)
#define IL2CPP_STRUCT_SpellSwitcher_DEFINED
struct SpellSwitcher__Class;
struct SpellSwitcher {
    struct SpellSwitcher__Class* klass;
    MonitorData* monitor;
    struct SpellSwitcher__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpellSwitcher_FWDDECL)
#define IL2CPP_STRUCT_SpellSwitcher_FWDDECL
#include <Modloader/app/structs/SpellSwitcher__Class.h>
#endif
#undef IL2CPP_STRUCT_SpellSwitcher_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpellSwitcher_DEFINED) && !defined(IL2CPP_STRUCT_SpellSwitcher_FWDDECL)
#include <Modloader/app/structs/SpellSwitcher.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpellSwitcher.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
