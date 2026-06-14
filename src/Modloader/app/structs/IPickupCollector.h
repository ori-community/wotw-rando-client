#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IPickupCollector_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IPickupCollector_INITIALIZING
#if !defined(IL2CPP_STRUCT_IPickupCollector_DEFINED)
#define IL2CPP_STRUCT_IPickupCollector_DEFINED
struct IPickupCollector__Class;
struct IPickupCollector {
    struct IPickupCollector__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IPickupCollector_FWDDECL)
#define IL2CPP_STRUCT_IPickupCollector_FWDDECL
#include <Modloader/app/structs/IPickupCollector__Class.h>
#endif
#undef IL2CPP_STRUCT_IPickupCollector_INITIALIZING
#if !defined(IL2CPP_STRUCT_IPickupCollector_DEFINED) && !defined(IL2CPP_STRUCT_IPickupCollector_FWDDECL)
#include <Modloader/app/structs/IPickupCollector.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IPickupCollector.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
