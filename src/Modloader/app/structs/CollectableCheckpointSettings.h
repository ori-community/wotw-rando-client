#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CollectableCheckpointSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CollectableCheckpointSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_CollectableCheckpointSettings_DEFINED)
#include <Modloader/app/structs/CollectableCheckpointSettings__Fields.h>
#if defined(IL2CPP_STRUCT_CollectableCheckpointSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_CollectableCheckpointSettings_DEFINED
struct CollectableCheckpointSettings__Class;
struct CollectableCheckpointSettings {
    struct CollectableCheckpointSettings__Class* klass;
    MonitorData* monitor;
    struct CollectableCheckpointSettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CollectableCheckpointSettings_FWDDECL)
#define IL2CPP_STRUCT_CollectableCheckpointSettings_FWDDECL
#include <Modloader/app/structs/CollectableCheckpointSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_CollectableCheckpointSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_CollectableCheckpointSettings_DEFINED) && !defined(IL2CPP_STRUCT_CollectableCheckpointSettings_FWDDECL)
#include <Modloader/app/structs/CollectableCheckpointSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CollectableCheckpointSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
