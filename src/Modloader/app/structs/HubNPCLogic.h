#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HubNPCLogic_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HubNPCLogic_INITIALIZING
#if !defined(IL2CPP_STRUCT_HubNPCLogic_DEFINED)
#include <Modloader/app/structs/HubNPCLogic__Fields.h>
#if defined(IL2CPP_STRUCT_HubNPCLogic__Fields_DEFINED)
#define IL2CPP_STRUCT_HubNPCLogic_DEFINED
struct HubNPCLogic__Class;
struct HubNPCLogic {
    struct HubNPCLogic__Class* klass;
    MonitorData* monitor;
    struct HubNPCLogic__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HubNPCLogic_FWDDECL)
#define IL2CPP_STRUCT_HubNPCLogic_FWDDECL
#include <Modloader/app/structs/HubNPCLogic__Class.h>
#endif
#undef IL2CPP_STRUCT_HubNPCLogic_INITIALIZING
#if !defined(IL2CPP_STRUCT_HubNPCLogic_DEFINED) && !defined(IL2CPP_STRUCT_HubNPCLogic_FWDDECL)
#include <Modloader/app/structs/HubNPCLogic.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HubNPCLogic.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
