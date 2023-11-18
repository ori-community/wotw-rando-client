#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StatisticsManager_StatStateEntry__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StatisticsManager_StatStateEntry__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StatisticsManager_StatStateEntry__Fields_DEFINED)
#include <Modloader/app/structs/StatisticsManager_StatType__Enum.h>
#if defined(IL2CPP_STRUCT_StatisticsManager_StatType__Enum_DEFINED)
#define IL2CPP_STRUCT_StatisticsManager_StatStateEntry__Fields_DEFINED
struct StatSetting;
struct __declspec(align(8)) StatisticsManager_StatStateEntry__Fields {
    StatisticsManager_StatType__Enum StatType;

    struct StatSetting* StatAsset;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StatisticsManager_StatStateEntry__Fields_FWDDECL)
#define IL2CPP_STRUCT_StatisticsManager_StatStateEntry__Fields_FWDDECL
#include <Modloader/app/structs/StatSetting.h>
#endif
#undef IL2CPP_STRUCT_StatisticsManager_StatStateEntry__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StatisticsManager_StatStateEntry__Fields_DEFINED) && !defined(IL2CPP_STRUCT_StatisticsManager_StatStateEntry__Fields_FWDDECL)
#include <Modloader/app/structs/StatisticsManager_StatStateEntry__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StatisticsManager_StatStateEntry__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
