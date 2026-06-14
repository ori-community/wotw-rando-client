#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinPickupProcessor_CollectableInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinPickupProcessor_CollectableInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinPickupProcessor_CollectableInfo_DEFINED)
#include <Modloader/app/structs/SeinPickupProcessor_CollectableInfo__Fields.h>
#if defined(IL2CPP_STRUCT_SeinPickupProcessor_CollectableInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinPickupProcessor_CollectableInfo_DEFINED
struct SeinPickupProcessor_CollectableInfo__Class;
struct SeinPickupProcessor_CollectableInfo {
    struct SeinPickupProcessor_CollectableInfo__Class* klass;
    MonitorData* monitor;
    struct SeinPickupProcessor_CollectableInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinPickupProcessor_CollectableInfo_FWDDECL)
#define IL2CPP_STRUCT_SeinPickupProcessor_CollectableInfo_FWDDECL
#include <Modloader/app/structs/SeinPickupProcessor_CollectableInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_SeinPickupProcessor_CollectableInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinPickupProcessor_CollectableInfo_DEFINED) && !defined(IL2CPP_STRUCT_SeinPickupProcessor_CollectableInfo_FWDDECL)
#include <Modloader/app/structs/SeinPickupProcessor_CollectableInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinPickupProcessor_CollectableInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
