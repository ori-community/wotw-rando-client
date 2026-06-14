#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Tests_DoEnableDisableTest_d_14__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Tests_DoEnableDisableTest_d_14__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Tests_DoEnableDisableTest_d_14__Fields_DEFINED)
#define IL2CPP_STRUCT_Tests_DoEnableDisableTest_d_14__Fields_DEFINED
struct Object;
struct String;
struct List_1_UnityEngine_GameObject_;
struct PerfTestTimer;
struct __declspec(align(8)) Tests_DoEnableDisableTest_d_14__Fields {
    int32_t __1__state;
    struct Object* __2__current;
    struct String* baseTestName;
    struct List_1_UnityEngine_GameObject_* objectsShuffled;
    struct PerfTestTimer* _enableTestTimer_5__2;
    struct PerfTestTimer* _disableTestTimer_5__3;
    struct PerfTestTimer* _enableFrameTimeTestTimer_5__4;
    struct PerfTestTimer* _disableFrameTimeTestTimer_5__5;
    int32_t _objectIndex_5__6;
};
#endif
#if !defined(IL2CPP_STRUCT_Tests_DoEnableDisableTest_d_14__Fields_FWDDECL)
#define IL2CPP_STRUCT_Tests_DoEnableDisableTest_d_14__Fields_FWDDECL
#include <Modloader/app/structs/List_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/PerfTestTimer.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_Tests_DoEnableDisableTest_d_14__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Tests_DoEnableDisableTest_d_14__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Tests_DoEnableDisableTest_d_14__Fields_FWDDECL)
#include <Modloader/app/structs/Tests_DoEnableDisableTest_d_14__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Tests_DoEnableDisableTest_d_14__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
