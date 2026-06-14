#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberPoolPerfTest_SettingOverrides__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberPoolPerfTest_SettingOverrides__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberPoolPerfTest_SettingOverrides__Fields_DEFINED)
#include <Modloader/app/structs/Nullable_1_Boolean_.h>
#include <Modloader/app/structs/Nullable_1_Int32_.h>
#include <Modloader/app/structs/Nullable_1_Single_.h>
#include <Modloader/app/structs/Nullable_1_UberPoolPerfTest_TestMode_.h>
#if defined(IL2CPP_STRUCT_Nullable_1_UberPoolPerfTest_TestMode__DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_Int32__DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_Single__DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_Boolean__DEFINED)
#define IL2CPP_STRUCT_UberPoolPerfTest_SettingOverrides__Fields_DEFINED
struct List_1_System_String_;
struct __declspec(align(8)) UberPoolPerfTest_SettingOverrides__Fields {
    struct Nullable_1_UberPoolPerfTest_TestMode_ Mode;
    struct Nullable_1_Int32_ MaxSpawnCount;
    struct Nullable_1_Int32_ MinSampleCount;
    struct Nullable_1_Single_ DelayBetweenIteration;
    struct Nullable_1_Single_ DelayBetweenPrefabs;
    struct List_1_System_String_* PrefabNames;
    struct Nullable_1_Boolean_ IsIncludeList;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberPoolPerfTest_SettingOverrides__Fields_FWDDECL)
#define IL2CPP_STRUCT_UberPoolPerfTest_SettingOverrides__Fields_FWDDECL
#include <Modloader/app/structs/List_1_System_String_.h>
#endif
#undef IL2CPP_STRUCT_UberPoolPerfTest_SettingOverrides__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberPoolPerfTest_SettingOverrides__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UberPoolPerfTest_SettingOverrides__Fields_FWDDECL)
#include <Modloader/app/structs/UberPoolPerfTest_SettingOverrides__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberPoolPerfTest_SettingOverrides__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
