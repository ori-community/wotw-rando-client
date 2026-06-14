#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DeathDataPoint_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DeathDataPoint_INITIALIZING
#if !defined(IL2CPP_STRUCT_DeathDataPoint_DEFINED)
#include <Modloader/app/structs/DeathDataPoint__Fields.h>
#if defined(IL2CPP_STRUCT_DeathDataPoint__Fields_DEFINED)
#define IL2CPP_STRUCT_DeathDataPoint_DEFINED
struct DeathDataPoint__Class;
struct DeathDataPoint {
    struct DeathDataPoint__Class* klass;
    MonitorData* monitor;
    struct DeathDataPoint__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DeathDataPoint_FWDDECL)
#define IL2CPP_STRUCT_DeathDataPoint_FWDDECL
#include <Modloader/app/structs/DeathDataPoint__Class.h>
#endif
#undef IL2CPP_STRUCT_DeathDataPoint_INITIALIZING
#if !defined(IL2CPP_STRUCT_DeathDataPoint_DEFINED) && !defined(IL2CPP_STRUCT_DeathDataPoint_FWDDECL)
#include <Modloader/app/structs/DeathDataPoint.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DeathDataPoint.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
