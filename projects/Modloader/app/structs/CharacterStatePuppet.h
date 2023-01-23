#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CharacterStatePuppet_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CharacterStatePuppet_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterStatePuppet_DEFINED)
#include <Modloader/app/structs/CharacterStatePuppet__Fields.h>
#if defined(IL2CPP_STRUCT_CharacterStatePuppet__Fields_DEFINED)
#define IL2CPP_STRUCT_CharacterStatePuppet_DEFINED
struct CharacterStatePuppet__Class;
struct CharacterStatePuppet {
    struct CharacterStatePuppet__Class* klass;
    MonitorData* monitor;
    struct CharacterStatePuppet__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CharacterStatePuppet_FWDDECL)
#define IL2CPP_STRUCT_CharacterStatePuppet_FWDDECL
#include <Modloader/app/structs/CharacterStatePuppet__Class.h>
#endif
#undef IL2CPP_STRUCT_CharacterStatePuppet_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterStatePuppet_DEFINED) && !defined(IL2CPP_STRUCT_CharacterStatePuppet_FWDDECL)
#include <Modloader/app/structs/CharacterStatePuppet.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CharacterStatePuppet.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
