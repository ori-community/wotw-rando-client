#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Tests_DoLevelLoadUnloadTestTests_d_11__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Tests_DoLevelLoadUnloadTestTests_d_11__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Tests_DoLevelLoadUnloadTestTests_d_11__Fields_DEFINED)
#define IL2CPP_STRUCT_Tests_DoLevelLoadUnloadTestTests_d_11__Fields_DEFINED
struct Object;
struct String;
struct PerfTestTimer;
struct AsyncOperation_1;
struct __declspec(align(8)) Tests_DoLevelLoadUnloadTestTests_d_11__Fields {
    int32_t __1__state;
    struct Object* __2__current;
    struct String* sceneName;
    struct PerfTestTimer* _loadTestTimer_5__2;
    struct PerfTestTimer* _unloadTestTimer_5__3;
    struct AsyncOperation_1* _finalLoadOp_5__4;
};
#endif
#if !defined(IL2CPP_STRUCT_Tests_DoLevelLoadUnloadTestTests_d_11__Fields_FWDDECL)
#define IL2CPP_STRUCT_Tests_DoLevelLoadUnloadTestTests_d_11__Fields_FWDDECL
#include <Modloader/app/structs/AsyncOperation_1.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/PerfTestTimer.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_Tests_DoLevelLoadUnloadTestTests_d_11__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Tests_DoLevelLoadUnloadTestTests_d_11__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Tests_DoLevelLoadUnloadTestTests_d_11__Fields_FWDDECL)
#include <Modloader/app/structs/Tests_DoLevelLoadUnloadTestTests_d_11__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Tests_DoLevelLoadUnloadTestTests_d_11__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
