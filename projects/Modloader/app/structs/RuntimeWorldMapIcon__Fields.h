#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RuntimeWorldMapIcon__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RuntimeWorldMapIcon__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeWorldMapIcon__Fields_DEFINED)
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/WorldMapIconType__Enum.h>
#if defined(IL2CPP_STRUCT_WorldMapIconType__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_RuntimeWorldMapIcon__Fields_DEFINED
struct MoonGuid;
struct RuntimeGameWorldArea;
struct SerializedBooleanUberState;
struct ConditionUberState;
struct SerializedIntUberState;
struct AreaMapIcon;
struct GameObject;
struct __declspec(align(8)) RuntimeWorldMapIcon__Fields {
    struct MoonGuid* Guid;
    WorldMapIconType__Enum Icon;

    struct Vector2 Position;
    struct RuntimeGameWorldArea* Area;
    bool IsSecret;
    struct SerializedBooleanUberState* IsCollectedState;
    struct ConditionUberState* Condition;
    struct SerializedIntUberState* SpecialState;
    struct AreaMapIcon* m_areaMapIcon;
    struct GameObject* IconGameObject;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RuntimeWorldMapIcon__Fields_FWDDECL)
#define IL2CPP_STRUCT_RuntimeWorldMapIcon__Fields_FWDDECL
#include <Modloader/app/structs/AreaMapIcon.h>
#include <Modloader/app/structs/ConditionUberState.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MoonGuid.h>
#include <Modloader/app/structs/RuntimeGameWorldArea.h>
#include <Modloader/app/structs/SerializedBooleanUberState.h>
#include <Modloader/app/structs/SerializedIntUberState.h>
#endif
#undef IL2CPP_STRUCT_RuntimeWorldMapIcon__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeWorldMapIcon__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RuntimeWorldMapIcon__Fields_FWDDECL)
#include <Modloader/app/structs/RuntimeWorldMapIcon__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RuntimeWorldMapIcon__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
