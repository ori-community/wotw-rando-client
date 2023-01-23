#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpellUIItem_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpellUIItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpellUIItem_DEFINED)
#include <Modloader/app/structs/SpellUIItem__Fields.h>
#if defined(IL2CPP_STRUCT_SpellUIItem__Fields_DEFINED)
#define IL2CPP_STRUCT_SpellUIItem_DEFINED
struct SpellUIItem__Class;
struct SpellUIItem {
    struct SpellUIItem__Class* klass;
    MonitorData* monitor;
    struct SpellUIItem__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpellUIItem_FWDDECL)
#define IL2CPP_STRUCT_SpellUIItem_FWDDECL
#include <Modloader/app/structs/SpellUIItem__Class.h>
#endif
#undef IL2CPP_STRUCT_SpellUIItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpellUIItem_DEFINED) && !defined(IL2CPP_STRUCT_SpellUIItem_FWDDECL)
#include <Modloader/app/structs/SpellUIItem.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpellUIItem.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
