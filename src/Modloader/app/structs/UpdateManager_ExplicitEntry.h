#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UpdateManager_ExplicitEntry_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UpdateManager_ExplicitEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_UpdateManager_ExplicitEntry_DEFINED)
#include <Modloader/app/structs/UpdateManager_ExplicitEntry__Fields.h>
#if defined(IL2CPP_STRUCT_UpdateManager_ExplicitEntry__Fields_DEFINED)
#define IL2CPP_STRUCT_UpdateManager_ExplicitEntry_DEFINED
struct UpdateManager_ExplicitEntry__Class;
struct UpdateManager_ExplicitEntry {
    struct UpdateManager_ExplicitEntry__Class* klass;
    MonitorData* monitor;
    struct UpdateManager_ExplicitEntry__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UpdateManager_ExplicitEntry_FWDDECL)
#define IL2CPP_STRUCT_UpdateManager_ExplicitEntry_FWDDECL
#include <Modloader/app/structs/UpdateManager_ExplicitEntry__Class.h>
#endif
#undef IL2CPP_STRUCT_UpdateManager_ExplicitEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_UpdateManager_ExplicitEntry_DEFINED) && !defined(IL2CPP_STRUCT_UpdateManager_ExplicitEntry_FWDDECL)
#include <Modloader/app/structs/UpdateManager_ExplicitEntry.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UpdateManager_ExplicitEntry.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
