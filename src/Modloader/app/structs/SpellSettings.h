#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpellSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpellSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpellSettings_DEFINED)
#include <Modloader/app/structs/SpellSettings__Fields.h>
#if defined(IL2CPP_STRUCT_SpellSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_SpellSettings_DEFINED
struct SpellSettings__Class;
struct SpellSettings {
    struct SpellSettings__Class* klass;
    MonitorData* monitor;
    struct SpellSettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpellSettings_FWDDECL)
#define IL2CPP_STRUCT_SpellSettings_FWDDECL
#include <Modloader/app/structs/SpellSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_SpellSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpellSettings_DEFINED) && !defined(IL2CPP_STRUCT_SpellSettings_FWDDECL)
#include <Modloader/app/structs/SpellSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpellSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
