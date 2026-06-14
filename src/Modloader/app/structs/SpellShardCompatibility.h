#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpellShardCompatibility_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpellShardCompatibility_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpellShardCompatibility_DEFINED)
#include <Modloader/app/structs/SpellShardCompatibility__Fields.h>
#if defined(IL2CPP_STRUCT_SpellShardCompatibility__Fields_DEFINED)
#define IL2CPP_STRUCT_SpellShardCompatibility_DEFINED
struct SpellShardCompatibility__Class;
struct SpellShardCompatibility {
    struct SpellShardCompatibility__Class* klass;
    MonitorData* monitor;
    struct SpellShardCompatibility__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpellShardCompatibility_FWDDECL)
#define IL2CPP_STRUCT_SpellShardCompatibility_FWDDECL
#include <Modloader/app/structs/SpellShardCompatibility__Class.h>
#endif
#undef IL2CPP_STRUCT_SpellShardCompatibility_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpellShardCompatibility_DEFINED) && !defined(IL2CPP_STRUCT_SpellShardCompatibility_FWDDECL)
#include <Modloader/app/structs/SpellShardCompatibility.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpellShardCompatibility.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
