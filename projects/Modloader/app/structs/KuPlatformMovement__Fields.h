#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KuPlatformMovement__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KuPlatformMovement__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KuPlatformMovement__Fields_DEFINED)
#include <Modloader/app/structs/CharacterPlatformMovement__Fields.h>
#if defined(IL2CPP_STRUCT_CharacterPlatformMovement__Fields_DEFINED)
#define IL2CPP_STRUCT_KuPlatformMovement__Fields_DEFINED
struct IUberState__Array;
struct List_1_UnityEngine_GameObject_;
struct KuPlatformMovement__Fields {
    struct CharacterPlatformMovement__Fields _;
    bool _ApplyOnEditor_k__BackingField;
    struct IUberState__Array* _AffectingUberStates_k__BackingField;
    struct List_1_UnityEngine_GameObject_* _AllTargets_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_KuPlatformMovement__Fields_FWDDECL)
#define IL2CPP_STRUCT_KuPlatformMovement__Fields_FWDDECL
#include <Modloader/app/structs/IUberState__Array.h>
#include <Modloader/app/structs/List_1_UnityEngine_GameObject_.h>
#endif
#undef IL2CPP_STRUCT_KuPlatformMovement__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KuPlatformMovement__Fields_DEFINED) && !defined(IL2CPP_STRUCT_KuPlatformMovement__Fields_FWDDECL)
#include <Modloader/app/structs/KuPlatformMovement__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KuPlatformMovement__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
