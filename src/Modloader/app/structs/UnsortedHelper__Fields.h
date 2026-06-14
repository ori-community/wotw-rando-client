#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UnsortedHelper__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UnsortedHelper__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnsortedHelper__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_UnsortedHelper__Fields_DEFINED
struct SceneSettingsComponent;
struct LayeredRenderSettings;
struct String__Array;
struct GameObject__Array;
struct GameObject;
struct UnsortedHelper__Fields {
    struct MonoBehaviour__Fields _;
    struct SceneSettingsComponent* SceneSettings;
    struct LayeredRenderSettings* LayeredRenderSettings;
    struct String__Array* LayerNames;
    struct GameObject__Array* Layers;
    struct GameObject* ArtRoot;
    struct GameObject* SortingSource;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UnsortedHelper__Fields_FWDDECL)
#define IL2CPP_STRUCT_UnsortedHelper__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/GameObject__Array.h>
#include <Modloader/app/structs/LayeredRenderSettings.h>
#include <Modloader/app/structs/SceneSettingsComponent.h>
#include <Modloader/app/structs/String__Array.h>
#endif
#undef IL2CPP_STRUCT_UnsortedHelper__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnsortedHelper__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UnsortedHelper__Fields_FWDDECL)
#include <Modloader/app/structs/UnsortedHelper__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UnsortedHelper__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
