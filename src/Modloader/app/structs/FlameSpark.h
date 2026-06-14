#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FlameSpark_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FlameSpark_INITIALIZING
#if !defined(IL2CPP_STRUCT_FlameSpark_DEFINED)
#include <Modloader/app/structs/FlameSpark__Fields.h>
#if defined(IL2CPP_STRUCT_FlameSpark__Fields_DEFINED)
#define IL2CPP_STRUCT_FlameSpark_DEFINED
struct FlameSpark__Class;
struct FlameSpark {
    struct FlameSpark__Class* klass;
    MonitorData* monitor;
    struct FlameSpark__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FlameSpark_FWDDECL)
#define IL2CPP_STRUCT_FlameSpark_FWDDECL
#include <Modloader/app/structs/FlameSpark__Class.h>
#endif
#undef IL2CPP_STRUCT_FlameSpark_INITIALIZING
#if !defined(IL2CPP_STRUCT_FlameSpark_DEFINED) && !defined(IL2CPP_STRUCT_FlameSpark_FWDDECL)
#include <Modloader/app/structs/FlameSpark.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FlameSpark.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
