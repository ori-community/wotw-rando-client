#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinSpiritFlameAbility__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinSpiritFlameAbility__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinSpiritFlameAbility__Fields_DEFINED)
#include <Modloader/app/structs/CharacterState__Fields.h>
#if defined(IL2CPP_STRUCT_CharacterState__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinSpiritFlameAbility__Fields_DEFINED
struct GameObject;
struct HashSet_1_System_String_;
struct SeinSpiritFlameAbility__Fields {
    struct CharacterState__Fields _;
    struct GameObject* TempTarget;
    struct HashSet_1_System_String_* m_lockShootingSpiritFlameLocks;
    bool ShootWhenNoTarget;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinSpiritFlameAbility__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinSpiritFlameAbility__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/HashSet_1_System_String_.h>
#endif
#undef IL2CPP_STRUCT_SeinSpiritFlameAbility__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinSpiritFlameAbility__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinSpiritFlameAbility__Fields_FWDDECL)
#include <Modloader/app/structs/SeinSpiritFlameAbility__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinSpiritFlameAbility__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
