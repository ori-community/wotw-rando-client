#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WeaponMasterPlaceholder__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WeaponMasterPlaceholder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WeaponMasterPlaceholder__Fields_DEFINED)
#include <Modloader/app/structs/NPCEntityPlaceholder__Fields.h>
#if defined(IL2CPP_STRUCT_NPCEntityPlaceholder__Fields_DEFINED)
#define IL2CPP_STRUCT_WeaponMasterPlaceholder__Fields_DEFINED
struct MoonReference_1_ICondition_;
struct TalkVariant;
struct ICondition;
struct WeaponMasterPlaceholder__Fields {
    struct NPCEntityPlaceholder__Fields _;
    struct MoonReference_1_ICondition_* ShouldSpawnCondition;
    bool OverrideIdleVariants;
    struct TalkVariant* IdleVariantA;
    struct TalkVariant* IdleVariantB;
    bool OverrideTalkVariants;
    struct TalkVariant* TalkVariantA;
    struct TalkVariant* TalkVariantB;
    struct ICondition* m_resolvedCondition;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WeaponMasterPlaceholder__Fields_FWDDECL)
#define IL2CPP_STRUCT_WeaponMasterPlaceholder__Fields_FWDDECL
#include <Modloader/app/structs/ICondition.h>
#include <Modloader/app/structs/MoonReference_1_ICondition_.h>
#include <Modloader/app/structs/TalkVariant.h>
#endif
#undef IL2CPP_STRUCT_WeaponMasterPlaceholder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WeaponMasterPlaceholder__Fields_DEFINED) && !defined(IL2CPP_STRUCT_WeaponMasterPlaceholder__Fields_FWDDECL)
#include <Modloader/app/structs/WeaponMasterPlaceholder__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WeaponMasterPlaceholder__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
