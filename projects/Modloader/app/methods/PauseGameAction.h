#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PauseGameAction.h>
#include <Modloader/app/structs/Archive.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::PauseGameAction {
    IL2CPP_REGISTER_METHOD(0x004494A0, void, Perform, (app::PauseGameAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x004494B0, void, Stop, (app::PauseGameAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FCB00, bool, get_IsPerforming, (app::PauseGameAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004494C0, void, OnDisable, (app::PauseGameAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004494D0, void, Serialize, (app::PauseGameAction * this_ptr, app::Archive* ar))
    IL2CPP_REGISTER_METHOD(0x00449500, void, ResumeGame, (app::PauseGameAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004497B0, void, PauseGame, (app::PauseGameAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00449EA0, float, get_Duration, (app::PauseGameAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00449EB0, void, set_Duration, (app::PauseGameAction * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00449EC0, void, FixedUpdate, (app::PauseGameAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00449F50, void, ctor, (app::PauseGameAction * this_ptr))
} // namespace app::classes::PauseGameAction
