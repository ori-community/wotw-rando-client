#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CharacterGlow_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CharacterGlow_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterGlow_DEFINED)
#include <Modloader/app/structs/CharacterGlow__Fields.h>
#if defined(IL2CPP_STRUCT_CharacterGlow__Fields_DEFINED)
#define IL2CPP_STRUCT_CharacterGlow_DEFINED
struct CharacterGlow__Class;
struct CharacterGlow {
    struct CharacterGlow__Class* klass;
    MonitorData* monitor;
    struct CharacterGlow__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CharacterGlow_FWDDECL)
#define IL2CPP_STRUCT_CharacterGlow_FWDDECL
#include <Modloader/app/structs/CharacterGlow__Class.h>
#endif
#undef IL2CPP_STRUCT_CharacterGlow_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterGlow_DEFINED) && !defined(IL2CPP_STRUCT_CharacterGlow_FWDDECL)
#include <Modloader/app/structs/CharacterGlow.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CharacterGlow.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
