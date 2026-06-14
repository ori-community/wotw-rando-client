#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpellDescription_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpellDescription_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpellDescription_DEFINED)
#include <Modloader/app/structs/SpellDescription__Fields.h>
#if defined(IL2CPP_STRUCT_SpellDescription__Fields_DEFINED)
#define IL2CPP_STRUCT_SpellDescription_DEFINED
struct SpellDescription__Class;
struct SpellDescription {
    struct SpellDescription__Class* klass;
    MonitorData* monitor;
    struct SpellDescription__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpellDescription_FWDDECL)
#define IL2CPP_STRUCT_SpellDescription_FWDDECL
#include <Modloader/app/structs/SpellDescription__Class.h>
#endif
#undef IL2CPP_STRUCT_SpellDescription_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpellDescription_DEFINED) && !defined(IL2CPP_STRUCT_SpellDescription_FWDDECL)
#include <Modloader/app/structs/SpellDescription.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpellDescription.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
