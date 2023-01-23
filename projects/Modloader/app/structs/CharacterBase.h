#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CharacterBase_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CharacterBase_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterBase_DEFINED)
#include <Modloader/app/structs/CharacterBase__Fields.h>
#if defined(IL2CPP_STRUCT_CharacterBase__Fields_DEFINED)
#define IL2CPP_STRUCT_CharacterBase_DEFINED
struct CharacterBase__Class;
struct CharacterBase {
    struct CharacterBase__Class* klass;
    MonitorData* monitor;
    struct CharacterBase__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CharacterBase_FWDDECL)
#define IL2CPP_STRUCT_CharacterBase_FWDDECL
#include <Modloader/app/structs/CharacterBase__Class.h>
#endif
#undef IL2CPP_STRUCT_CharacterBase_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterBase_DEFINED) && !defined(IL2CPP_STRUCT_CharacterBase_FWDDECL)
#include <Modloader/app/structs/CharacterBase.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CharacterBase.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
