#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Volumetric__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Volumetric__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Volumetric__StaticFields_DEFINED)
#define IL2CPP_STRUCT_Volumetric__StaticFields_DEFINED
struct List_1_Moon_Rendering_VolumetricPointLight_;
struct List_1_Moon_Rendering_VolumetricAreaLight_;
struct VolumetricConfig;
struct Volumetric__StaticFields {
    struct List_1_Moon_Rendering_VolumetricPointLight_* s_lights;
    struct List_1_Moon_Rendering_VolumetricAreaLight_* s_areaLights;
    struct VolumetricConfig* s_config;
};
#endif
#if !defined(IL2CPP_STRUCT_Volumetric__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_Volumetric__StaticFields_FWDDECL
#include <Modloader/app/structs/List_1_Moon_Rendering_VolumetricAreaLight_.h>
#include <Modloader/app/structs/List_1_Moon_Rendering_VolumetricPointLight_.h>
#include <Modloader/app/structs/VolumetricConfig.h>
#endif
#undef IL2CPP_STRUCT_Volumetric__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Volumetric__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_Volumetric__StaticFields_FWDDECL)
#include <Modloader/app/structs/Volumetric__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Volumetric__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
