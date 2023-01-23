#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CageCircleTest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CageCircleTest_INITIALIZING
#if !defined(IL2CPP_STRUCT_CageCircleTest_DEFINED)
#include <Modloader/app/structs/CageCircleTest__Fields.h>
#if defined(IL2CPP_STRUCT_CageCircleTest__Fields_DEFINED)
#define IL2CPP_STRUCT_CageCircleTest_DEFINED
struct CageCircleTest__Class;
struct CageCircleTest {
    struct CageCircleTest__Class* klass;
    MonitorData* monitor;
    struct CageCircleTest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CageCircleTest_FWDDECL)
#define IL2CPP_STRUCT_CageCircleTest_FWDDECL
#include <Modloader/app/structs/CageCircleTest__Class.h>
#endif
#undef IL2CPP_STRUCT_CageCircleTest_INITIALIZING
#if !defined(IL2CPP_STRUCT_CageCircleTest_DEFINED) && !defined(IL2CPP_STRUCT_CageCircleTest_FWDDECL)
#include <Modloader/app/structs/CageCircleTest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CageCircleTest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
