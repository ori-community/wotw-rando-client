#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MainThreadSleepTester_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MainThreadSleepTester_INITIALIZING
#if !defined(IL2CPP_STRUCT_MainThreadSleepTester_DEFINED)
#include <Modloader/app/structs/MainThreadSleepTester__Fields.h>
#if defined(IL2CPP_STRUCT_MainThreadSleepTester__Fields_DEFINED)
#define IL2CPP_STRUCT_MainThreadSleepTester_DEFINED
struct MainThreadSleepTester__Class;
struct MainThreadSleepTester {
    struct MainThreadSleepTester__Class* klass;
    MonitorData* monitor;
    struct MainThreadSleepTester__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MainThreadSleepTester_FWDDECL)
#define IL2CPP_STRUCT_MainThreadSleepTester_FWDDECL
#include <Modloader/app/structs/MainThreadSleepTester__Class.h>
#endif
#undef IL2CPP_STRUCT_MainThreadSleepTester_INITIALIZING
#if !defined(IL2CPP_STRUCT_MainThreadSleepTester_DEFINED) && !defined(IL2CPP_STRUCT_MainThreadSleepTester_FWDDECL)
#include <Modloader/app/structs/MainThreadSleepTester.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MainThreadSleepTester.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
