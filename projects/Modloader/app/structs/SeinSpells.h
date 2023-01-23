#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinSpells_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinSpells_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinSpells_DEFINED)
#include <Modloader/app/structs/SeinSpells__Fields.h>
#if defined(IL2CPP_STRUCT_SeinSpells__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinSpells_DEFINED
struct SeinSpells__Class;
struct SeinSpells {
    struct SeinSpells__Class* klass;
    MonitorData* monitor;
    struct SeinSpells__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinSpells_FWDDECL)
#define IL2CPP_STRUCT_SeinSpells_FWDDECL
#include <Modloader/app/structs/SeinSpells__Class.h>
#endif
#undef IL2CPP_STRUCT_SeinSpells_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinSpells_DEFINED) && !defined(IL2CPP_STRUCT_SeinSpells_FWDDECL)
#include <Modloader/app/structs/SeinSpells.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinSpells.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
