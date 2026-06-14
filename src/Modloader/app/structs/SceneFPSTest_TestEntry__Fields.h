#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SceneFPSTest_TestEntry__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SceneFPSTest_TestEntry__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneFPSTest_TestEntry__Fields_DEFINED)
#include <Modloader/app/structs/SceneFPSTest_State__Enum.h>
#if defined(IL2CPP_STRUCT_SceneFPSTest_State__Enum_DEFINED)
#define IL2CPP_STRUCT_SceneFPSTest_TestEntry__Fields_DEFINED
struct IMoonTest;
struct __declspec(align(8)) SceneFPSTest_TestEntry__Fields {
    struct IMoonTest* Test;
    SceneFPSTest_State__Enum BeginState;

    SceneFPSTest_State__Enum EndState;

    bool Active;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SceneFPSTest_TestEntry__Fields_FWDDECL)
#define IL2CPP_STRUCT_SceneFPSTest_TestEntry__Fields_FWDDECL
#include <Modloader/app/structs/IMoonTest.h>
#endif
#undef IL2CPP_STRUCT_SceneFPSTest_TestEntry__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneFPSTest_TestEntry__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SceneFPSTest_TestEntry__Fields_FWDDECL)
#include <Modloader/app/structs/SceneFPSTest_TestEntry__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SceneFPSTest_TestEntry__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
