#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EntityFreezeController__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EntityFreezeController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityFreezeController__Fields_DEFINED)
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Color_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_EntityFreezeController__Fields_DEFINED
struct LegacyEntity;
struct HashSet_1_Moon_ISuspendable_;
struct Renderer;
struct EntityFreezeController__Fields {
    struct MonoBehaviour__Fields _;
    struct LegacyEntity* Entity;
    bool UnfreezeOnDamage;
    struct HashSet_1_Moon_ISuspendable_* m_suspendables;
    float m_remainingTime;
    bool m_isFrozen;
    struct Renderer* m_renderer;
    struct Color m_freezeColor;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EntityFreezeController__Fields_FWDDECL)
#define IL2CPP_STRUCT_EntityFreezeController__Fields_FWDDECL
#include <Modloader/app/structs/HashSet_1_Moon_ISuspendable_.h>
#include <Modloader/app/structs/LegacyEntity.h>
#include <Modloader/app/structs/Renderer.h>
#endif
#undef IL2CPP_STRUCT_EntityFreezeController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityFreezeController__Fields_DEFINED) && !defined(IL2CPP_STRUCT_EntityFreezeController__Fields_FWDDECL)
#include <Modloader/app/structs/EntityFreezeController__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EntityFreezeController__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
