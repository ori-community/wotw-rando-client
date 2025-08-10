#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IUberStateGroup.h>
#include <Modloader/app/structs/SceneBasedUberState.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/UberID.h>

namespace app::classes::Moon::uberSerializationWisp::SceneBasedUberState {
    IL2CPP_REGISTER_METHOD(0x00F44E70, app::IUberStateGroup*, get_UberStateGroup, app::SceneBasedUberState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F44F90, app::UberID*, get_GroupID, app::SceneBasedUberState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F45120, app::UberID*, get_StateID, app::SceneBasedUberState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BAB250, app::String*, get_Name, app::SceneBasedUberState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::SceneBasedUberState* this_ptr)
} // namespace app::classes::Moon::uberSerializationWisp::SceneBasedUberState
