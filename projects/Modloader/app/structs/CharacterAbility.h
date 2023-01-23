#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CharacterAbility_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CharacterAbility_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterAbility_DEFINED)
#include <Modloader/app/structs/CharacterAbility__Fields.h>
#if defined(IL2CPP_STRUCT_CharacterAbility__Fields_DEFINED)
#define IL2CPP_STRUCT_CharacterAbility_DEFINED
struct CharacterAbility__Class;
struct CharacterAbility {
    struct CharacterAbility__Class* klass;
    MonitorData* monitor;
    struct CharacterAbility__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CharacterAbility_FWDDECL)
#define IL2CPP_STRUCT_CharacterAbility_FWDDECL
#include <Modloader/app/structs/CharacterAbility__Class.h>
#endif
#undef IL2CPP_STRUCT_CharacterAbility_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterAbility_DEFINED) && !defined(IL2CPP_STRUCT_CharacterAbility_FWDDECL)
#include <Modloader/app/structs/CharacterAbility.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CharacterAbility.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
