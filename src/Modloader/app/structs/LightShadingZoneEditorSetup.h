#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LightShadingZoneEditorSetup_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LightShadingZoneEditorSetup_INITIALIZING
#if !defined(IL2CPP_STRUCT_LightShadingZoneEditorSetup_DEFINED)
#include <Modloader/app/structs/LightShadingZoneEditorSetup__Fields.h>
#if defined(IL2CPP_STRUCT_LightShadingZoneEditorSetup__Fields_DEFINED)
#define IL2CPP_STRUCT_LightShadingZoneEditorSetup_DEFINED
struct LightShadingZoneEditorSetup__Class;
struct LightShadingZoneEditorSetup {
    struct LightShadingZoneEditorSetup__Class* klass;
    MonitorData* monitor;
    struct LightShadingZoneEditorSetup__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LightShadingZoneEditorSetup_FWDDECL)
#define IL2CPP_STRUCT_LightShadingZoneEditorSetup_FWDDECL
#include <Modloader/app/structs/LightShadingZoneEditorSetup__Class.h>
#endif
#undef IL2CPP_STRUCT_LightShadingZoneEditorSetup_INITIALIZING
#if !defined(IL2CPP_STRUCT_LightShadingZoneEditorSetup_DEFINED) && !defined(IL2CPP_STRUCT_LightShadingZoneEditorSetup_FWDDECL)
#include <Modloader/app/structs/LightShadingZoneEditorSetup.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LightShadingZoneEditorSetup.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
