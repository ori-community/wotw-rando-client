#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MeleeComboTransition__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MeleeComboTransition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MeleeComboTransition__Fields_DEFINED)
#include <Modloader/app/structs/MeleeComboTransition_OnGroundMode__Enum.h>
#include <Modloader/app/structs/MeleeComboTransition_StickDirection__Enum.h>
#if defined(IL2CPP_STRUCT_MeleeComboTransition_StickDirection__Enum_DEFINED) && defined(IL2CPP_STRUCT_MeleeComboTransition_OnGroundMode__Enum_DEFINED)
#define IL2CPP_STRUCT_MeleeComboTransition__Fields_DEFINED
struct MeleeComboMove;
struct __declspec(align(8)) MeleeComboTransition__Fields {
    MeleeComboTransition_StickDirection__Enum StickDirectionCondition;

    MeleeComboTransition_OnGroundMode__Enum OnGround;

    struct MeleeComboMove* TargetMove;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MeleeComboTransition__Fields_FWDDECL)
#define IL2CPP_STRUCT_MeleeComboTransition__Fields_FWDDECL
#include <Modloader/app/structs/MeleeComboMove.h>
#endif
#undef IL2CPP_STRUCT_MeleeComboTransition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MeleeComboTransition__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MeleeComboTransition__Fields_FWDDECL)
#include <Modloader/app/structs/MeleeComboTransition__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MeleeComboTransition__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
