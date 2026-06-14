#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DebugTeleportSettings__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DebugTeleportSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebugTeleportSettings__Fields_DEFINED)
#include <Modloader/app/structs/ScriptableObject__Fields.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_ScriptableObject__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_DebugTeleportSettings__Fields_DEFINED
struct String;
struct DesiredUberStateComposite;
struct SceneMetaData;
struct List_1_DebugTeleportSettings_;
struct SceneMetaData_SeinAbilitiesWotW;
struct SceneMetaData_SeinEquipmentWotW__Array;
struct SceneMetaData_SeinEquipmentWotW;
struct DebugTeleportSettings__Fields {
    struct ScriptableObject__Fields _;
    struct String* Description;
    struct DesiredUberStateComposite* State;
    struct SceneMetaData* Scene;
    struct List_1_DebugTeleportSettings_* AdditionalState;
    struct SceneMetaData_SeinAbilitiesWotW* Abilities;
    struct SceneMetaData_SeinEquipmentWotW__Array* Equipment;
    struct SceneMetaData_SeinEquipmentWotW* DefaultXButtonEquipment;
    struct SceneMetaData_SeinEquipmentWotW* DefaultYButtonEquipment;
    struct SceneMetaData_SeinEquipmentWotW* DefaultBButtonEquipment;
    bool ShouldOverridePosition;
    struct Vector2 OverridePosition;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DebugTeleportSettings__Fields_FWDDECL)
#define IL2CPP_STRUCT_DebugTeleportSettings__Fields_FWDDECL
#include <Modloader/app/structs/DesiredUberStateComposite.h>
#include <Modloader/app/structs/List_1_DebugTeleportSettings_.h>
#include <Modloader/app/structs/SceneMetaData.h>
#include <Modloader/app/structs/SceneMetaData_SeinAbilitiesWotW.h>
#include <Modloader/app/structs/SceneMetaData_SeinEquipmentWotW.h>
#include <Modloader/app/structs/SceneMetaData_SeinEquipmentWotW__Array.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_DebugTeleportSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebugTeleportSettings__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DebugTeleportSettings__Fields_FWDDECL)
#include <Modloader/app/structs/DebugTeleportSettings__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DebugTeleportSettings__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
