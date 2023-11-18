#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MiscDebugMenuPage__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MiscDebugMenuPage__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MiscDebugMenuPage__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_MiscDebugMenuPage__Fields_DEFINED
struct String;
struct GameObject;
struct SceneMetaData;
struct MiscDebugMenuPage__Fields {
    struct MonoBehaviour__Fields _;
    struct String* m_name;
    struct GameObject* NightberryPlaceholder;
    struct String* TestSceneName;
    struct SceneMetaData* TestScene;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MiscDebugMenuPage__Fields_FWDDECL)
#define IL2CPP_STRUCT_MiscDebugMenuPage__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/SceneMetaData.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_MiscDebugMenuPage__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MiscDebugMenuPage__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MiscDebugMenuPage__Fields_FWDDECL)
#include <Modloader/app/structs/MiscDebugMenuPage__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MiscDebugMenuPage__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
