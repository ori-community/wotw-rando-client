#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberBuildMethod_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberBuildMethod_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberBuildMethod_DEFINED)
#define IL2CPP_STRUCT_UberBuildMethod_DEFINED
struct UberBuildMethod__Class;
struct UberBuildMethod {
    struct UberBuildMethod__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_UberBuildMethod_FWDDECL)
#define IL2CPP_STRUCT_UberBuildMethod_FWDDECL
#include <Modloader/app/structs/UberBuildMethod__Class.h>
#endif
#undef IL2CPP_STRUCT_UberBuildMethod_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberBuildMethod_DEFINED) && !defined(IL2CPP_STRUCT_UberBuildMethod_FWDDECL)
#include <Modloader/app/structs/UberBuildMethod.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberBuildMethod.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
