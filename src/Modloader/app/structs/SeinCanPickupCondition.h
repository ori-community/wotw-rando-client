#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinCanPickupCondition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinCanPickupCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinCanPickupCondition_DEFINED)
#include <Modloader/app/structs/SeinCanPickupCondition__Fields.h>
#if defined(IL2CPP_STRUCT_SeinCanPickupCondition__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinCanPickupCondition_DEFINED
struct SeinCanPickupCondition__Class;
struct SeinCanPickupCondition {
    struct SeinCanPickupCondition__Class* klass;
    MonitorData* monitor;
    struct SeinCanPickupCondition__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinCanPickupCondition_FWDDECL)
#define IL2CPP_STRUCT_SeinCanPickupCondition_FWDDECL
#include <Modloader/app/structs/SeinCanPickupCondition__Class.h>
#endif
#undef IL2CPP_STRUCT_SeinCanPickupCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinCanPickupCondition_DEFINED) && !defined(IL2CPP_STRUCT_SeinCanPickupCondition_FWDDECL)
#include <Modloader/app/structs/SeinCanPickupCondition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinCanPickupCondition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
