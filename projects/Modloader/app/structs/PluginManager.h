#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PluginManager_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PluginManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_PluginManager_DEFINED)
#include <Modloader/app/structs/PluginManager__Fields.h>
#if defined(IL2CPP_STRUCT_PluginManager__Fields_DEFINED)
#define IL2CPP_STRUCT_PluginManager_DEFINED
struct PluginManager__Class;
struct PluginManager {
    struct PluginManager__Class* klass;
    MonitorData* monitor;
    struct PluginManager__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PluginManager_FWDDECL)
#define IL2CPP_STRUCT_PluginManager_FWDDECL
#include <Modloader/app/structs/PluginManager__Class.h>
#endif
#undef IL2CPP_STRUCT_PluginManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_PluginManager_DEFINED) && !defined(IL2CPP_STRUCT_PluginManager_FWDDECL)
#include <Modloader/app/structs/PluginManager.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PluginManager.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
