#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LightInfluenceSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LightInfluenceSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_LightInfluenceSettings_DEFINED)
#include <Modloader/app/structs/LightInfluenceSettings__Fields.h>
#if defined(IL2CPP_STRUCT_LightInfluenceSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_LightInfluenceSettings_DEFINED
struct LightInfluenceSettings__Class;
struct LightInfluenceSettings {
    struct LightInfluenceSettings__Class* klass;
    MonitorData* monitor;
    struct LightInfluenceSettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LightInfluenceSettings_FWDDECL)
#define IL2CPP_STRUCT_LightInfluenceSettings_FWDDECL
#include <Modloader/app/structs/LightInfluenceSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_LightInfluenceSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_LightInfluenceSettings_DEFINED) && !defined(IL2CPP_STRUCT_LightInfluenceSettings_FWDDECL)
#include <Modloader/app/structs/LightInfluenceSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LightInfluenceSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
