#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RandomObjectGenerator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RandomObjectGenerator_INITIALIZING
#if !defined(IL2CPP_STRUCT_RandomObjectGenerator_DEFINED)
#include <Modloader/app/structs/RandomObjectGenerator__Fields.h>
#if defined(IL2CPP_STRUCT_RandomObjectGenerator__Fields_DEFINED)
#define IL2CPP_STRUCT_RandomObjectGenerator_DEFINED
struct RandomObjectGenerator__Class;
struct RandomObjectGenerator {
    struct RandomObjectGenerator__Class* klass;
    MonitorData* monitor;
    struct RandomObjectGenerator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RandomObjectGenerator_FWDDECL)
#define IL2CPP_STRUCT_RandomObjectGenerator_FWDDECL
#include <Modloader/app/structs/RandomObjectGenerator__Class.h>
#endif
#undef IL2CPP_STRUCT_RandomObjectGenerator_INITIALIZING
#if !defined(IL2CPP_STRUCT_RandomObjectGenerator_DEFINED) && !defined(IL2CPP_STRUCT_RandomObjectGenerator_FWDDECL)
#include <Modloader/app/structs/RandomObjectGenerator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RandomObjectGenerator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
