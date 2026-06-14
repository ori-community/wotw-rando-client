#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IVRSettings_Sync_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IVRSettings_Sync_INITIALIZING
#if !defined(IL2CPP_STRUCT_IVRSettings_Sync_DEFINED)
#include <Modloader/app/structs/IVRSettings_Sync__Fields.h>
#if defined(IL2CPP_STRUCT_IVRSettings_Sync__Fields_DEFINED)
#define IL2CPP_STRUCT_IVRSettings_Sync_DEFINED
struct IVRSettings_Sync__Class;
struct IVRSettings_Sync {
    struct IVRSettings_Sync__Class* klass;
    MonitorData* monitor;
    struct IVRSettings_Sync__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IVRSettings_Sync_FWDDECL)
#define IL2CPP_STRUCT_IVRSettings_Sync_FWDDECL
#include <Modloader/app/structs/IVRSettings_Sync__Class.h>
#endif
#undef IL2CPP_STRUCT_IVRSettings_Sync_INITIALIZING
#if !defined(IL2CPP_STRUCT_IVRSettings_Sync_DEFINED) && !defined(IL2CPP_STRUCT_IVRSettings_Sync_FWDDECL)
#include <Modloader/app/structs/IVRSettings_Sync.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IVRSettings_Sync.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
