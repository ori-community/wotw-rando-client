#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberPoolPerfTest__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberPoolPerfTest__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberPoolPerfTest__StaticFields_DEFINED)
#define IL2CPP_STRUCT_UberPoolPerfTest__StaticFields_DEFINED
struct Metric__Enum__Array;
struct UberPoolPerfTest;
struct UberPoolPerfTest_SettingOverrides;
struct UberPoolPerfTest__StaticFields {
    struct Metric__Enum__Array* s_metrics;
    struct UberPoolPerfTest* m_instance;
    struct UberPoolPerfTest_SettingOverrides* OverrideTestSettings;
};
#endif
#if !defined(IL2CPP_STRUCT_UberPoolPerfTest__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_UberPoolPerfTest__StaticFields_FWDDECL
#include <Modloader/app/structs/Metric__Enum__Array.h>
#include <Modloader/app/structs/UberPoolPerfTest.h>
#include <Modloader/app/structs/UberPoolPerfTest_SettingOverrides.h>
#endif
#undef IL2CPP_STRUCT_UberPoolPerfTest__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberPoolPerfTest__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_UberPoolPerfTest__StaticFields_FWDDECL)
#include <Modloader/app/structs/UberPoolPerfTest__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberPoolPerfTest__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
