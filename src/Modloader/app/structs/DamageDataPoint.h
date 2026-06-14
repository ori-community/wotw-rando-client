#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DamageDataPoint_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DamageDataPoint_INITIALIZING
#if !defined(IL2CPP_STRUCT_DamageDataPoint_DEFINED)
#include <Modloader/app/structs/DamageDataPoint__Fields.h>
#if defined(IL2CPP_STRUCT_DamageDataPoint__Fields_DEFINED)
#define IL2CPP_STRUCT_DamageDataPoint_DEFINED
struct DamageDataPoint__Class;
struct DamageDataPoint {
    struct DamageDataPoint__Class* klass;
    MonitorData* monitor;
    struct DamageDataPoint__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DamageDataPoint_FWDDECL)
#define IL2CPP_STRUCT_DamageDataPoint_FWDDECL
#include <Modloader/app/structs/DamageDataPoint__Class.h>
#endif
#undef IL2CPP_STRUCT_DamageDataPoint_INITIALIZING
#if !defined(IL2CPP_STRUCT_DamageDataPoint_DEFINED) && !defined(IL2CPP_STRUCT_DamageDataPoint_FWDDECL)
#include <Modloader/app/structs/DamageDataPoint.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DamageDataPoint.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
