#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RandomSeeder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RandomSeeder_INITIALIZING
#if !defined(IL2CPP_STRUCT_RandomSeeder_DEFINED)
#include <Modloader/app/structs/RandomSeeder__Fields.h>
#if defined(IL2CPP_STRUCT_RandomSeeder__Fields_DEFINED)
#define IL2CPP_STRUCT_RandomSeeder_DEFINED
struct RandomSeeder__Class;
struct RandomSeeder {
    struct RandomSeeder__Class* klass;
    MonitorData* monitor;
    struct RandomSeeder__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RandomSeeder_FWDDECL)
#define IL2CPP_STRUCT_RandomSeeder_FWDDECL
#include <Modloader/app/structs/RandomSeeder__Class.h>
#endif
#undef IL2CPP_STRUCT_RandomSeeder_INITIALIZING
#if !defined(IL2CPP_STRUCT_RandomSeeder_DEFINED) && !defined(IL2CPP_STRUCT_RandomSeeder_FWDDECL)
#include <Modloader/app/structs/RandomSeeder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RandomSeeder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
