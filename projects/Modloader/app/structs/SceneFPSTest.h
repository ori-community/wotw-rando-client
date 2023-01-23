#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SceneFPSTest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SceneFPSTest_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneFPSTest_DEFINED)
#include <Modloader/app/structs/SceneFPSTest__Fields.h>
#if defined(IL2CPP_STRUCT_SceneFPSTest__Fields_DEFINED)
#define IL2CPP_STRUCT_SceneFPSTest_DEFINED
struct SceneFPSTest__Class;
struct SceneFPSTest {
    struct SceneFPSTest__Class* klass;
    MonitorData* monitor;
    struct SceneFPSTest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SceneFPSTest_FWDDECL)
#define IL2CPP_STRUCT_SceneFPSTest_FWDDECL
#include <Modloader/app/structs/SceneFPSTest__Class.h>
#endif
#undef IL2CPP_STRUCT_SceneFPSTest_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneFPSTest_DEFINED) && !defined(IL2CPP_STRUCT_SceneFPSTest_FWDDECL)
#include <Modloader/app/structs/SceneFPSTest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SceneFPSTest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
