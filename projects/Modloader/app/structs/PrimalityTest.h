#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PrimalityTest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PrimalityTest_INITIALIZING
#if !defined(IL2CPP_STRUCT_PrimalityTest_DEFINED)
#include <Modloader/app/structs/PrimalityTest__Fields.h>
#if defined(IL2CPP_STRUCT_PrimalityTest__Fields_DEFINED)
#define IL2CPP_STRUCT_PrimalityTest_DEFINED
struct PrimalityTest__Class;
struct PrimalityTest {
    struct PrimalityTest__Class* klass;
    MonitorData* monitor;
    struct PrimalityTest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PrimalityTest_FWDDECL)
#define IL2CPP_STRUCT_PrimalityTest_FWDDECL
#include <Modloader/app/structs/PrimalityTest__Class.h>
#endif
#undef IL2CPP_STRUCT_PrimalityTest_INITIALIZING
#if !defined(IL2CPP_STRUCT_PrimalityTest_DEFINED) && !defined(IL2CPP_STRUCT_PrimalityTest_FWDDECL)
#include <Modloader/app/structs/PrimalityTest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PrimalityTest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
