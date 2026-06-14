#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IMoonTest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IMoonTest_INITIALIZING
#if !defined(IL2CPP_STRUCT_IMoonTest_DEFINED)
#define IL2CPP_STRUCT_IMoonTest_DEFINED
struct IMoonTest__Class;
struct IMoonTest {
    struct IMoonTest__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IMoonTest_FWDDECL)
#define IL2CPP_STRUCT_IMoonTest_FWDDECL
#include <Modloader/app/structs/IMoonTest__Class.h>
#endif
#undef IL2CPP_STRUCT_IMoonTest_INITIALIZING
#if !defined(IL2CPP_STRUCT_IMoonTest_DEFINED) && !defined(IL2CPP_STRUCT_IMoonTest_FWDDECL)
#include <Modloader/app/structs/IMoonTest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IMoonTest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
