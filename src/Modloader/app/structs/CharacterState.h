#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CharacterState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CharacterState_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterState_DEFINED)
#include <Modloader/app/structs/CharacterState__Fields.h>
#if defined(IL2CPP_STRUCT_CharacterState__Fields_DEFINED)
#define IL2CPP_STRUCT_CharacterState_DEFINED
struct CharacterState__Class;
struct CharacterState {
    struct CharacterState__Class* klass;
    MonitorData* monitor;
    struct CharacterState__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CharacterState_FWDDECL)
#define IL2CPP_STRUCT_CharacterState_FWDDECL
#include <Modloader/app/structs/CharacterState__Class.h>
#endif
#undef IL2CPP_STRUCT_CharacterState_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterState_DEFINED) && !defined(IL2CPP_STRUCT_CharacterState_FWDDECL)
#include <Modloader/app/structs/CharacterState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CharacterState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
