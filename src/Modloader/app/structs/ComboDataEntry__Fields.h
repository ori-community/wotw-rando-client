#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ComboDataEntry__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ComboDataEntry__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ComboDataEntry__Fields_DEFINED)
#define IL2CPP_STRUCT_ComboDataEntry__Fields_DEFINED
struct String;
struct MeleeComboMoveSettings;
struct ComboMoveSettings;
struct Type;
struct List_1_Moon_ComboSystem_TransitionEntry_;
struct __declspec(align(8)) ComboDataEntry__Fields {
    bool Enabled;
    struct String* MoveTypeName;
    bool IsMelee;
    struct MeleeComboMoveSettings* MeleeSpecificComboSettings;
    struct ComboMoveSettings* ComboMoveSettings;
    struct Type* MoveType;
    struct List_1_Moon_ComboSystem_TransitionEntry_* Transitions;
};
#endif
#if !defined(IL2CPP_STRUCT_ComboDataEntry__Fields_FWDDECL)
#define IL2CPP_STRUCT_ComboDataEntry__Fields_FWDDECL
#include <Modloader/app/structs/ComboMoveSettings.h>
#include <Modloader/app/structs/List_1_Moon_ComboSystem_TransitionEntry_.h>
#include <Modloader/app/structs/MeleeComboMoveSettings.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>
#endif
#undef IL2CPP_STRUCT_ComboDataEntry__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ComboDataEntry__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ComboDataEntry__Fields_FWDDECL)
#include <Modloader/app/structs/ComboDataEntry__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ComboDataEntry__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
