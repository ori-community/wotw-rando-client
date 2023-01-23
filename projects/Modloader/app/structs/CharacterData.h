#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CharacterData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CharacterData_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterData_DEFINED)
#include <Modloader/app/structs/CharacterData__Fields.h>
#if defined(IL2CPP_STRUCT_CharacterData__Fields_DEFINED)
#define IL2CPP_STRUCT_CharacterData_DEFINED
struct CharacterData__Class;
struct CharacterData {
    struct CharacterData__Class* klass;
    MonitorData* monitor;
    struct CharacterData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CharacterData_FWDDECL)
#define IL2CPP_STRUCT_CharacterData_FWDDECL
#include <Modloader/app/structs/CharacterData__Class.h>
#endif
#undef IL2CPP_STRUCT_CharacterData_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterData_DEFINED) && !defined(IL2CPP_STRUCT_CharacterData_FWDDECL)
#include <Modloader/app/structs/CharacterData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CharacterData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
