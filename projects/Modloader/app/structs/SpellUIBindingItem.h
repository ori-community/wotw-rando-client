#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpellUIBindingItem_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpellUIBindingItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpellUIBindingItem_DEFINED)
#include <Modloader/app/structs/SpellUIBindingItem__Fields.h>
#if defined(IL2CPP_STRUCT_SpellUIBindingItem__Fields_DEFINED)
#define IL2CPP_STRUCT_SpellUIBindingItem_DEFINED
struct SpellUIBindingItem__Class;
struct SpellUIBindingItem {
    struct SpellUIBindingItem__Class* klass;
    MonitorData* monitor;
    struct SpellUIBindingItem__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpellUIBindingItem_FWDDECL)
#define IL2CPP_STRUCT_SpellUIBindingItem_FWDDECL
#include <Modloader/app/structs/SpellUIBindingItem__Class.h>
#endif
#undef IL2CPP_STRUCT_SpellUIBindingItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpellUIBindingItem_DEFINED) && !defined(IL2CPP_STRUCT_SpellUIBindingItem_FWDDECL)
#include <Modloader/app/structs/SpellUIBindingItem.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpellUIBindingItem.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
