#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CharacterThirdPerson_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CharacterThirdPerson_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterThirdPerson_DEFINED)
#include <Modloader/app/structs/CharacterThirdPerson__Fields.h>
#if defined(IL2CPP_STRUCT_CharacterThirdPerson__Fields_DEFINED)
#define IL2CPP_STRUCT_CharacterThirdPerson_DEFINED
struct CharacterThirdPerson__Class;
struct CharacterThirdPerson {
    struct CharacterThirdPerson__Class* klass;
    MonitorData* monitor;
    struct CharacterThirdPerson__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CharacterThirdPerson_FWDDECL)
#define IL2CPP_STRUCT_CharacterThirdPerson_FWDDECL
#include <Modloader/app/structs/CharacterThirdPerson__Class.h>
#endif
#undef IL2CPP_STRUCT_CharacterThirdPerson_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterThirdPerson_DEFINED) && !defined(IL2CPP_STRUCT_CharacterThirdPerson_FWDDECL)
#include <Modloader/app/structs/CharacterThirdPerson.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CharacterThirdPerson.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
