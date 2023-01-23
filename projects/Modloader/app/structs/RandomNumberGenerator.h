#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RandomNumberGenerator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RandomNumberGenerator_INITIALIZING
#if !defined(IL2CPP_STRUCT_RandomNumberGenerator_DEFINED)
#define IL2CPP_STRUCT_RandomNumberGenerator_DEFINED
struct RandomNumberGenerator__Class;
struct RandomNumberGenerator {
    struct RandomNumberGenerator__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_RandomNumberGenerator_FWDDECL)
#define IL2CPP_STRUCT_RandomNumberGenerator_FWDDECL
#include <Modloader/app/structs/RandomNumberGenerator__Class.h>
#endif
#undef IL2CPP_STRUCT_RandomNumberGenerator_INITIALIZING
#if !defined(IL2CPP_STRUCT_RandomNumberGenerator_DEFINED) && !defined(IL2CPP_STRUCT_RandomNumberGenerator_FWDDECL)
#include <Modloader/app/structs/RandomNumberGenerator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RandomNumberGenerator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
