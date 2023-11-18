#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MeleeComboAdapter__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MeleeComboAdapter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MeleeComboAdapter__Fields_DEFINED)
#include <Modloader/app/structs/ComboMove__Fields.h>
#if defined(IL2CPP_STRUCT_ComboMove__Fields_DEFINED)
#define IL2CPP_STRUCT_MeleeComboAdapter__Fields_DEFINED
struct MeleeWeapon;
struct MeleeComboMoveSettings;
struct MeleeComboAdapter__Fields {
    struct ComboMove__Fields _;
    struct MeleeWeapon* m_weapon;
    struct MeleeComboMoveSettings* MeleeSpecificComboSettings;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MeleeComboAdapter__Fields_FWDDECL)
#define IL2CPP_STRUCT_MeleeComboAdapter__Fields_FWDDECL
#include <Modloader/app/structs/MeleeComboMoveSettings.h>
#include <Modloader/app/structs/MeleeWeapon.h>
#endif
#undef IL2CPP_STRUCT_MeleeComboAdapter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MeleeComboAdapter__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MeleeComboAdapter__Fields_FWDDECL)
#include <Modloader/app/structs/MeleeComboAdapter__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MeleeComboAdapter__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
