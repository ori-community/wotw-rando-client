#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GameMapUI_HintsSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GameMapUI_HintsSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameMapUI_HintsSettings_DEFINED)
#define IL2CPP_STRUCT_GameMapUI_HintsSettings_DEFINED
struct GameObject;
struct Transform;
struct GameMapUI_HintsSettings {
    struct GameObject* MessagePrefab;
    struct Transform* MessageAnchor;
    float MessageDuration;
};
#endif
#if !defined(IL2CPP_STRUCT_GameMapUI_HintsSettings_FWDDECL)
#define IL2CPP_STRUCT_GameMapUI_HintsSettings_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_GameMapUI_HintsSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameMapUI_HintsSettings_DEFINED) && !defined(IL2CPP_STRUCT_GameMapUI_HintsSettings_FWDDECL)
#include <Modloader/app/structs/GameMapUI_HintsSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GameMapUI_HintsSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
