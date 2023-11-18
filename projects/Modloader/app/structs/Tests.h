#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Tests_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Tests_INITIALIZING
#if !defined(IL2CPP_STRUCT_Tests_DEFINED)
#define IL2CPP_STRUCT_Tests_DEFINED
struct Tests__Class;
struct Tests {
    struct Tests__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_Tests_FWDDECL)
#define IL2CPP_STRUCT_Tests_FWDDECL
#include <Modloader/app/structs/Tests__Class.h>
#endif
#undef IL2CPP_STRUCT_Tests_INITIALIZING
#if !defined(IL2CPP_STRUCT_Tests_DEFINED) && !defined(IL2CPP_STRUCT_Tests_FWDDECL)
#include <Modloader/app/structs/Tests.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Tests.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
