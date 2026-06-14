#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SplashScreen_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SplashScreen_INITIALIZING
#if !defined(IL2CPP_STRUCT_SplashScreen_DEFINED)
#define IL2CPP_STRUCT_SplashScreen_DEFINED
struct SplashScreen__Class;
struct SplashScreen {
    struct SplashScreen__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_SplashScreen_FWDDECL)
#define IL2CPP_STRUCT_SplashScreen_FWDDECL
#include <Modloader/app/structs/SplashScreen__Class.h>
#endif
#undef IL2CPP_STRUCT_SplashScreen_INITIALIZING
#if !defined(IL2CPP_STRUCT_SplashScreen_DEFINED) && !defined(IL2CPP_STRUCT_SplashScreen_FWDDECL)
#include <Modloader/app/structs/SplashScreen.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SplashScreen.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
