#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InflateManager_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InflateManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_InflateManager_DEFINED)
#include <Modloader/app/structs/InflateManager__Fields.h>
#if defined(IL2CPP_STRUCT_InflateManager__Fields_DEFINED)
#define IL2CPP_STRUCT_InflateManager_DEFINED
struct InflateManager__Class;
struct InflateManager {
    struct InflateManager__Class* klass;
    MonitorData* monitor;
    struct InflateManager__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InflateManager_FWDDECL)
#define IL2CPP_STRUCT_InflateManager_FWDDECL
#include <Modloader/app/structs/InflateManager__Class.h>
#endif
#undef IL2CPP_STRUCT_InflateManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_InflateManager_DEFINED) && !defined(IL2CPP_STRUCT_InflateManager_FWDDECL)
#include <Modloader/app/structs/InflateManager.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InflateManager.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
