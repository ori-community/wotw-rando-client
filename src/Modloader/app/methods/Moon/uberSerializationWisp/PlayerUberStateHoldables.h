#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/NavigableOnGUI.h>
#include <Modloader/app/structs/PlayerUberStateHoldables.h>
#include <Modloader/app/structs/UberStateArchive.h>

namespace app::classes::Moon::uberSerializationWisp::PlayerUberStateHoldables {
    IL2CPP_REGISTER_METHOD(0x00F3A360, bool, get_IsHoldingTorch, app::PlayerUberStateHoldables* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F3A370, void, set_IsHoldingTorch, app::PlayerUberStateHoldables* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00F3A3C0, bool, get_IsTorchLit, app::PlayerUberStateHoldables* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F3A3D0, void, set_IsTorchLit, app::PlayerUberStateHoldables* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00417920, int64_t, get_Size, app::PlayerUberStateHoldables* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F3A430, void, ctor, app::PlayerUberStateHoldables* this_ptr, app::Action* set_dirty_callback)
    IL2CPP_REGISTER_METHOD(0x00F3A610, void, OnGui, app::PlayerUberStateHoldables* this_ptr, app::NavigableOnGUI* gui)
    IL2CPP_REGISTER_METHOD(
        0x00F3A7D0,
        void,
        Save,
        app::PlayerUberStateHoldables* this_ptr,
        app::UberStateArchive* archive,
        app::PlayerUberStateHoldables* holdables
    )
    IL2CPP_REGISTER_METHOD(0x00F3A810, void, Load, app::PlayerUberStateHoldables* this_ptr, app::UberStateArchive* archive, int32_t store_version)
    IL2CPP_REGISTER_METHOD(0x00F3A840, void, OnHoldingTorchStateChanged, app::PlayerUberStateHoldables* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F3A840, void, OnTorchLitStateChanged, app::PlayerUberStateHoldables* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F3A850, void, RunSetDirtyCallback, app::PlayerUberStateHoldables* this_ptr)
} // namespace app::classes::Moon::uberSerializationWisp::PlayerUberStateHoldables
