#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BabySein__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BabySein__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BabySein__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_BabySein__Fields_DEFINED
struct PlatformBehaviour;
struct BabySeinController;
struct CharacterAnimationSystem;
struct BabySeinSounds;
struct DamageOwner;
struct BabySein__Fields {
    struct MonoBehaviour__Fields _;
    struct PlatformBehaviour* PlatformBehaviour;
    struct BabySeinController* Controller;
    struct CharacterAnimationSystem* Animation;
    struct BabySeinSounds* Sounds;
    struct DamageOwner* _DamageOwner_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BabySein__Fields_FWDDECL)
#define IL2CPP_STRUCT_BabySein__Fields_FWDDECL
#include <Modloader/app/structs/BabySeinController.h>
#include <Modloader/app/structs/BabySeinSounds.h>
#include <Modloader/app/structs/CharacterAnimationSystem.h>
#include <Modloader/app/structs/DamageOwner.h>
#include <Modloader/app/structs/PlatformBehaviour.h>
#endif
#undef IL2CPP_STRUCT_BabySein__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BabySein__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BabySein__Fields_FWDDECL)
#include <Modloader/app/structs/BabySein__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BabySein__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
