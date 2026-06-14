#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MaterialVFXSizePair__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MaterialVFXSizePair__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MaterialVFXSizePair__Fields_DEFINED)
#include <Modloader/app/structs/MaterialTypeVFXSettings_EffectSize__Enum.h>
#if defined(IL2CPP_STRUCT_MaterialTypeVFXSettings_EffectSize__Enum_DEFINED)
#define IL2CPP_STRUCT_MaterialVFXSizePair__Fields_DEFINED
struct GameObject;
struct List_1_BloodVFXPair_;
struct Dictionary_2_DamageRecieverType_BloodVFXPair_;
struct __declspec(align(8)) MaterialVFXSizePair__Fields {
    MaterialTypeVFXSettings_EffectSize__Enum Size;

    struct GameObject* Prefab;
    struct List_1_BloodVFXPair_* BloodVfx;
    struct Dictionary_2_DamageRecieverType_BloodVFXPair_* m_bloodVfxPairs;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MaterialVFXSizePair__Fields_FWDDECL)
#define IL2CPP_STRUCT_MaterialVFXSizePair__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_DamageRecieverType_BloodVFXPair_.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/List_1_BloodVFXPair_.h>
#endif
#undef IL2CPP_STRUCT_MaterialVFXSizePair__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MaterialVFXSizePair__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MaterialVFXSizePair__Fields_FWDDECL)
#include <Modloader/app/structs/MaterialVFXSizePair__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MaterialVFXSizePair__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
