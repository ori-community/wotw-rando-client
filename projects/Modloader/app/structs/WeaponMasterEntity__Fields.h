#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WeaponMasterEntity__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WeaponMasterEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WeaponMasterEntity__Fields_DEFINED)
#include <Modloader/app/structs/NPCEntity__Fields.h>
#if defined(IL2CPP_STRUCT_NPCEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_WeaponMasterEntity__Fields_DEFINED
struct Condition_1;
struct EventTriggerAnimator__Array;
struct WeaponMasterEntity__Fields {
    struct NPCEntity__Fields _;
    struct Condition_1* StartFromTree;
    bool m_onGround;
    struct EventTriggerAnimator__Array* NoLongerInTreeTriggerEvent;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WeaponMasterEntity__Fields_FWDDECL)
#define IL2CPP_STRUCT_WeaponMasterEntity__Fields_FWDDECL
#include <Modloader/app/structs/Condition_1.h>
#include <Modloader/app/structs/EventTriggerAnimator__Array.h>
#endif
#undef IL2CPP_STRUCT_WeaponMasterEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WeaponMasterEntity__Fields_DEFINED) && !defined(IL2CPP_STRUCT_WeaponMasterEntity__Fields_FWDDECL)
#include <Modloader/app/structs/WeaponMasterEntity__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WeaponMasterEntity__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
