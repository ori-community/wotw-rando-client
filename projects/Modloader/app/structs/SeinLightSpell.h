#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinLightSpell_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinLightSpell_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinLightSpell_DEFINED)
#include <Modloader/app/structs/SeinLightSpell__Fields.h>
#if defined(IL2CPP_STRUCT_SeinLightSpell__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinLightSpell_DEFINED
struct SeinLightSpell__Class;
struct SeinLightSpell {
    struct SeinLightSpell__Class* klass;
    MonitorData* monitor;
    struct SeinLightSpell__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinLightSpell_FWDDECL)
#define IL2CPP_STRUCT_SeinLightSpell_FWDDECL
#include <Modloader/app/structs/SeinLightSpell__Class.h>
#endif
#undef IL2CPP_STRUCT_SeinLightSpell_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinLightSpell_DEFINED) && !defined(IL2CPP_STRUCT_SeinLightSpell_FWDDECL)
#include <Modloader/app/structs/SeinLightSpell.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinLightSpell.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
