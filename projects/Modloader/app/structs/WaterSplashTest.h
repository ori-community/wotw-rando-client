#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WaterSplashTest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WaterSplashTest_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaterSplashTest_DEFINED)
#include <Modloader/app/structs/WaterSplashTest__Fields.h>
#if defined(IL2CPP_STRUCT_WaterSplashTest__Fields_DEFINED)
#define IL2CPP_STRUCT_WaterSplashTest_DEFINED
struct WaterSplashTest__Class;
struct WaterSplashTest {
    struct WaterSplashTest__Class* klass;
    MonitorData* monitor;
    struct WaterSplashTest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WaterSplashTest_FWDDECL)
#define IL2CPP_STRUCT_WaterSplashTest_FWDDECL
#include <Modloader/app/structs/WaterSplashTest__Class.h>
#endif
#undef IL2CPP_STRUCT_WaterSplashTest_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaterSplashTest_DEFINED) && !defined(IL2CPP_STRUCT_WaterSplashTest_FWDDECL)
#include <Modloader/app/structs/WaterSplashTest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WaterSplashTest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
