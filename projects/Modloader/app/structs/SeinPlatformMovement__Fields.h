#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinPlatformMovement__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinPlatformMovement__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinPlatformMovement__Fields_DEFINED)
#include <Modloader/app/structs/CharacterPlatformMovement__Fields.h>
#if defined(IL2CPP_STRUCT_CharacterPlatformMovement__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinPlatformMovement__Fields_DEFINED
struct SeinCharacter;
struct IUberState__Array;
struct List_1_UnityEngine_GameObject_;
struct SeinPlatformMovement__Fields {
    struct CharacterPlatformMovement__Fields _;
    struct SeinCharacter* m_sein;
    bool _ApplyOnEditor_k__BackingField;
    struct IUberState__Array* _AffectingUberStates_k__BackingField;
    struct List_1_UnityEngine_GameObject_* _AllTargets_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinPlatformMovement__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinPlatformMovement__Fields_FWDDECL
#include <Modloader/app/structs/IUberState__Array.h>
#include <Modloader/app/structs/List_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/SeinCharacter.h>
#endif
#undef IL2CPP_STRUCT_SeinPlatformMovement__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinPlatformMovement__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinPlatformMovement__Fields_FWDDECL)
#include <Modloader/app/structs/SeinPlatformMovement__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinPlatformMovement__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
