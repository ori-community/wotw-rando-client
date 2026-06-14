#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Enemy2D__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Enemy2D__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Enemy2D__Fields_DEFINED)
#include <Modloader/app/structs/Enemy__Fields.h>
#if defined(IL2CPP_STRUCT_Enemy__Fields_DEFINED)
#define IL2CPP_STRUCT_Enemy2D__Fields_DEFINED
struct CharacterAnimationSystem;
struct GameObject;
struct RecordableObjectPuppet;
struct Enemy2D__Fields {
    struct Enemy__Fields _;
    struct CharacterAnimationSystem* Animation;
    struct GameObject* PuppetPrefab;
    struct RecordableObjectPuppet* m_recordableObjectPuppet;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Enemy2D__Fields_FWDDECL)
#define IL2CPP_STRUCT_Enemy2D__Fields_FWDDECL
#include <Modloader/app/structs/CharacterAnimationSystem.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/RecordableObjectPuppet.h>
#endif
#undef IL2CPP_STRUCT_Enemy2D__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Enemy2D__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Enemy2D__Fields_FWDDECL)
#include <Modloader/app/structs/Enemy2D__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Enemy2D__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
