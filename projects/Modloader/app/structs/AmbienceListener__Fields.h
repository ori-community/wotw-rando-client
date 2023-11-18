#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AmbienceListener__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AmbienceListener__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AmbienceListener__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_AmbienceListener__Fields_DEFINED
struct SceneRoot;
struct Ambience_Layer;
struct AmbienceListener__Fields {
    struct MonoBehaviour__Fields _;
    struct SceneRoot* m_lastSceneRoot;
    struct Ambience_Layer* m_lastAmbienceLayer;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AmbienceListener__Fields_FWDDECL)
#define IL2CPP_STRUCT_AmbienceListener__Fields_FWDDECL
#include <Modloader/app/structs/Ambience_Layer.h>
#include <Modloader/app/structs/SceneRoot.h>
#endif
#undef IL2CPP_STRUCT_AmbienceListener__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AmbienceListener__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AmbienceListener__Fields_FWDDECL)
#include <Modloader/app/structs/AmbienceListener__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AmbienceListener__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
