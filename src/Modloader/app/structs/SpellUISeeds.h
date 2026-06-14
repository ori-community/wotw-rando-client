#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpellUISeeds_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpellUISeeds_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpellUISeeds_DEFINED)
#include <Modloader/app/structs/SpellUISeeds__Fields.h>
#if defined(IL2CPP_STRUCT_SpellUISeeds__Fields_DEFINED)
#define IL2CPP_STRUCT_SpellUISeeds_DEFINED
struct SpellUISeeds__Class;
struct SpellUISeeds {
    struct SpellUISeeds__Class* klass;
    MonitorData* monitor;
    struct SpellUISeeds__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpellUISeeds_FWDDECL)
#define IL2CPP_STRUCT_SpellUISeeds_FWDDECL
#include <Modloader/app/structs/SpellUISeeds__Class.h>
#endif
#undef IL2CPP_STRUCT_SpellUISeeds_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpellUISeeds_DEFINED) && !defined(IL2CPP_STRUCT_SpellUISeeds_FWDDECL)
#include <Modloader/app/structs/SpellUISeeds.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpellUISeeds.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
