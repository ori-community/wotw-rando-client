#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LegacyEntity__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LegacyEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyEntity__Fields_DEFINED)
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/SaveSerialize__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_SaveSerialize__Fields_DEFINED) && defined(IL2CPP_STRUCT_Rect_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_LegacyEntity__Fields_DEFINED
struct EntityController;
struct LegacyEntityDamageReciever;
struct LegacyEntityDamageDealer;
struct EntityTargetting;
struct MoonGuid;
struct List_1_Moon_ISuspendable_;
struct LegacyEntity__Fields {
    struct SaveSerialize__Fields _;
    struct EntityController* Controller;
    struct LegacyEntityDamageReciever* DamageReciever;
    struct LegacyEntityDamageDealer* DamageDealer;
    struct EntityTargetting* Targetting;
    struct MoonGuid* SceneRootGUID;
    struct Rect BoundingBox;
    bool FrustrumOptimized;
    bool m_registeredToSceneRootDisabled;
    bool ShouldBeSerialized;
    struct List_1_Moon_ISuspendable_* m_suspendables;
    struct Vector3 _StartPosition_k__BackingField;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;

    bool m_insideFrustum;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LegacyEntity__Fields_FWDDECL)
#define IL2CPP_STRUCT_LegacyEntity__Fields_FWDDECL
#include <Modloader/app/structs/EntityController.h>
#include <Modloader/app/structs/EntityTargetting.h>
#include <Modloader/app/structs/LegacyEntityDamageDealer.h>
#include <Modloader/app/structs/LegacyEntityDamageReciever.h>
#include <Modloader/app/structs/List_1_Moon_ISuspendable_.h>
#include <Modloader/app/structs/MoonGuid.h>
#endif
#undef IL2CPP_STRUCT_LegacyEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyEntity__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LegacyEntity__Fields_FWDDECL)
#include <Modloader/app/structs/LegacyEntity__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LegacyEntity__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
