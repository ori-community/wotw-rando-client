#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ApplicationSettingsBase_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ApplicationSettingsBase_INITIALIZING
#if !defined(IL2CPP_STRUCT_ApplicationSettingsBase_DEFINED)
#define IL2CPP_STRUCT_ApplicationSettingsBase_DEFINED
struct ApplicationSettingsBase__Class;
struct ApplicationSettingsBase {
    struct ApplicationSettingsBase__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ApplicationSettingsBase_FWDDECL)
#define IL2CPP_STRUCT_ApplicationSettingsBase_FWDDECL
#include <Modloader/app/structs/ApplicationSettingsBase__Class.h>
#endif
#undef IL2CPP_STRUCT_ApplicationSettingsBase_INITIALIZING
#if !defined(IL2CPP_STRUCT_ApplicationSettingsBase_DEFINED) && !defined(IL2CPP_STRUCT_ApplicationSettingsBase_FWDDECL)
#include <Modloader/app/structs/ApplicationSettingsBase.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ApplicationSettingsBase.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
