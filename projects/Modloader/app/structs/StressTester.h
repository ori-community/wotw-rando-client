#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StressTester_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StressTester_INITIALIZING
#if !defined(IL2CPP_STRUCT_StressTester_DEFINED)
#include <Modloader/app/structs/StressTester__Fields.h>
#if defined(IL2CPP_STRUCT_StressTester__Fields_DEFINED)
#define IL2CPP_STRUCT_StressTester_DEFINED
struct StressTester__Class;
struct StressTester {
    struct StressTester__Class* klass;
    MonitorData* monitor;
    struct StressTester__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StressTester_FWDDECL)
#define IL2CPP_STRUCT_StressTester_FWDDECL
#include <Modloader/app/structs/StressTester__Class.h>
#endif
#undef IL2CPP_STRUCT_StressTester_INITIALIZING
#if !defined(IL2CPP_STRUCT_StressTester_DEFINED) && !defined(IL2CPP_STRUCT_StressTester_FWDDECL)
#include <Modloader/app/structs/StressTester.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StressTester.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
