#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Archive.h>
#include <Modloader/app/structs/GameWorld.h>
#include <Modloader/app/structs/GameWorldArea.h>
#include <Modloader/app/structs/GameWorldAreaID__Enum.h>
#include <Modloader/app/structs/MoonGuid.h>
#include <Modloader/app/structs/RuntimeGameWorldArea.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/WorldMapIconType__Enum.h>

namespace app::classes::GameWorld {
    IL2CPP_REGISTER_METHOD(0x00406190, bool, HasCompletedEverything, app::GameWorld* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00406490, void, RevealIcon, app::GameWorld* this_ptr, app::MoonGuid* icon)
    IL2CPP_REGISTER_METHOD(0x00406540, bool, IconRevealed, app::GameWorld* this_ptr, app::MoonGuid* icon)
    IL2CPP_REGISTER_METHOD(0x00406640, float, get_CompletionAmount, app::GameWorld* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00406BC0, int32_t, get_CompletionPercentage, app::GameWorld* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00406BE0, int32_t, ApproximateCompletionPercentage, float completion_amount)
    IL2CPP_REGISTER_METHOD(0x00406CF0, float, get_CollectablesCompletionAmount, app::GameWorld* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00406E30, int32_t, get_CollectablesCompletionPercentage, app::GameWorld* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00406F80, app::GameWorldArea*, FindAreaFromID, app::GameWorld* this_ptr, app::GameWorldAreaID__Enum i_d)
    IL2CPP_REGISTER_METHOD(0x00407050, app::GameWorldArea*, FindAreaFromPosition, app::GameWorld* this_ptr, app::Vector3 position)
    IL2CPP_REGISTER_METHOD(0x00407230, app::RuntimeGameWorldArea*, FindRuntimeArea, app::GameWorld* this_ptr, app::GameWorldArea* area)
    IL2CPP_REGISTER_METHOD(0x00407370, void, Awake, app::GameWorld* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00407900, void, OnDestroy, app::GameWorld* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00407BB0, void, OnRestoreCheckpoint, app::GameWorld* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00407D60, void, OnGameReset, app::GameWorld* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00407EC0, app::GameWorldArea*, AreaFromIndex, app::GameWorld* this_ptr, int32_t i)
    IL2CPP_REGISTER_METHOD(0x00407FA0, int32_t, IndexOfArea, app::GameWorld* this_ptr, app::GameWorldArea* area)
    IL2CPP_REGISTER_METHOD(0x00408200, void, Serialize, app::GameWorld* this_ptr, app::Archive* ar)
    IL2CPP_REGISTER_METHOD(0x00408C30, void, VisitMapAreasAtPosition, app::GameWorld* this_ptr, app::Vector3 current_player_position)
    IL2CPP_REGISTER_METHOD(0x00408D40, app::GameWorldArea*, WorldAreaAtPosition, app::GameWorld* this_ptr, app::Vector3 world_position)
    IL2CPP_REGISTER_METHOD(0x00408F80, app::GameWorldArea*, GetArea, app::GameWorld* this_ptr, app::GameWorldAreaID__Enum area_i_d)
    IL2CPP_REGISTER_METHOD(0x004090D0, int32_t, GetIconTypeCount, app::GameWorld* this_ptr, app::WorldMapIconType__Enum type)
    IL2CPP_REGISTER_METHOD(0x00409670, int32_t, GetCollectedIconTypeCount, app::GameWorld* this_ptr, app::WorldMapIconType__Enum type)
    IL2CPP_REGISTER_METHOD(0x00409CE0, void, MapTrailUpdate, app::GameWorld* this_ptr, app::Vector2 position)
    IL2CPP_REGISTER_METHOD(0x00409E30, void, ctor, app::GameWorld* this_ptr)
} // namespace app::classes::GameWorld
