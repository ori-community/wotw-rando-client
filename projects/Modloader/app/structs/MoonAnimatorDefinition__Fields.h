#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonAnimatorDefinition__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonAnimatorDefinition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonAnimatorDefinition__Fields_DEFINED)
#include <Modloader/app/structs/ScriptableObject__Fields.h>
#if defined(IL2CPP_STRUCT_ScriptableObject__Fields_DEFINED)
#define IL2CPP_STRUCT_MoonAnimatorDefinition__Fields_DEFINED
struct GameObject;
struct List_1_Moon_MoonAnimatorLayerDefinition_;
struct MoonAnimatorDefinition__Fields {
    struct ScriptableObject__Fields _;
    struct GameObject* m_rig;
    int32_t m_nextAdditionalLayerId;
    struct List_1_Moon_MoonAnimatorLayerDefinition_* m_additionalLayers;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonAnimatorDefinition__Fields_FWDDECL)
#define IL2CPP_STRUCT_MoonAnimatorDefinition__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/List_1_Moon_MoonAnimatorLayerDefinition_.h>
#endif
#undef IL2CPP_STRUCT_MoonAnimatorDefinition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonAnimatorDefinition__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MoonAnimatorDefinition__Fields_FWDDECL)
#include <Modloader/app/structs/MoonAnimatorDefinition__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonAnimatorDefinition__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
