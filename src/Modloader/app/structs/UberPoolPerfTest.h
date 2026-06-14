#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberPoolPerfTest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberPoolPerfTest_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberPoolPerfTest_DEFINED)
#include <Modloader/app/structs/UberPoolPerfTest__Fields.h>
#if defined(IL2CPP_STRUCT_UberPoolPerfTest__Fields_DEFINED)
#define IL2CPP_STRUCT_UberPoolPerfTest_DEFINED
struct UberPoolPerfTest__Class;
struct UberPoolPerfTest {
    struct UberPoolPerfTest__Class* klass;
    MonitorData* monitor;
    struct UberPoolPerfTest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberPoolPerfTest_FWDDECL)
#define IL2CPP_STRUCT_UberPoolPerfTest_FWDDECL
#include <Modloader/app/structs/UberPoolPerfTest__Class.h>
#endif
#undef IL2CPP_STRUCT_UberPoolPerfTest_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberPoolPerfTest_DEFINED) && !defined(IL2CPP_STRUCT_UberPoolPerfTest_FWDDECL)
#include <Modloader/app/structs/UberPoolPerfTest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberPoolPerfTest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
