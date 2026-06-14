#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CameraCrossFadeManager_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CameraCrossFadeManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraCrossFadeManager_DEFINED)
#include <Modloader/app/structs/CameraCrossFadeManager__Fields.h>
#if defined(IL2CPP_STRUCT_CameraCrossFadeManager__Fields_DEFINED)
#define IL2CPP_STRUCT_CameraCrossFadeManager_DEFINED
struct CameraCrossFadeManager__Class;
struct CameraCrossFadeManager {
    struct CameraCrossFadeManager__Class* klass;
    MonitorData* monitor;
    struct CameraCrossFadeManager__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CameraCrossFadeManager_FWDDECL)
#define IL2CPP_STRUCT_CameraCrossFadeManager_FWDDECL
#include <Modloader/app/structs/CameraCrossFadeManager__Class.h>
#endif
#undef IL2CPP_STRUCT_CameraCrossFadeManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraCrossFadeManager_DEFINED) && !defined(IL2CPP_STRUCT_CameraCrossFadeManager_FWDDECL)
#include <Modloader/app/structs/CameraCrossFadeManager.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CameraCrossFadeManager.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
