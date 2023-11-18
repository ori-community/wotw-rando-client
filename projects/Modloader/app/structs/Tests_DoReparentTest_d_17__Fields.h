#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Tests_DoReparentTest_d_17__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Tests_DoReparentTest_d_17__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Tests_DoReparentTest_d_17__Fields_DEFINED)
#define IL2CPP_STRUCT_Tests_DoReparentTest_d_17__Fields_DEFINED
struct Object;
struct String;
struct List_1_UnityEngine_Transform_;
struct PerfTestTimer;
struct Transform;
struct __declspec(align(8)) Tests_DoReparentTest_d_17__Fields {
    int32_t __1__state;
    struct Object* __2__current;
    struct String* baseTestName;
    struct List_1_UnityEngine_Transform_* transformsToReparent;
    struct List_1_UnityEngine_Transform_* newParents;
    struct PerfTestTimer* _testTimer_5__2;
    struct PerfTestTimer* _frameTimeTestTimer_5__3;
    int32_t _reparentTransformIndex_5__4;
    int32_t _newParentIndex_5__5;
    struct Transform* _oldParent_5__6;
};
#endif
#if !defined(IL2CPP_STRUCT_Tests_DoReparentTest_d_17__Fields_FWDDECL)
#define IL2CPP_STRUCT_Tests_DoReparentTest_d_17__Fields_FWDDECL
#include <Modloader/app/structs/List_1_UnityEngine_Transform_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/PerfTestTimer.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_Tests_DoReparentTest_d_17__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Tests_DoReparentTest_d_17__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Tests_DoReparentTest_d_17__Fields_FWDDECL)
#include <Modloader/app/structs/Tests_DoReparentTest_d_17__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Tests_DoReparentTest_d_17__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
