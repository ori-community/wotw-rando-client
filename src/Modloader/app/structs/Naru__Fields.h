#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Naru__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Naru__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Naru__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_Naru__Fields_DEFINED
struct CharacterAnimationSystem;
struct NaruController;
struct PlatformBehaviour;
struct NaruSounds;
struct DamageOwner;
struct Naru__Fields {
    struct MonoBehaviour__Fields _;
    struct CharacterAnimationSystem* Animation;
    struct NaruController* Controller;
    struct PlatformBehaviour* PlatformBehaviour;
    bool SeinNaruComboEnabled;
    struct NaruSounds* Sounds;
    struct DamageOwner* _DamageOwner_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Naru__Fields_FWDDECL)
#define IL2CPP_STRUCT_Naru__Fields_FWDDECL
#include <Modloader/app/structs/CharacterAnimationSystem.h>
#include <Modloader/app/structs/DamageOwner.h>
#include <Modloader/app/structs/NaruController.h>
#include <Modloader/app/structs/NaruSounds.h>
#include <Modloader/app/structs/PlatformBehaviour.h>
#endif
#undef IL2CPP_STRUCT_Naru__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Naru__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Naru__Fields_FWDDECL)
#include <Modloader/app/structs/Naru__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Naru__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
