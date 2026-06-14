#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpellDescriptionCollection_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpellDescriptionCollection_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpellDescriptionCollection_DEFINED)
#include <Modloader/app/structs/SpellDescriptionCollection__Fields.h>
#if defined(IL2CPP_STRUCT_SpellDescriptionCollection__Fields_DEFINED)
#define IL2CPP_STRUCT_SpellDescriptionCollection_DEFINED
struct SpellDescriptionCollection__Class;
struct SpellDescriptionCollection {
    struct SpellDescriptionCollection__Class* klass;
    MonitorData* monitor;
    struct SpellDescriptionCollection__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpellDescriptionCollection_FWDDECL)
#define IL2CPP_STRUCT_SpellDescriptionCollection_FWDDECL
#include <Modloader/app/structs/SpellDescriptionCollection__Class.h>
#endif
#undef IL2CPP_STRUCT_SpellDescriptionCollection_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpellDescriptionCollection_DEFINED) && !defined(IL2CPP_STRUCT_SpellDescriptionCollection_FWDDECL)
#include <Modloader/app/structs/SpellDescriptionCollection.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpellDescriptionCollection.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
