#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SceneMetaData_SeinInitialValuesWotW__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SceneMetaData_SeinInitialValuesWotW__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneMetaData_SeinInitialValuesWotW__Fields_DEFINED)
#define IL2CPP_STRUCT_SceneMetaData_SeinInitialValuesWotW__Fields_DEFINED
struct SceneMetaData_SeinWorldStateWisp;
struct SceneMetaData_SeinAbilitiesWotW;
struct SceneMetaData_SeinEquipmentWotW;
struct SceneMetaData_SeinEquipmentWotW__Array;
struct SceneMetaData_InitialShard__Array;
struct Quest__Array;
struct DesiredUberStateComposite;
struct __declspec(align(8)) SceneMetaData_SeinInitialValuesWotW__Fields {
    int32_t Hearts;
    int32_t Energy;
    int32_t MinRespawnHealth;
    struct SceneMetaData_SeinWorldStateWisp* World;
    struct SceneMetaData_SeinAbilitiesWotW* Abilities;
    struct SceneMetaData_SeinEquipmentWotW* DefaultXButtonEquipment;
    struct SceneMetaData_SeinEquipmentWotW* DefaultYButtonEquipment;
    struct SceneMetaData_SeinEquipmentWotW* DefaultBButtonEquipment;
    struct SceneMetaData_SeinEquipmentWotW__Array* OtherEquipment;
    struct SceneMetaData_InitialShard__Array* PassiveShards;
    struct Quest__Array* ActiveQuests;
    struct DesiredUberStateComposite* InitialUberStateValues;
    int32_t ShardSlots;
};
#endif
#if !defined(IL2CPP_STRUCT_SceneMetaData_SeinInitialValuesWotW__Fields_FWDDECL)
#define IL2CPP_STRUCT_SceneMetaData_SeinInitialValuesWotW__Fields_FWDDECL
#include <Modloader/app/structs/DesiredUberStateComposite.h>
#include <Modloader/app/structs/Quest__Array.h>
#include <Modloader/app/structs/SceneMetaData_InitialShard__Array.h>
#include <Modloader/app/structs/SceneMetaData_SeinAbilitiesWotW.h>
#include <Modloader/app/structs/SceneMetaData_SeinEquipmentWotW.h>
#include <Modloader/app/structs/SceneMetaData_SeinEquipmentWotW__Array.h>
#include <Modloader/app/structs/SceneMetaData_SeinWorldStateWisp.h>
#endif
#undef IL2CPP_STRUCT_SceneMetaData_SeinInitialValuesWotW__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneMetaData_SeinInitialValuesWotW__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SceneMetaData_SeinInitialValuesWotW__Fields_FWDDECL)
#include <Modloader/app/structs/SceneMetaData_SeinInitialValuesWotW__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SceneMetaData_SeinInitialValuesWotW__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
