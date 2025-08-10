#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Archive.h>
#include <Modloader/app/structs/CageStructureTool_Face.h>
#include <Modloader/app/structs/GameWorldArea.h>
#include <Modloader/app/structs/IUberState__Array.h>
#include <Modloader/app/structs/List_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/PlayerUberStateAreaMapInformation.h>
#include <Modloader/app/structs/RuntimeGameWorldArea.h>
#include <Modloader/app/structs/SerializedBooleanUberState.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/UberStateApplyContext__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/WorldMapAreaState__Enum.h>
#include <Modloader/app/structs/WorldMapIconType__Enum.h>

namespace app::classes::RuntimeGameWorldArea {
    IL2CPP_REGISTER_METHOD(0x01374BF0, app::PlayerUberStateAreaMapInformation*, get_AreaMapUberState, app::RuntimeGameWorldArea* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01374CA0, app::Vector2, FindCenterPositionOnDiscoveredAreas, app::RuntimeGameWorldArea* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01375020, app::Vector2, FindCenterPositionOnUndiscoveredAreas, app::RuntimeGameWorldArea* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013753A0, void, ctor, app::RuntimeGameWorldArea* this_ptr, app::GameWorldArea* area)
    IL2CPP_REGISTER_METHOD(0x01375910, void, Initialize, app::RuntimeGameWorldArea* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01376960, void, Finalize, app::RuntimeGameWorldArea* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01376A60, void, UpdateLabelState, app::RuntimeGameWorldArea* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01376B50, bool, get_AreaDiscovered, app::RuntimeGameWorldArea* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01376DE0, float, get_CompletionAmount, app::RuntimeGameWorldArea* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01376E10, float, get_CollectiblesCompletionAmount, app::RuntimeGameWorldArea* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00997600, void, DirtyCompletionAmount, app::RuntimeGameWorldArea* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01376E40, int32_t, get_CompletionPercentage, app::RuntimeGameWorldArea* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01376E70, bool, IsIconCollected, app::SerializedBooleanUberState* icon_state)
    IL2CPP_REGISTER_METHOD(
        0x01376E90,
        bool,
        IsAreaFaceVisited,
        app::RuntimeGameWorldArea* this_ptr,
        app::GameWorldArea* area,
        app::CageStructureTool_Face* face
    )
    IL2CPP_REGISTER_METHOD(0x01376EF0, bool, IconIsCompletionType, app::WorldMapIconType__Enum type)
    IL2CPP_REGISTER_METHOD(0x01376F80, void, UpdateCompletionAmount, app::RuntimeGameWorldArea* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013777A0, float, GetDiscoveredOrVisitedAmmount, app::RuntimeGameWorldArea* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013779F0, app::String*, GetUberStatePath, app::SerializedBooleanUberState* state)
    IL2CPP_REGISTER_METHOD(0x01377A10, void, LogCollectableStates, app::RuntimeGameWorldArea* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013794A0, void, VisitMapAreaAtPosition, app::RuntimeGameWorldArea* this_ptr, app::Vector3 world_position)
    IL2CPP_REGISTER_METHOD(0x01379710, bool, get_HasSenseAbility, app::RuntimeGameWorldArea* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01379850, bool, IsHidden_1, app::RuntimeGameWorldArea* this_ptr, app::Vector3 world_position)
    IL2CPP_REGISTER_METHOD(0x01379B10, bool, IsDiscovered_1, app::RuntimeGameWorldArea* this_ptr, app::Vector3 world_position)
    IL2CPP_REGISTER_METHOD(0x01379CD0, bool, IsHidden_2, app::RuntimeGameWorldArea* this_ptr, app::CageStructureTool_Face* face)
    IL2CPP_REGISTER_METHOD(0x01379D30, bool, IsDiscovered_2, app::RuntimeGameWorldArea* this_ptr, app::CageStructureTool_Face* face)
    IL2CPP_REGISTER_METHOD(0x01379D90, bool, IsVisited_1, app::RuntimeGameWorldArea* this_ptr, app::CageStructureTool_Face* face)
    IL2CPP_REGISTER_METHOD(0x01379DF0, bool, IsVisited_2, app::RuntimeGameWorldArea* this_ptr, app::Vector3 world_position)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Serialize, app::RuntimeGameWorldArea* this_ptr, app::Archive* ar)
    IL2CPP_REGISTER_METHOD(0x01379FB0, void, DiscoverAllAreas, app::RuntimeGameWorldArea* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0137A200, void, VisitFully, app::RuntimeGameWorldArea* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0137A410, bool, FaceIsDiscoveredOrVisited, app::RuntimeGameWorldArea* this_ptr, int32_t id)
    IL2CPP_REGISTER_METHOD(0x0137A470, app::WorldMapAreaState__Enum, GetFaceState, app::RuntimeGameWorldArea* this_ptr, int32_t id)
    IL2CPP_REGISTER_METHOD(0x00997600, void, Apply, app::RuntimeGameWorldArea* this_ptr, app::UberStateApplyContext__Enum context)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ApplyOnEditor, app::RuntimeGameWorldArea* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9F0, app::IUberState__Array*, get_AffectingUberStates, app::RuntimeGameWorldArea* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0137A4C0, app::List_1_UnityEngine_GameObject_*, get_AllTargets, app::RuntimeGameWorldArea* this_ptr)
} // namespace app::classes::RuntimeGameWorldArea
