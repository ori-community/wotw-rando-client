#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IStressTest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IStressTest_INITIALIZING
#if !defined(IL2CPP_STRUCT_IStressTest_DEFINED)
#define IL2CPP_STRUCT_IStressTest_DEFINED
struct IStressTest__Class;
struct IStressTest {
    struct IStressTest__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IStressTest_FWDDECL)
#define IL2CPP_STRUCT_IStressTest_FWDDECL
#include <Modloader/app/structs/IStressTest__Class.h>
#endif
#undef IL2CPP_STRUCT_IStressTest_INITIALIZING
#if !defined(IL2CPP_STRUCT_IStressTest_DEFINED) && !defined(IL2CPP_STRUCT_IStressTest_FWDDECL)
#include <Modloader/app/structs/IStressTest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IStressTest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
