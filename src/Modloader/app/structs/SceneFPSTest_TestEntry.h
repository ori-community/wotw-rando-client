#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SceneFPSTest_TestEntry_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SceneFPSTest_TestEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneFPSTest_TestEntry_DEFINED)
#include <Modloader/app/structs/SceneFPSTest_TestEntry__Fields.h>
#if defined(IL2CPP_STRUCT_SceneFPSTest_TestEntry__Fields_DEFINED)
#define IL2CPP_STRUCT_SceneFPSTest_TestEntry_DEFINED
struct SceneFPSTest_TestEntry__Class;
struct SceneFPSTest_TestEntry {
    struct SceneFPSTest_TestEntry__Class* klass;
    MonitorData* monitor;
    struct SceneFPSTest_TestEntry__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SceneFPSTest_TestEntry_FWDDECL)
#define IL2CPP_STRUCT_SceneFPSTest_TestEntry_FWDDECL
#include <Modloader/app/structs/SceneFPSTest_TestEntry__Class.h>
#endif
#undef IL2CPP_STRUCT_SceneFPSTest_TestEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneFPSTest_TestEntry_DEFINED) && !defined(IL2CPP_STRUCT_SceneFPSTest_TestEntry_FWDDECL)
#include <Modloader/app/structs/SceneFPSTest_TestEntry.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SceneFPSTest_TestEntry.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
