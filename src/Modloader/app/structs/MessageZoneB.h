#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MessageZoneB_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MessageZoneB_INITIALIZING
#if !defined(IL2CPP_STRUCT_MessageZoneB_DEFINED)
#include <Modloader/app/structs/MessageZoneB__Fields.h>
#if defined(IL2CPP_STRUCT_MessageZoneB__Fields_DEFINED)
#define IL2CPP_STRUCT_MessageZoneB_DEFINED
struct MessageZoneB__Class;
struct MessageZoneB {
    struct MessageZoneB__Class* klass;
    MonitorData* monitor;
    struct MessageZoneB__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MessageZoneB_FWDDECL)
#define IL2CPP_STRUCT_MessageZoneB_FWDDECL
#include <Modloader/app/structs/MessageZoneB__Class.h>
#endif
#undef IL2CPP_STRUCT_MessageZoneB_INITIALIZING
#if !defined(IL2CPP_STRUCT_MessageZoneB_DEFINED) && !defined(IL2CPP_STRUCT_MessageZoneB_FWDDECL)
#include <Modloader/app/structs/MessageZoneB.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MessageZoneB.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
