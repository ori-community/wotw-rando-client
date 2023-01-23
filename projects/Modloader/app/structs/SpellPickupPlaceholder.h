#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpellPickupPlaceholder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpellPickupPlaceholder_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpellPickupPlaceholder_DEFINED)
#include <Modloader/app/structs/SpellPickupPlaceholder__Fields.h>
#if defined(IL2CPP_STRUCT_SpellPickupPlaceholder__Fields_DEFINED)
#define IL2CPP_STRUCT_SpellPickupPlaceholder_DEFINED
struct SpellPickupPlaceholder__Class;
struct SpellPickupPlaceholder {
    struct SpellPickupPlaceholder__Class* klass;
    MonitorData* monitor;
    struct SpellPickupPlaceholder__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpellPickupPlaceholder_FWDDECL)
#define IL2CPP_STRUCT_SpellPickupPlaceholder_FWDDECL
#include <Modloader/app/structs/SpellPickupPlaceholder__Class.h>
#endif
#undef IL2CPP_STRUCT_SpellPickupPlaceholder_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpellPickupPlaceholder_DEFINED) && !defined(IL2CPP_STRUCT_SpellPickupPlaceholder_FWDDECL)
#include <Modloader/app/structs/SpellPickupPlaceholder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpellPickupPlaceholder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
