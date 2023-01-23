#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LeaseManager_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LeaseManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeaseManager_DEFINED)
#include <Modloader/app/structs/LeaseManager__Fields.h>
#if defined(IL2CPP_STRUCT_LeaseManager__Fields_DEFINED)
#define IL2CPP_STRUCT_LeaseManager_DEFINED
struct LeaseManager__Class;
struct LeaseManager {
    struct LeaseManager__Class* klass;
    MonitorData* monitor;
    struct LeaseManager__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LeaseManager_FWDDECL)
#define IL2CPP_STRUCT_LeaseManager_FWDDECL
#include <Modloader/app/structs/LeaseManager__Class.h>
#endif
#undef IL2CPP_STRUCT_LeaseManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeaseManager_DEFINED) && !defined(IL2CPP_STRUCT_LeaseManager_FWDDECL)
#include <Modloader/app/structs/LeaseManager.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LeaseManager.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
