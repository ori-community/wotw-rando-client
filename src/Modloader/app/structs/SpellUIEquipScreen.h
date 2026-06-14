#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpellUIEquipScreen_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpellUIEquipScreen_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpellUIEquipScreen_DEFINED)
#include <Modloader/app/structs/SpellUIEquipScreen__Fields.h>
#if defined(IL2CPP_STRUCT_SpellUIEquipScreen__Fields_DEFINED)
#define IL2CPP_STRUCT_SpellUIEquipScreen_DEFINED
struct SpellUIEquipScreen__Class;
struct SpellUIEquipScreen {
    struct SpellUIEquipScreen__Class* klass;
    MonitorData* monitor;
    struct SpellUIEquipScreen__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpellUIEquipScreen_FWDDECL)
#define IL2CPP_STRUCT_SpellUIEquipScreen_FWDDECL
#include <Modloader/app/structs/SpellUIEquipScreen__Class.h>
#endif
#undef IL2CPP_STRUCT_SpellUIEquipScreen_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpellUIEquipScreen_DEFINED) && !defined(IL2CPP_STRUCT_SpellUIEquipScreen_FWDDECL)
#include <Modloader/app/structs/SpellUIEquipScreen.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpellUIEquipScreen.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
