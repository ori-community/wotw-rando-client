#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MainThreadSleepTester__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MainThreadSleepTester__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MainThreadSleepTester__StaticFields_DEFINED)
#define IL2CPP_STRUCT_MainThreadSleepTester__StaticFields_DEFINED
struct MainThreadSleepTester;
struct MainThreadSleepTester__StaticFields {
    struct MainThreadSleepTester* Instance;
    int32_t SpleepMiliseconds;
    bool s_spleepEnabled;
};
#endif
#if !defined(IL2CPP_STRUCT_MainThreadSleepTester__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_MainThreadSleepTester__StaticFields_FWDDECL
#include <Modloader/app/structs/MainThreadSleepTester.h>
#endif
#undef IL2CPP_STRUCT_MainThreadSleepTester__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MainThreadSleepTester__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_MainThreadSleepTester__StaticFields_FWDDECL)
#include <Modloader/app/structs/MainThreadSleepTester__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MainThreadSleepTester__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
