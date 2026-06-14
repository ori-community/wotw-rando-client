#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CharacterVisuals_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CharacterVisuals_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterVisuals_DEFINED)
#include <Modloader/app/structs/CharacterVisuals__Fields.h>
#if defined(IL2CPP_STRUCT_CharacterVisuals__Fields_DEFINED)
#define IL2CPP_STRUCT_CharacterVisuals_DEFINED
struct CharacterVisuals__Class;
struct CharacterVisuals {
    struct CharacterVisuals__Class* klass;
    MonitorData* monitor;
    struct CharacterVisuals__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CharacterVisuals_FWDDECL)
#define IL2CPP_STRUCT_CharacterVisuals_FWDDECL
#include <Modloader/app/structs/CharacterVisuals__Class.h>
#endif
#undef IL2CPP_STRUCT_CharacterVisuals_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterVisuals_DEFINED) && !defined(IL2CPP_STRUCT_CharacterVisuals_FWDDECL)
#include <Modloader/app/structs/CharacterVisuals.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CharacterVisuals.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
