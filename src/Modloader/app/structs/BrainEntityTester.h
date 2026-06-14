#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BrainEntityTester_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BrainEntityTester_INITIALIZING
#if !defined(IL2CPP_STRUCT_BrainEntityTester_DEFINED)
#include <Modloader/app/structs/BrainEntityTester__Fields.h>
#if defined(IL2CPP_STRUCT_BrainEntityTester__Fields_DEFINED)
#define IL2CPP_STRUCT_BrainEntityTester_DEFINED
struct BrainEntityTester__Class;
struct BrainEntityTester {
    struct BrainEntityTester__Class* klass;
    MonitorData* monitor;
    struct BrainEntityTester__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BrainEntityTester_FWDDECL)
#define IL2CPP_STRUCT_BrainEntityTester_FWDDECL
#include <Modloader/app/structs/BrainEntityTester__Class.h>
#endif
#undef IL2CPP_STRUCT_BrainEntityTester_INITIALIZING
#if !defined(IL2CPP_STRUCT_BrainEntityTester_DEFINED) && !defined(IL2CPP_STRUCT_BrainEntityTester_FWDDECL)
#include <Modloader/app/structs/BrainEntityTester.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BrainEntityTester.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
