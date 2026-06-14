#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpellUISpellDetails_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpellUISpellDetails_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpellUISpellDetails_DEFINED)
#include <Modloader/app/structs/SpellUISpellDetails__Fields.h>
#if defined(IL2CPP_STRUCT_SpellUISpellDetails__Fields_DEFINED)
#define IL2CPP_STRUCT_SpellUISpellDetails_DEFINED
struct SpellUISpellDetails__Class;
struct SpellUISpellDetails {
    struct SpellUISpellDetails__Class* klass;
    MonitorData* monitor;
    struct SpellUISpellDetails__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpellUISpellDetails_FWDDECL)
#define IL2CPP_STRUCT_SpellUISpellDetails_FWDDECL
#include <Modloader/app/structs/SpellUISpellDetails__Class.h>
#endif
#undef IL2CPP_STRUCT_SpellUISpellDetails_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpellUISpellDetails_DEFINED) && !defined(IL2CPP_STRUCT_SpellUISpellDetails_FWDDECL)
#include <Modloader/app/structs/SpellUISpellDetails.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpellUISpellDetails.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
