#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ServicePointManager_SPKey_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ServicePointManager_SPKey_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServicePointManager_SPKey_DEFINED)
#include <Modloader/app/structs/ServicePointManager_SPKey__Fields.h>
#if defined(IL2CPP_STRUCT_ServicePointManager_SPKey__Fields_DEFINED)
#define IL2CPP_STRUCT_ServicePointManager_SPKey_DEFINED
struct ServicePointManager_SPKey__Class;
struct ServicePointManager_SPKey {
    struct ServicePointManager_SPKey__Class* klass;
    MonitorData* monitor;
    struct ServicePointManager_SPKey__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ServicePointManager_SPKey_FWDDECL)
#define IL2CPP_STRUCT_ServicePointManager_SPKey_FWDDECL
#include <Modloader/app/structs/ServicePointManager_SPKey__Class.h>
#endif
#undef IL2CPP_STRUCT_ServicePointManager_SPKey_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServicePointManager_SPKey_DEFINED) && !defined(IL2CPP_STRUCT_ServicePointManager_SPKey_FWDDECL)
#include <Modloader/app/structs/ServicePointManager_SPKey.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ServicePointManager_SPKey.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
