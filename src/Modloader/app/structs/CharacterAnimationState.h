#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CharacterAnimationState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CharacterAnimationState_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterAnimationState_DEFINED)
#include <Modloader/app/structs/CharacterAnimationState__Fields.h>
#if defined(IL2CPP_STRUCT_CharacterAnimationState__Fields_DEFINED)
#define IL2CPP_STRUCT_CharacterAnimationState_DEFINED
struct CharacterAnimationState__Class;
struct CharacterAnimationState {
    struct CharacterAnimationState__Class* klass;
    MonitorData* monitor;
    struct CharacterAnimationState__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CharacterAnimationState_FWDDECL)
#define IL2CPP_STRUCT_CharacterAnimationState_FWDDECL
#include <Modloader/app/structs/CharacterAnimationState__Class.h>
#endif
#undef IL2CPP_STRUCT_CharacterAnimationState_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterAnimationState_DEFINED) && !defined(IL2CPP_STRUCT_CharacterAnimationState_FWDDECL)
#include <Modloader/app/structs/CharacterAnimationState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CharacterAnimationState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
