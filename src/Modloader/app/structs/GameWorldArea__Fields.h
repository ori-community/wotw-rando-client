#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GameWorldArea__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GameWorldArea__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameWorldArea__Fields_DEFINED)
#include <Modloader/app/structs/Bounds.h>
#include <Modloader/app/structs/GameWorldAreaID__Enum.h>
#include <Modloader/app/structs/GameWorldArea_LupoAreaData.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_GameWorldAreaID__Enum_DEFINED) && defined(IL2CPP_STRUCT_GameWorldArea_LupoAreaData_DEFINED) && defined(IL2CPP_STRUCT_Bounds_DEFINED)
#define IL2CPP_STRUCT_GameWorldArea__Fields_DEFINED
struct List_1_GameWorldArea_WorldMapIcon_;
struct MessageProvider;
struct String;
struct CageStructureTool;
struct Transform;
struct Texture;
struct SerializedBooleanUberState;
struct ZoneScalingData;
struct List_1_Moon_SerializedIntUberState_;
struct List_1_GameWorldArea_PlayerAbilityInfo_;
struct List_1_Moon_ConditionUberState_;
struct Condition_1;
struct GameWorldArea__Fields {
    struct MonoBehaviour__Fields _;
    struct List_1_GameWorldArea_WorldMapIcon_* Icons;
    GameWorldAreaID__Enum WorldMapAreaUniqueID;

    struct MessageProvider* AreaName;
    struct MessageProvider* LowerAreaName;
    struct String* AreaNameString;
    struct CageStructureTool* CageStructureTool;
    struct Transform* BoundingTransform;
    struct Texture* WorldMapTexture;
    struct String* AreaIdentifier;
    struct SerializedBooleanUberState* HasAreaMap;
    struct GameWorldArea_LupoAreaData LupoData;
    struct GameWorldArea_LupoAreaData LupoDataOnCondition;
    struct ZoneScalingData* ZoneScalingData;
    struct List_1_Moon_SerializedIntUberState_* RaceStates;
    struct List_1_GameWorldArea_PlayerAbilityInfo_* AbilityTrees;
    struct List_1_Moon_ConditionUberState_* OtherAreaProgressionStates;
    struct CageStructureTool* BoundaryCage;
    struct Condition_1* VisitableCondition;
    struct Bounds m_boundsCache;
    bool m_boundsCacheInitialized;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GameWorldArea__Fields_FWDDECL)
#define IL2CPP_STRUCT_GameWorldArea__Fields_FWDDECL
#include <Modloader/app/structs/CageStructureTool.h>
#include <Modloader/app/structs/Condition_1.h>
#include <Modloader/app/structs/List_1_GameWorldArea_PlayerAbilityInfo_.h>
#include <Modloader/app/structs/List_1_GameWorldArea_WorldMapIcon_.h>
#include <Modloader/app/structs/List_1_Moon_ConditionUberState_.h>
#include <Modloader/app/structs/List_1_Moon_SerializedIntUberState_.h>
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/SerializedBooleanUberState.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Texture.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/ZoneScalingData.h>
#endif
#undef IL2CPP_STRUCT_GameWorldArea__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameWorldArea__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GameWorldArea__Fields_FWDDECL)
#include <Modloader/app/structs/GameWorldArea__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GameWorldArea__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
