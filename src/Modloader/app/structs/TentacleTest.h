#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TentacleTest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TentacleTest_INITIALIZING
#if !defined(IL2CPP_STRUCT_TentacleTest_DEFINED)
#include <Modloader/app/structs/TentacleTest__Fields.h>
#if defined(IL2CPP_STRUCT_TentacleTest__Fields_DEFINED)
#define IL2CPP_STRUCT_TentacleTest_DEFINED
struct TentacleTest__Class;
struct TentacleTest {
    struct TentacleTest__Class* klass;
    MonitorData* monitor;
    struct TentacleTest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TentacleTest_FWDDECL)
#define IL2CPP_STRUCT_TentacleTest_FWDDECL
#include <Modloader/app/structs/TentacleTest__Class.h>
#endif
#undef IL2CPP_STRUCT_TentacleTest_INITIALIZING
#if !defined(IL2CPP_STRUCT_TentacleTest_DEFINED) && !defined(IL2CPP_STRUCT_TentacleTest_FWDDECL)
#include <Modloader/app/structs/TentacleTest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TentacleTest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
