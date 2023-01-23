#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpellIconsCollection_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpellIconsCollection_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpellIconsCollection_DEFINED)
#include <Modloader/app/structs/SpellIconsCollection__Fields.h>
#if defined(IL2CPP_STRUCT_SpellIconsCollection__Fields_DEFINED)
#define IL2CPP_STRUCT_SpellIconsCollection_DEFINED
struct SpellIconsCollection__Class;
struct SpellIconsCollection {
    struct SpellIconsCollection__Class* klass;
    MonitorData* monitor;
    struct SpellIconsCollection__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpellIconsCollection_FWDDECL)
#define IL2CPP_STRUCT_SpellIconsCollection_FWDDECL
#include <Modloader/app/structs/SpellIconsCollection__Class.h>
#endif
#undef IL2CPP_STRUCT_SpellIconsCollection_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpellIconsCollection_DEFINED) && !defined(IL2CPP_STRUCT_SpellIconsCollection_FWDDECL)
#include <Modloader/app/structs/SpellIconsCollection.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpellIconsCollection.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
