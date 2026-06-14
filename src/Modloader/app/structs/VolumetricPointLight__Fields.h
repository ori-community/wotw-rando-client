#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VolumetricPointLight__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VolumetricPointLight__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VolumetricPointLight__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_VolumetricPointLight__Fields_DEFINED
struct Light;
struct VolumetricCanvas;
struct VolumetricPointLight__Fields {
    struct MonoBehaviour__Fields _;
    struct Light* m_light;
    float AttenuationCurve;
    struct VolumetricCanvas* VolumetricCanvas;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VolumetricPointLight__Fields_FWDDECL)
#define IL2CPP_STRUCT_VolumetricPointLight__Fields_FWDDECL
#include <Modloader/app/structs/Light.h>
#include <Modloader/app/structs/VolumetricCanvas.h>
#endif
#undef IL2CPP_STRUCT_VolumetricPointLight__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VolumetricPointLight__Fields_DEFINED) && !defined(IL2CPP_STRUCT_VolumetricPointLight__Fields_FWDDECL)
#include <Modloader/app/structs/VolumetricPointLight__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VolumetricPointLight__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
