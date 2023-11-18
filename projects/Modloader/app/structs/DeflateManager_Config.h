#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DeflateManager_Config_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DeflateManager_Config_INITIALIZING
#if !defined(IL2CPP_STRUCT_DeflateManager_Config_DEFINED)
#include <Modloader/app/structs/DeflateManager_Config__Fields.h>
#if defined(IL2CPP_STRUCT_DeflateManager_Config__Fields_DEFINED)
#define IL2CPP_STRUCT_DeflateManager_Config_DEFINED
struct DeflateManager_Config__Class;
struct DeflateManager_Config {
    struct DeflateManager_Config__Class* klass;
    MonitorData* monitor;
    struct DeflateManager_Config__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DeflateManager_Config_FWDDECL)
#define IL2CPP_STRUCT_DeflateManager_Config_FWDDECL
#include <Modloader/app/structs/DeflateManager_Config__Class.h>
#endif
#undef IL2CPP_STRUCT_DeflateManager_Config_INITIALIZING
#if !defined(IL2CPP_STRUCT_DeflateManager_Config_DEFINED) && !defined(IL2CPP_STRUCT_DeflateManager_Config_FWDDECL)
#include <Modloader/app/structs/DeflateManager_Config.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DeflateManager_Config.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
