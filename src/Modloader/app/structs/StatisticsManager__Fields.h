#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StatisticsManager__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StatisticsManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StatisticsManager__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_StatisticsManager__Fields_DEFINED
struct List_1_StatisticsManager_StatStateEntry_;
struct Dictionary_2_StatisticsManager_StatType_StatisticsManager_RuntimeStatEntry_;
struct List_1_StatSetting_;
struct PlayerUberStateDescriptor;
struct UberStateGroup;
struct StatisticsManager__Fields {
    struct MonoBehaviour__Fields _;
    struct List_1_StatisticsManager_StatStateEntry_* m_statEntries;
    struct Dictionary_2_StatisticsManager_StatType_StatisticsManager_RuntimeStatEntry_* m_quickAccesDictionary;
    struct List_1_StatSetting_* m_statSettings;
    struct Dictionary_2_StatisticsManager_StatType_StatisticsManager_RuntimeStatEntry_* m_dirtyStates;
    struct Vector3 m_seinPosition;
    float m_distanceTraveled;
    struct PlayerUberStateDescriptor* PlayerUberStateDescriptor;
    struct UberStateGroup* StatisticsStateGroup;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StatisticsManager__Fields_FWDDECL)
#define IL2CPP_STRUCT_StatisticsManager__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_StatisticsManager_StatType_StatisticsManager_RuntimeStatEntry_.h>
#include <Modloader/app/structs/List_1_StatSetting_.h>
#include <Modloader/app/structs/List_1_StatisticsManager_StatStateEntry_.h>
#include <Modloader/app/structs/PlayerUberStateDescriptor.h>
#include <Modloader/app/structs/UberStateGroup.h>
#endif
#undef IL2CPP_STRUCT_StatisticsManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StatisticsManager__Fields_DEFINED) && !defined(IL2CPP_STRUCT_StatisticsManager__Fields_FWDDECL)
#include <Modloader/app/structs/StatisticsManager__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StatisticsManager__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
