#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SuspensionManager_SuspendableInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SuspensionManager_SuspendableInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_SuspensionManager_SuspendableInfo_DEFINED)
#include <Modloader/app/structs/SuspensionManager_SuspendableInfo__Fields.h>
#if defined(IL2CPP_STRUCT_SuspensionManager_SuspendableInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_SuspensionManager_SuspendableInfo_DEFINED
struct SuspensionManager_SuspendableInfo__Class;
struct SuspensionManager_SuspendableInfo {
    struct SuspensionManager_SuspendableInfo__Class* klass;
    MonitorData* monitor;
    struct SuspensionManager_SuspendableInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SuspensionManager_SuspendableInfo_FWDDECL)
#define IL2CPP_STRUCT_SuspensionManager_SuspendableInfo_FWDDECL
#include <Modloader/app/structs/SuspensionManager_SuspendableInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_SuspensionManager_SuspendableInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_SuspensionManager_SuspendableInfo_DEFINED) && !defined(IL2CPP_STRUCT_SuspensionManager_SuspendableInfo_FWDDECL)
#include <Modloader/app/structs/SuspensionManager_SuspendableInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SuspensionManager_SuspendableInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
