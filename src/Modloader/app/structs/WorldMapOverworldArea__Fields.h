#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WorldMapOverworldArea__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WorldMapOverworldArea__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WorldMapOverworldArea__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Rect_DEFINED)
#define IL2CPP_STRUCT_WorldMapOverworldArea__Fields_DEFINED
struct GameWorldArea;
struct RuntimeGameWorldArea;
struct GameObject;
struct Transform;
struct CleverMenuItem;
struct WorldMapOverworldArea__Fields {
    struct MonoBehaviour__Fields _;
    struct GameWorldArea* Area;
    struct RuntimeGameWorldArea* RuntimeArea;
    struct GameObject* Fog;
    struct Transform* MapEntryTransform;
    struct Vector3 CameraOffset;
    struct Rect m_worldRect;
    struct CleverMenuItem* _CleverMenu_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WorldMapOverworldArea__Fields_FWDDECL)
#define IL2CPP_STRUCT_WorldMapOverworldArea__Fields_FWDDECL
#include <Modloader/app/structs/CleverMenuItem.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/GameWorldArea.h>
#include <Modloader/app/structs/RuntimeGameWorldArea.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_WorldMapOverworldArea__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WorldMapOverworldArea__Fields_DEFINED) && !defined(IL2CPP_STRUCT_WorldMapOverworldArea__Fields_FWDDECL)
#include <Modloader/app/structs/WorldMapOverworldArea__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WorldMapOverworldArea__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
