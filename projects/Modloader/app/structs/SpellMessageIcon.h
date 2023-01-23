#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpellMessageIcon_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpellMessageIcon_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpellMessageIcon_DEFINED)
#include <Modloader/app/structs/SpellMessageIcon__Fields.h>
#if defined(IL2CPP_STRUCT_SpellMessageIcon__Fields_DEFINED)
#define IL2CPP_STRUCT_SpellMessageIcon_DEFINED
struct SpellMessageIcon__Class;
struct SpellMessageIcon {
    struct SpellMessageIcon__Class* klass;
    MonitorData* monitor;
    struct SpellMessageIcon__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpellMessageIcon_FWDDECL)
#define IL2CPP_STRUCT_SpellMessageIcon_FWDDECL
#include <Modloader/app/structs/SpellMessageIcon__Class.h>
#endif
#undef IL2CPP_STRUCT_SpellMessageIcon_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpellMessageIcon_DEFINED) && !defined(IL2CPP_STRUCT_SpellMessageIcon_FWDDECL)
#include <Modloader/app/structs/SpellMessageIcon.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpellMessageIcon.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
