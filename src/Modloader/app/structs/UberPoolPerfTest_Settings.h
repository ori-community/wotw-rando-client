#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberPoolPerfTest_Settings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberPoolPerfTest_Settings_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberPoolPerfTest_Settings_DEFINED)
#include <Modloader/app/structs/UberPoolPerfTest_Settings__Fields.h>
#if defined(IL2CPP_STRUCT_UberPoolPerfTest_Settings__Fields_DEFINED)
#define IL2CPP_STRUCT_UberPoolPerfTest_Settings_DEFINED
struct UberPoolPerfTest_Settings__Class;
struct UberPoolPerfTest_Settings {
    struct UberPoolPerfTest_Settings__Class* klass;
    MonitorData* monitor;
    struct UberPoolPerfTest_Settings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberPoolPerfTest_Settings_FWDDECL)
#define IL2CPP_STRUCT_UberPoolPerfTest_Settings_FWDDECL
#include <Modloader/app/structs/UberPoolPerfTest_Settings__Class.h>
#endif
#undef IL2CPP_STRUCT_UberPoolPerfTest_Settings_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberPoolPerfTest_Settings_DEFINED) && !defined(IL2CPP_STRUCT_UberPoolPerfTest_Settings_FWDDECL)
#include <Modloader/app/structs/UberPoolPerfTest_Settings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberPoolPerfTest_Settings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
