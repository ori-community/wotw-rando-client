#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RenderingSettingsPerScene_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RenderingSettingsPerScene_INITIALIZING
#if !defined(IL2CPP_STRUCT_RenderingSettingsPerScene_DEFINED)
#include <Modloader/app/structs/RenderingSettingsPerScene__Fields.h>
#if defined(IL2CPP_STRUCT_RenderingSettingsPerScene__Fields_DEFINED)
#define IL2CPP_STRUCT_RenderingSettingsPerScene_DEFINED
struct RenderingSettingsPerScene__Class;
struct RenderingSettingsPerScene {
    struct RenderingSettingsPerScene__Class* klass;
    MonitorData* monitor;
    struct RenderingSettingsPerScene__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RenderingSettingsPerScene_FWDDECL)
#define IL2CPP_STRUCT_RenderingSettingsPerScene_FWDDECL
#include <Modloader/app/structs/RenderingSettingsPerScene__Class.h>
#endif
#undef IL2CPP_STRUCT_RenderingSettingsPerScene_INITIALIZING
#if !defined(IL2CPP_STRUCT_RenderingSettingsPerScene_DEFINED) && !defined(IL2CPP_STRUCT_RenderingSettingsPerScene_FWDDECL)
#include <Modloader/app/structs/RenderingSettingsPerScene.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RenderingSettingsPerScene.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
