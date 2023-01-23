#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SneezeSlugSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SneezeSlugSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_SneezeSlugSettings_DEFINED)
#include <Modloader/app/structs/SneezeSlugSettings__Fields.h>
#if defined(IL2CPP_STRUCT_SneezeSlugSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_SneezeSlugSettings_DEFINED
struct SneezeSlugSettings__Class;
struct SneezeSlugSettings {
    struct SneezeSlugSettings__Class* klass;
    MonitorData* monitor;
    struct SneezeSlugSettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SneezeSlugSettings_FWDDECL)
#define IL2CPP_STRUCT_SneezeSlugSettings_FWDDECL
#include <Modloader/app/structs/SneezeSlugSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_SneezeSlugSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_SneezeSlugSettings_DEFINED) && !defined(IL2CPP_STRUCT_SneezeSlugSettings_FWDDECL)
#include <Modloader/app/structs/SneezeSlugSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SneezeSlugSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
