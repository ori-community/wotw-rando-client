#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XboxControllerManager_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XboxControllerManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_XboxControllerManager_DEFINED)
#include <Modloader/app/structs/XboxControllerManager__Fields.h>
#if defined(IL2CPP_STRUCT_XboxControllerManager__Fields_DEFINED)
#define IL2CPP_STRUCT_XboxControllerManager_DEFINED
struct XboxControllerManager__Class;
struct XboxControllerManager {
    struct XboxControllerManager__Class* klass;
    MonitorData* monitor;
    struct XboxControllerManager__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XboxControllerManager_FWDDECL)
#define IL2CPP_STRUCT_XboxControllerManager_FWDDECL
#include <Modloader/app/structs/XboxControllerManager__Class.h>
#endif
#undef IL2CPP_STRUCT_XboxControllerManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_XboxControllerManager_DEFINED) && !defined(IL2CPP_STRUCT_XboxControllerManager_FWDDECL)
#include <Modloader/app/structs/XboxControllerManager.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XboxControllerManager.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
