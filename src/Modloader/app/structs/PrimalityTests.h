#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PrimalityTests_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PrimalityTests_INITIALIZING
#if !defined(IL2CPP_STRUCT_PrimalityTests_DEFINED)
#define IL2CPP_STRUCT_PrimalityTests_DEFINED
struct PrimalityTests__Class;
struct PrimalityTests {
    struct PrimalityTests__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_PrimalityTests_FWDDECL)
#define IL2CPP_STRUCT_PrimalityTests_FWDDECL
#include <Modloader/app/structs/PrimalityTests__Class.h>
#endif
#undef IL2CPP_STRUCT_PrimalityTests_INITIALIZING
#if !defined(IL2CPP_STRUCT_PrimalityTests_DEFINED) && !defined(IL2CPP_STRUCT_PrimalityTests_FWDDECL)
#include <Modloader/app/structs/PrimalityTests.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PrimalityTests.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
