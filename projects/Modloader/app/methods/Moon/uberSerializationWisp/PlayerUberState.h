#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/NavigableOnGUI.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/PlayerUberState.h>
#include <Modloader/app/structs/PlayerUberStateDescriptor.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/UberStateArchive.h>

namespace app::classes::Moon::uberSerializationWisp::PlayerUberState {
    IL2CPP_REGISTER_METHOD(0x00F322B0, void, ctor, app::PlayerUberState* this_ptr, app::PlayerUberStateDescriptor* desc, app::Action* set_dirty_callback)
    IL2CPP_REGISTER_METHOD(0x00F329A0, void, Save, app::PlayerUberState* this_ptr, app::UberStateArchive* archive, app::Object* state)
    IL2CPP_REGISTER_METHOD(0x00F32BB0, void, Load, app::PlayerUberState* this_ptr, app::UberStateArchive* archive, int32_t store_version)
    IL2CPP_REGISTER_METHOD(0x00F32CF0, void, OnGui, app::PlayerUberState* this_ptr, app::NavigableOnGUI* gui)
    IL2CPP_REGISTER_METHOD(0x00F33090, int64_t, get_Size, app::PlayerUberState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F331B0, app::String*, AsString, app::PlayerUberState* this_ptr)
} // namespace app::classes::Moon::uberSerializationWisp::PlayerUberState
