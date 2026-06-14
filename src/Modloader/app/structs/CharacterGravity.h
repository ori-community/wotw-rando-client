#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CharacterGravity_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CharacterGravity_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterGravity_DEFINED)
#include <Modloader/app/structs/CharacterGravity__Fields.h>
#if defined(IL2CPP_STRUCT_CharacterGravity__Fields_DEFINED)
#define IL2CPP_STRUCT_CharacterGravity_DEFINED
struct CharacterGravity__Class;
struct CharacterGravity {
    struct CharacterGravity__Class* klass;
    MonitorData* monitor;
    struct CharacterGravity__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CharacterGravity_FWDDECL)
#define IL2CPP_STRUCT_CharacterGravity_FWDDECL
#include <Modloader/app/structs/CharacterGravity__Class.h>
#endif
#undef IL2CPP_STRUCT_CharacterGravity_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterGravity_DEFINED) && !defined(IL2CPP_STRUCT_CharacterGravity_FWDDECL)
#include <Modloader/app/structs/CharacterGravity.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CharacterGravity.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
