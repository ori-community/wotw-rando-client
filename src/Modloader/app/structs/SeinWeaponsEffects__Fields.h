#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinWeaponsEffects__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinWeaponsEffects__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinWeaponsEffects__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinWeaponsEffects__Fields_DEFINED
struct GameObject;
struct __declspec(align(8)) SeinWeaponsEffects__Fields {
    struct GameObject* Sword;
    struct GameObject* SwordSmall;
    struct GameObject* Hammer;
    struct GameObject* HammerSmall;
    struct GameObject* BowArrow;
    struct GameObject* BowArrowSmall;
    struct GameObject* Torch;
};
#endif
#if !defined(IL2CPP_STRUCT_SeinWeaponsEffects__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinWeaponsEffects__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#endif
#undef IL2CPP_STRUCT_SeinWeaponsEffects__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinWeaponsEffects__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinWeaponsEffects__Fields_FWDDECL)
#include <Modloader/app/structs/SeinWeaponsEffects__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinWeaponsEffects__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
