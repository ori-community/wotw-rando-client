#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::EndGameTrigger {
    IL2CPP_REGISTER_METHOD(0x00BFD600, void, OnValidate, (app::EndGameTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BFD6E0, void, Awake, (app::EndGameTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BFD8F0, void, OnDestroy, (app::EndGameTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BFDAD0, void, CallEndGame, (app::EndGameTrigger * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047057A8, EndGameTrigger_CallEndGame__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::EndGameTrigger * this_ptr))
} // namespace app::classes::EndGameTrigger
