#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpellInventory_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpellInventory_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpellInventory_DEFINED)
#include <Modloader/app/structs/SpellInventory__Fields.h>
#if defined(IL2CPP_STRUCT_SpellInventory__Fields_DEFINED)
#define IL2CPP_STRUCT_SpellInventory_DEFINED
struct SpellInventory__Class;
struct SpellInventory {
    struct SpellInventory__Class* klass;
    MonitorData* monitor;
    struct SpellInventory__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpellInventory_FWDDECL)
#define IL2CPP_STRUCT_SpellInventory_FWDDECL
#include <Modloader/app/structs/SpellInventory__Class.h>
#endif
#undef IL2CPP_STRUCT_SpellInventory_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpellInventory_DEFINED) && !defined(IL2CPP_STRUCT_SpellInventory_FWDDECL)
#include <Modloader/app/structs/SpellInventory.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpellInventory.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
