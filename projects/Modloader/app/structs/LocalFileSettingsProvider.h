#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LocalFileSettingsProvider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LocalFileSettingsProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_LocalFileSettingsProvider_DEFINED)
#define IL2CPP_STRUCT_LocalFileSettingsProvider_DEFINED
struct LocalFileSettingsProvider__Class;
struct LocalFileSettingsProvider {
    struct LocalFileSettingsProvider__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_LocalFileSettingsProvider_FWDDECL)
#define IL2CPP_STRUCT_LocalFileSettingsProvider_FWDDECL
#include <Modloader/app/structs/LocalFileSettingsProvider__Class.h>
#endif
#undef IL2CPP_STRUCT_LocalFileSettingsProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_LocalFileSettingsProvider_DEFINED) && !defined(IL2CPP_STRUCT_LocalFileSettingsProvider_FWDDECL)
#include <Modloader/app/structs/LocalFileSettingsProvider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LocalFileSettingsProvider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
