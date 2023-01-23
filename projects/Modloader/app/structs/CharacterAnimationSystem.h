#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CharacterAnimationSystem_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CharacterAnimationSystem_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterAnimationSystem_DEFINED)
#include <Modloader/app/structs/CharacterAnimationSystem__Fields.h>
#if defined(IL2CPP_STRUCT_CharacterAnimationSystem__Fields_DEFINED)
#define IL2CPP_STRUCT_CharacterAnimationSystem_DEFINED
struct CharacterAnimationSystem__Class;
struct CharacterAnimationSystem {
    struct CharacterAnimationSystem__Class* klass;
    MonitorData* monitor;
    struct CharacterAnimationSystem__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CharacterAnimationSystem_FWDDECL)
#define IL2CPP_STRUCT_CharacterAnimationSystem_FWDDECL
#include <Modloader/app/structs/CharacterAnimationSystem__Class.h>
#endif
#undef IL2CPP_STRUCT_CharacterAnimationSystem_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterAnimationSystem_DEFINED) && !defined(IL2CPP_STRUCT_CharacterAnimationSystem_FWDDECL)
#include <Modloader/app/structs/CharacterAnimationSystem.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CharacterAnimationSystem.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
