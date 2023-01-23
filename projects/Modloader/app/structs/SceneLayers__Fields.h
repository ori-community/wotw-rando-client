#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SceneLayers__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SceneLayers__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneLayers__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_SceneLayers__Fields_DEFINED
struct SceneLayers_Layer__Array;
struct SceneLayers_Layer;
struct List_1_UnityEngine_Renderer_;
struct SceneLayers__Fields {
    struct MonoBehaviour__Fields _;
    struct SceneLayers_Layer__Array* Layers;
    struct SceneLayers_Layer* Center;
    struct SceneLayers_Layer* Foreground;
    struct SceneLayers_Layer* Background;
    struct List_1_UnityEngine_Renderer_* HiddenRenders;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SceneLayers__Fields_FWDDECL)
#define IL2CPP_STRUCT_SceneLayers__Fields_FWDDECL
#include <Modloader/app/structs/List_1_UnityEngine_Renderer_.h>
#include <Modloader/app/structs/SceneLayers_Layer.h>
#include <Modloader/app/structs/SceneLayers_Layer__Array.h>
#endif
#undef IL2CPP_STRUCT_SceneLayers__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneLayers__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SceneLayers__Fields_FWDDECL)
#include <Modloader/app/structs/SceneLayers__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SceneLayers__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
