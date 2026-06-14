#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SuspensionManager_SuspensionTicket_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SuspensionManager_SuspensionTicket_INITIALIZING
#if !defined(IL2CPP_STRUCT_SuspensionManager_SuspensionTicket_DEFINED)
#include <Modloader/app/structs/SuspensionManager_SuspensionTicket__Fields.h>
#if defined(IL2CPP_STRUCT_SuspensionManager_SuspensionTicket__Fields_DEFINED)
#define IL2CPP_STRUCT_SuspensionManager_SuspensionTicket_DEFINED
struct SuspensionManager_SuspensionTicket__Class;
struct SuspensionManager_SuspensionTicket {
    struct SuspensionManager_SuspensionTicket__Class* klass;
    MonitorData* monitor;
    struct SuspensionManager_SuspensionTicket__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SuspensionManager_SuspensionTicket_FWDDECL)
#define IL2CPP_STRUCT_SuspensionManager_SuspensionTicket_FWDDECL
#include <Modloader/app/structs/SuspensionManager_SuspensionTicket__Class.h>
#endif
#undef IL2CPP_STRUCT_SuspensionManager_SuspensionTicket_INITIALIZING
#if !defined(IL2CPP_STRUCT_SuspensionManager_SuspensionTicket_DEFINED) && !defined(IL2CPP_STRUCT_SuspensionManager_SuspensionTicket_FWDDECL)
#include <Modloader/app/structs/SuspensionManager_SuspensionTicket.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SuspensionManager_SuspensionTicket.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
