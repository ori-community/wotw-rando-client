#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DebugProjectileTester_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DebugProjectileTester_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebugProjectileTester_DEFINED)
#include <Modloader/app/structs/DebugProjectileTester__Fields.h>
#if defined(IL2CPP_STRUCT_DebugProjectileTester__Fields_DEFINED)
#define IL2CPP_STRUCT_DebugProjectileTester_DEFINED
struct DebugProjectileTester__Class;
struct DebugProjectileTester {
    struct DebugProjectileTester__Class* klass;
    MonitorData* monitor;
    struct DebugProjectileTester__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DebugProjectileTester_FWDDECL)
#define IL2CPP_STRUCT_DebugProjectileTester_FWDDECL
#include <Modloader/app/structs/DebugProjectileTester__Class.h>
#endif
#undef IL2CPP_STRUCT_DebugProjectileTester_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebugProjectileTester_DEFINED) && !defined(IL2CPP_STRUCT_DebugProjectileTester_FWDDECL)
#include <Modloader/app/structs/DebugProjectileTester.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DebugProjectileTester.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
