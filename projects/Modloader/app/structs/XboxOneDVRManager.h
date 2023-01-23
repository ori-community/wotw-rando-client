#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XboxOneDVRManager_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XboxOneDVRManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_XboxOneDVRManager_DEFINED)
#include <Modloader/app/structs/XboxOneDVRManager__Fields.h>
#if defined(IL2CPP_STRUCT_XboxOneDVRManager__Fields_DEFINED)
#define IL2CPP_STRUCT_XboxOneDVRManager_DEFINED
struct XboxOneDVRManager__Class;
struct XboxOneDVRManager {
    struct XboxOneDVRManager__Class* klass;
    MonitorData* monitor;
    struct XboxOneDVRManager__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XboxOneDVRManager_FWDDECL)
#define IL2CPP_STRUCT_XboxOneDVRManager_FWDDECL
#include <Modloader/app/structs/XboxOneDVRManager__Class.h>
#endif
#undef IL2CPP_STRUCT_XboxOneDVRManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_XboxOneDVRManager_DEFINED) && !defined(IL2CPP_STRUCT_XboxOneDVRManager_FWDDECL)
#include <Modloader/app/structs/XboxOneDVRManager.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XboxOneDVRManager.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
