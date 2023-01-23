#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InstantiateCharacterAction__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InstantiateCharacterAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InstantiateCharacterAction__Fields_DEFINED)
#include <Modloader/app/structs/ActionMethod__Fields.h>
#include <Modloader/app/structs/CharacterFactory_Characters__Enum.h>
#if defined(IL2CPP_STRUCT_ActionMethod__Fields_DEFINED) && defined(IL2CPP_STRUCT_CharacterFactory_Characters__Enum_DEFINED)
#define IL2CPP_STRUCT_InstantiateCharacterAction__Fields_DEFINED
struct Transform;
struct GameObject;
struct InstantiateCharacterAction__Fields {
    struct ActionMethod__Fields _;
    struct Transform* Position;
    struct GameObject* Prefab;
    CharacterFactory_Characters__Enum Character;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InstantiateCharacterAction__Fields_FWDDECL)
#define IL2CPP_STRUCT_InstantiateCharacterAction__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_InstantiateCharacterAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InstantiateCharacterAction__Fields_DEFINED) && !defined(IL2CPP_STRUCT_InstantiateCharacterAction__Fields_FWDDECL)
#include <Modloader/app/structs/InstantiateCharacterAction__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InstantiateCharacterAction__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
