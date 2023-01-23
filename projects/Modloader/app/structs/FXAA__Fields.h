#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FXAA__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FXAA__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FXAA__Fields_DEFINED)
#include <Modloader/app/structs/FXAA_Preset.h>
#if defined(IL2CPP_STRUCT_FXAA_Preset_DEFINED)
#define IL2CPP_STRUCT_FXAA__Fields_DEFINED
struct Shader;
struct Material;
struct __declspec(align(8)) FXAA__Fields {
    bool m_useSeparateAlpha;
    struct Shader* m_Shader;
    struct Material* m_Material;
    struct FXAA_Preset preset;
    bool _validSourceFormat_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FXAA__Fields_FWDDECL)
#define IL2CPP_STRUCT_FXAA__Fields_FWDDECL
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/Shader.h>
#endif
#undef IL2CPP_STRUCT_FXAA__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FXAA__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FXAA__Fields_FWDDECL)
#include <Modloader/app/structs/FXAA__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FXAA__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
