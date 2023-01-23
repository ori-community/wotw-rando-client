#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonShadingZoneController__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonShadingZoneController__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonShadingZoneController__StaticFields_DEFINED)
#define IL2CPP_STRUCT_MoonShadingZoneController__StaticFields_DEFINED
struct HashSet_1_System_Int32_;
struct MoonShadingZoneController;
struct List_1_IMoonShadingZone_;
struct MoonShadingZoneController__StaticFields {
    struct HashSet_1_System_Int32_* ForceReenterRenderers;
    bool s_registered;
    bool s_registeredEditor;
    struct MoonShadingZoneController* s_instance;
    struct List_1_IMoonShadingZone_* All;
};
#endif
#if !defined(IL2CPP_STRUCT_MoonShadingZoneController__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_MoonShadingZoneController__StaticFields_FWDDECL
#include <Modloader/app/structs/HashSet_1_System_Int32_.h>
#include <Modloader/app/structs/List_1_IMoonShadingZone_.h>
#include <Modloader/app/structs/MoonShadingZoneController.h>
#endif
#undef IL2CPP_STRUCT_MoonShadingZoneController__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonShadingZoneController__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_MoonShadingZoneController__StaticFields_FWDDECL)
#include <Modloader/app/structs/MoonShadingZoneController__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonShadingZoneController__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
