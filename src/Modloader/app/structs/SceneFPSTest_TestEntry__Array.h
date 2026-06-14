#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SceneFPSTest_TestEntry__Array_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SceneFPSTest_TestEntry__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneFPSTest_TestEntry__Array_DEFINED)
#define IL2CPP_STRUCT_SceneFPSTest_TestEntry__Array_DEFINED
struct SceneFPSTest_TestEntry__Array__Class;
struct SceneFPSTest_TestEntry;
struct SceneFPSTest_TestEntry__Array {
    struct SceneFPSTest_TestEntry__Array__Class* klass;
    MonitorData* monitor;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    struct SceneFPSTest_TestEntry* vector[32];
};
#endif
#if !defined(IL2CPP_STRUCT_SceneFPSTest_TestEntry__Array_FWDDECL)
#define IL2CPP_STRUCT_SceneFPSTest_TestEntry__Array_FWDDECL
#include <Modloader/app/structs/SceneFPSTest_TestEntry.h>
#include <Modloader/app/structs/SceneFPSTest_TestEntry__Array__Class.h>
#endif
#undef IL2CPP_STRUCT_SceneFPSTest_TestEntry__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneFPSTest_TestEntry__Array_DEFINED) && !defined(IL2CPP_STRUCT_SceneFPSTest_TestEntry__Array_FWDDECL)
#include <Modloader/app/structs/SceneFPSTest_TestEntry__Array.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SceneFPSTest_TestEntry__Array.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
