#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DealDamageOverTime_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DealDamageOverTime_INITIALIZING
#if !defined(IL2CPP_STRUCT_DealDamageOverTime_DEFINED)
#include <Modloader/app/structs/DealDamageOverTime__Fields.h>
#if defined(IL2CPP_STRUCT_DealDamageOverTime__Fields_DEFINED)
#define IL2CPP_STRUCT_DealDamageOverTime_DEFINED
struct DealDamageOverTime__Class;
struct DealDamageOverTime {
    struct DealDamageOverTime__Class* klass;
    MonitorData* monitor;
    struct DealDamageOverTime__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DealDamageOverTime_FWDDECL)
#define IL2CPP_STRUCT_DealDamageOverTime_FWDDECL
#include <Modloader/app/structs/DealDamageOverTime__Class.h>
#endif
#undef IL2CPP_STRUCT_DealDamageOverTime_INITIALIZING
#if !defined(IL2CPP_STRUCT_DealDamageOverTime_DEFINED) && !defined(IL2CPP_STRUCT_DealDamageOverTime_FWDDECL)
#include <Modloader/app/structs/DealDamageOverTime.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DealDamageOverTime.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
