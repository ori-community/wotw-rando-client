#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AppSettingsReader_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AppSettingsReader_INITIALIZING
#if !defined(IL2CPP_STRUCT_AppSettingsReader_DEFINED)
#define IL2CPP_STRUCT_AppSettingsReader_DEFINED
struct AppSettingsReader__Class;
struct AppSettingsReader {
    struct AppSettingsReader__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_AppSettingsReader_FWDDECL)
#define IL2CPP_STRUCT_AppSettingsReader_FWDDECL
#include <Modloader/app/structs/AppSettingsReader__Class.h>
#endif
#undef IL2CPP_STRUCT_AppSettingsReader_INITIALIZING
#if !defined(IL2CPP_STRUCT_AppSettingsReader_DEFINED) && !defined(IL2CPP_STRUCT_AppSettingsReader_FWDDECL)
#include <Modloader/app/structs/AppSettingsReader.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AppSettingsReader.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
