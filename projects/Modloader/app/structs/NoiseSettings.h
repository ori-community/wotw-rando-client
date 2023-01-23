#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NoiseSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NoiseSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_NoiseSettings_DEFINED)
#include <Modloader/app/structs/NoiseSettings__Fields.h>
#if defined(IL2CPP_STRUCT_NoiseSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_NoiseSettings_DEFINED
struct NoiseSettings__Class;
struct NoiseSettings {
    struct NoiseSettings__Class* klass;
    MonitorData* monitor;
    struct NoiseSettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NoiseSettings_FWDDECL)
#define IL2CPP_STRUCT_NoiseSettings_FWDDECL
#include <Modloader/app/structs/NoiseSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_NoiseSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_NoiseSettings_DEFINED) && !defined(IL2CPP_STRUCT_NoiseSettings_FWDDECL)
#include <Modloader/app/structs/NoiseSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NoiseSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
