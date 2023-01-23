#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SMAA_TopLevelSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SMAA_TopLevelSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_SMAA_TopLevelSettings_DEFINED)
#define IL2CPP_STRUCT_SMAA_TopLevelSettings_DEFINED
struct SMAA_TopLevelSettings__Class;
struct SMAA_TopLevelSettings {
    struct SMAA_TopLevelSettings__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_SMAA_TopLevelSettings_FWDDECL)
#define IL2CPP_STRUCT_SMAA_TopLevelSettings_FWDDECL
#include <Modloader/app/structs/SMAA_TopLevelSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_SMAA_TopLevelSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_SMAA_TopLevelSettings_DEFINED) && !defined(IL2CPP_STRUCT_SMAA_TopLevelSettings_FWDDECL)
#include <Modloader/app/structs/SMAA_TopLevelSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SMAA_TopLevelSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
