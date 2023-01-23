#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PickupBase_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PickupBase_INITIALIZING
#if !defined(IL2CPP_STRUCT_PickupBase_DEFINED)
#include <Modloader/app/structs/PickupBase__Fields.h>
#if defined(IL2CPP_STRUCT_PickupBase__Fields_DEFINED)
#define IL2CPP_STRUCT_PickupBase_DEFINED
struct PickupBase__Class;
struct PickupBase {
    struct PickupBase__Class* klass;
    MonitorData* monitor;
    struct PickupBase__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PickupBase_FWDDECL)
#define IL2CPP_STRUCT_PickupBase_FWDDECL
#include <Modloader/app/structs/PickupBase__Class.h>
#endif
#undef IL2CPP_STRUCT_PickupBase_INITIALIZING
#if !defined(IL2CPP_STRUCT_PickupBase_DEFINED) && !defined(IL2CPP_STRUCT_PickupBase_FWDDECL)
#include <Modloader/app/structs/PickupBase.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PickupBase.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
