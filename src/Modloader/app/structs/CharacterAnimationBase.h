#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CharacterAnimationBase_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CharacterAnimationBase_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterAnimationBase_DEFINED)
#include <Modloader/app/structs/CharacterAnimationBase__Fields.h>
#if defined(IL2CPP_STRUCT_CharacterAnimationBase__Fields_DEFINED)
#define IL2CPP_STRUCT_CharacterAnimationBase_DEFINED
struct CharacterAnimationBase__Class;
struct CharacterAnimationBase {
    struct CharacterAnimationBase__Class* klass;
    MonitorData* monitor;
    struct CharacterAnimationBase__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CharacterAnimationBase_FWDDECL)
#define IL2CPP_STRUCT_CharacterAnimationBase_FWDDECL
#include <Modloader/app/structs/CharacterAnimationBase__Class.h>
#endif
#undef IL2CPP_STRUCT_CharacterAnimationBase_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterAnimationBase_DEFINED) && !defined(IL2CPP_STRUCT_CharacterAnimationBase_FWDDECL)
#include <Modloader/app/structs/CharacterAnimationBase.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CharacterAnimationBase.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
