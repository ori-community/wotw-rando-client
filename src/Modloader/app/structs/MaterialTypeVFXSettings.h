#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MaterialTypeVFXSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MaterialTypeVFXSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_MaterialTypeVFXSettings_DEFINED)
#include <Modloader/app/structs/MaterialTypeVFXSettings__Fields.h>
#if defined(IL2CPP_STRUCT_MaterialTypeVFXSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_MaterialTypeVFXSettings_DEFINED
struct MaterialTypeVFXSettings__Class;
struct MaterialTypeVFXSettings {
    struct MaterialTypeVFXSettings__Class* klass;
    MonitorData* monitor;
    struct MaterialTypeVFXSettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MaterialTypeVFXSettings_FWDDECL)
#define IL2CPP_STRUCT_MaterialTypeVFXSettings_FWDDECL
#include <Modloader/app/structs/MaterialTypeVFXSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_MaterialTypeVFXSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_MaterialTypeVFXSettings_DEFINED) && !defined(IL2CPP_STRUCT_MaterialTypeVFXSettings_FWDDECL)
#include <Modloader/app/structs/MaterialTypeVFXSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MaterialTypeVFXSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
