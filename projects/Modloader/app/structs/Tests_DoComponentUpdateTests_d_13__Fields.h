#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Tests_DoComponentUpdateTests_d_13__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Tests_DoComponentUpdateTests_d_13__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Tests_DoComponentUpdateTests_d_13__Fields_DEFINED)
#define IL2CPP_STRUCT_Tests_DoComponentUpdateTests_d_13__Fields_DEFINED
struct Object;
struct PerfTestTimer;
struct __declspec(align(8)) Tests_DoComponentUpdateTests_d_13__Fields {
    int32_t __1__state;
    struct Object* __2__current;
    struct PerfTestTimer* _updateTest_5__2;
    struct PerfTestTimer* _fixedUpdateTest_5__3;
    struct PerfTestTimer* _lateUpdateTest_5__4;
};
#endif
#if !defined(IL2CPP_STRUCT_Tests_DoComponentUpdateTests_d_13__Fields_FWDDECL)
#define IL2CPP_STRUCT_Tests_DoComponentUpdateTests_d_13__Fields_FWDDECL
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/PerfTestTimer.h>
#endif
#undef IL2CPP_STRUCT_Tests_DoComponentUpdateTests_d_13__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Tests_DoComponentUpdateTests_d_13__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Tests_DoComponentUpdateTests_d_13__Fields_FWDDECL)
#include <Modloader/app/structs/Tests_DoComponentUpdateTests_d_13__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Tests_DoComponentUpdateTests_d_13__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
