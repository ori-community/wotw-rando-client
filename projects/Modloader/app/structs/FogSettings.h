#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FogSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FogSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_FogSettings_DEFINED)
#include <Modloader/app/structs/FogSettings__Fields.h>
#if defined(IL2CPP_STRUCT_FogSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_FogSettings_DEFINED
struct FogSettings__Class;
struct FogSettings {
    struct FogSettings__Class* klass;
    MonitorData* monitor;
    struct FogSettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FogSettings_FWDDECL)
#define IL2CPP_STRUCT_FogSettings_FWDDECL
#include <Modloader/app/structs/FogSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_FogSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_FogSettings_DEFINED) && !defined(IL2CPP_STRUCT_FogSettings_FWDDECL)
#include <Modloader/app/structs/FogSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FogSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
