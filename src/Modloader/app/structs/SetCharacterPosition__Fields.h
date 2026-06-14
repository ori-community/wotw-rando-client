#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SetCharacterPosition__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SetCharacterPosition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetCharacterPosition__Fields_DEFINED)
#include <Modloader/app/structs/ActionMethod__Fields.h>
#include <Modloader/app/structs/LegacyActivateAnimator_TargetMode__Enum.h>
#if defined(IL2CPP_STRUCT_ActionMethod__Fields_DEFINED) && defined(IL2CPP_STRUCT_LegacyActivateAnimator_TargetMode__Enum_DEFINED)
#define IL2CPP_STRUCT_SetCharacterPosition__Fields_DEFINED
struct Transform;
struct SetCharacterPosition__Fields {
    struct ActionMethod__Fields _;
    struct Transform* Position;
    bool PlaceOnGround;
    LegacyActivateAnimator_TargetMode__Enum Target;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SetCharacterPosition__Fields_FWDDECL)
#define IL2CPP_STRUCT_SetCharacterPosition__Fields_FWDDECL
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_SetCharacterPosition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetCharacterPosition__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SetCharacterPosition__Fields_FWDDECL)
#include <Modloader/app/structs/SetCharacterPosition__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SetCharacterPosition__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
