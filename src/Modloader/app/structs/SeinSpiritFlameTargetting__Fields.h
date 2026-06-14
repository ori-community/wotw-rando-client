#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinSpiritFlameTargetting__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinSpiritFlameTargetting__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinSpiritFlameTargetting__Fields_DEFINED)
#include <Modloader/app/structs/CharacterState__Fields.h>
#if defined(IL2CPP_STRUCT_CharacterState__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinSpiritFlameTargetting__Fields_DEFINED
struct List_1_ISpiritFlameAttackable_;
struct SeinSpiritFlameTargetting__Fields {
    struct CharacterState__Fields _;
    struct List_1_ISpiritFlameAttackable_* m_lastClosestAttackables;
    struct List_1_ISpiritFlameAttackable_* ClosestAttackables;
    float _Range_k__BackingField;
    float _MaxNumberOfTargets_k__BackingField;
    struct List_1_ISpiritFlameAttackable_* m_remainingSpiritFlameAttackables;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinSpiritFlameTargetting__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinSpiritFlameTargetting__Fields_FWDDECL
#include <Modloader/app/structs/List_1_ISpiritFlameAttackable_.h>
#endif
#undef IL2CPP_STRUCT_SeinSpiritFlameTargetting__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinSpiritFlameTargetting__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinSpiritFlameTargetting__Fields_FWDDECL)
#include <Modloader/app/structs/SeinSpiritFlameTargetting__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinSpiritFlameTargetting__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
