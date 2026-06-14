#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CharacterResult_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CharacterResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterResult_DEFINED)
#include <Modloader/app/structs/CharacterResult__Fields.h>
#if defined(IL2CPP_STRUCT_CharacterResult__Fields_DEFINED)
#define IL2CPP_STRUCT_CharacterResult_DEFINED
struct CharacterResult__Class;
struct CharacterResult {
    struct CharacterResult__Class* klass;
    MonitorData* monitor;
    struct CharacterResult__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CharacterResult_FWDDECL)
#define IL2CPP_STRUCT_CharacterResult_FWDDECL
#include <Modloader/app/structs/CharacterResult__Class.h>
#endif
#undef IL2CPP_STRUCT_CharacterResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterResult_DEFINED) && !defined(IL2CPP_STRUCT_CharacterResult_FWDDECL)
#include <Modloader/app/structs/CharacterResult.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CharacterResult.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
