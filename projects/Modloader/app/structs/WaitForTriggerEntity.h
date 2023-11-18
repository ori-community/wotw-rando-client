#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WaitForTriggerEntity_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WaitForTriggerEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaitForTriggerEntity_DEFINED)
#include <Modloader/app/structs/WaitForTriggerEntity__Fields.h>
#if defined(IL2CPP_STRUCT_WaitForTriggerEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_WaitForTriggerEntity_DEFINED
struct WaitForTriggerEntity__Class;
struct WaitForTriggerEntity {
    struct WaitForTriggerEntity__Class* klass;
    MonitorData* monitor;
    struct WaitForTriggerEntity__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WaitForTriggerEntity_FWDDECL)
#define IL2CPP_STRUCT_WaitForTriggerEntity_FWDDECL
#include <Modloader/app/structs/WaitForTriggerEntity__Class.h>
#endif
#undef IL2CPP_STRUCT_WaitForTriggerEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaitForTriggerEntity_DEFINED) && !defined(IL2CPP_STRUCT_WaitForTriggerEntity_FWDDECL)
#include <Modloader/app/structs/WaitForTriggerEntity.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WaitForTriggerEntity.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
