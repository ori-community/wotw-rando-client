#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CharacterPlugin_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CharacterPlugin_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterPlugin_DEFINED)
#include <Modloader/app/structs/CharacterPlugin__Fields.h>
#if defined(IL2CPP_STRUCT_CharacterPlugin__Fields_DEFINED)
#define IL2CPP_STRUCT_CharacterPlugin_DEFINED
struct CharacterPlugin__Class;
struct CharacterPlugin {
    struct CharacterPlugin__Class* klass;
    MonitorData* monitor;
    struct CharacterPlugin__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CharacterPlugin_FWDDECL)
#define IL2CPP_STRUCT_CharacterPlugin_FWDDECL
#include <Modloader/app/structs/CharacterPlugin__Class.h>
#endif
#undef IL2CPP_STRUCT_CharacterPlugin_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterPlugin_DEFINED) && !defined(IL2CPP_STRUCT_CharacterPlugin_FWDDECL)
#include <Modloader/app/structs/CharacterPlugin.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CharacterPlugin.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
