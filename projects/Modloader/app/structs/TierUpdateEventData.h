#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TierUpdateEventData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TierUpdateEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_TierUpdateEventData_DEFINED)
#include <Modloader/app/structs/TierUpdateEventData__Fields.h>
#if defined(IL2CPP_STRUCT_TierUpdateEventData__Fields_DEFINED)
#define IL2CPP_STRUCT_TierUpdateEventData_DEFINED
struct TierUpdateEventData__Class;
struct TierUpdateEventData {
    struct TierUpdateEventData__Class* klass;
    MonitorData* monitor;
    struct TierUpdateEventData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TierUpdateEventData_FWDDECL)
#define IL2CPP_STRUCT_TierUpdateEventData_FWDDECL
#include <Modloader/app/structs/TierUpdateEventData__Class.h>
#endif
#undef IL2CPP_STRUCT_TierUpdateEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_TierUpdateEventData_DEFINED) && !defined(IL2CPP_STRUCT_TierUpdateEventData_FWDDECL)
#include <Modloader/app/structs/TierUpdateEventData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TierUpdateEventData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
