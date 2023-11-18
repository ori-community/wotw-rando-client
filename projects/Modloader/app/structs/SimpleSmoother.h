#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SimpleSmoother_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SimpleSmoother_INITIALIZING
#if !defined(IL2CPP_STRUCT_SimpleSmoother_DEFINED)
#include <Modloader/app/structs/SimpleSmoother__Fields.h>
#if defined(IL2CPP_STRUCT_SimpleSmoother__Fields_DEFINED)
#define IL2CPP_STRUCT_SimpleSmoother_DEFINED
struct SimpleSmoother__Class;
struct SimpleSmoother {
    struct SimpleSmoother__Class* klass;
    MonitorData* monitor;
    struct SimpleSmoother__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SimpleSmoother_FWDDECL)
#define IL2CPP_STRUCT_SimpleSmoother_FWDDECL
#include <Modloader/app/structs/SimpleSmoother__Class.h>
#endif
#undef IL2CPP_STRUCT_SimpleSmoother_INITIALIZING
#if !defined(IL2CPP_STRUCT_SimpleSmoother_DEFINED) && !defined(IL2CPP_STRUCT_SimpleSmoother_FWDDECL)
#include <Modloader/app/structs/SimpleSmoother.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SimpleSmoother.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
