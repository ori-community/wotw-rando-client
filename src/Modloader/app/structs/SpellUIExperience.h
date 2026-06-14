#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpellUIExperience_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpellUIExperience_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpellUIExperience_DEFINED)
#include <Modloader/app/structs/SpellUIExperience__Fields.h>
#if defined(IL2CPP_STRUCT_SpellUIExperience__Fields_DEFINED)
#define IL2CPP_STRUCT_SpellUIExperience_DEFINED
struct SpellUIExperience__Class;
struct SpellUIExperience {
    struct SpellUIExperience__Class* klass;
    MonitorData* monitor;
    struct SpellUIExperience__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpellUIExperience_FWDDECL)
#define IL2CPP_STRUCT_SpellUIExperience_FWDDECL
#include <Modloader/app/structs/SpellUIExperience__Class.h>
#endif
#undef IL2CPP_STRUCT_SpellUIExperience_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpellUIExperience_DEFINED) && !defined(IL2CPP_STRUCT_SpellUIExperience_FWDDECL)
#include <Modloader/app/structs/SpellUIExperience.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpellUIExperience.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
