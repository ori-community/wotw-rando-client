#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/GameWorldAreaID__Enum.h>
#include <Modloader/app/structs/NavigableOnGUI.h>
#include <Modloader/app/structs/PlayerUberStateGeneral.h>
#include <Modloader/app/structs/UberStateArchive.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::Moon::uberSerializationWisp::PlayerUberStateGeneral {
    IL2CPP_REGISTER_METHOD(0x007EC230, app::Vector3, get_WorldPosition, app::PlayerUberStateGeneral* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F39440, void, set_WorldPosition, app::PlayerUberStateGeneral* this_ptr, app::Vector3 value)
    IL2CPP_REGISTER_METHOD(0x007EC230, app::Vector3, get_FastWorldPosition, app::PlayerUberStateGeneral* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009C51C0, void, set_FastWorldPosition, app::PlayerUberStateGeneral* this_ptr, app::Vector3 value)
    IL2CPP_REGISTER_METHOD(0x005C3FF0, app::GameWorldAreaID__Enum, get_AreaID, app::PlayerUberStateGeneral* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F39500, void, set_AreaID, app::PlayerUberStateGeneral* this_ptr, app::GameWorldAreaID__Enum value)
    IL2CPP_REGISTER_METHOD(0x004F4CE0, bool, get_DebugOn, app::PlayerUberStateGeneral* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F39510, void, set_DebugOn, app::PlayerUberStateGeneral* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x004E57A0, int32_t, get_DeathCounter, app::PlayerUberStateGeneral* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F39520, void, set_DeathCounter, app::PlayerUberStateGeneral* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x00F39530, void, ctor, app::PlayerUberStateGeneral* this_ptr, app::Action* set_dirty_callback)
    IL2CPP_REGISTER_METHOD(0x00F39840, void, SetGameTime, app::PlayerUberStateGeneral* this_ptr, float time)
    IL2CPP_REGISTER_METHOD(0x00F39850, void, Save, app::PlayerUberStateGeneral* this_ptr, app::UberStateArchive* archive, app::PlayerUberStateGeneral* general)
    IL2CPP_REGISTER_METHOD(0x00F39C10, void, Load, app::PlayerUberStateGeneral* this_ptr, app::UberStateArchive* archive, int32_t store_version)
    IL2CPP_REGISTER_METHOD(0x00F39EB0, void, OnGui, app::PlayerUberStateGeneral* this_ptr, app::NavigableOnGUI* gui)
    IL2CPP_REGISTER_METHOD(0x00F39FE0, int64_t, get_Size, app::PlayerUberStateGeneral* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F3A090, void, RunSetDirtyCallback, app::PlayerUberStateGeneral* this_ptr)
} // namespace app::classes::Moon::uberSerializationWisp::PlayerUberStateGeneral
