#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpiritLightVisualAffectorManager__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpiritLightVisualAffectorManager__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiritLightVisualAffectorManager__StaticFields_DEFINED)
#define IL2CPP_STRUCT_SpiritLightVisualAffectorManager__StaticFields_DEFINED
struct Int32__Array;
struct SpiritLightVisualAffectorManager;
struct SpiritLightVisualAffectorManager__StaticFields {
    struct Int32__Array* s_lightSettingPropertyNames;
    struct Int32__Array* s_capsuleLightPropertyNames;
    int32_t s_lightVesselLightPropertyName;
    bool DeactivateLightMechanics;
    int32_t SPIRIT_LIGHT_GLOBAL_OVERRIDE_SHADER_PROPERTY;
    struct SpiritLightVisualAffectorManager* Instance;
};
#endif
#if !defined(IL2CPP_STRUCT_SpiritLightVisualAffectorManager__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_SpiritLightVisualAffectorManager__StaticFields_FWDDECL
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/SpiritLightVisualAffectorManager.h>
#endif
#undef IL2CPP_STRUCT_SpiritLightVisualAffectorManager__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiritLightVisualAffectorManager__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_SpiritLightVisualAffectorManager__StaticFields_FWDDECL)
#include <Modloader/app/structs/SpiritLightVisualAffectorManager__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpiritLightVisualAffectorManager__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
