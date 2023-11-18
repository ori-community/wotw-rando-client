#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CatAndMouseRoomTimerController.h>

namespace app::classes::CatAndMouseRoomTimerController {
    IL2CPP_REGISTER_METHOD(0x003FF790, bool, get_Active, (app::CatAndMouseRoomTimerController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0102D320, float, get_TimeNormalized, (app::CatAndMouseRoomTimerController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005D8A80, bool, get_IsSuspended, (app::CatAndMouseRoomTimerController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006DC040, void, set_IsSuspended, (app::CatAndMouseRoomTimerController * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x0102D340, void, Start, (app::CatAndMouseRoomTimerController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0102D4E0, void, OnDestroy, (app::CatAndMouseRoomTimerController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0102D690, void, OnRestoreCheckpoint, (app::CatAndMouseRoomTimerController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0102D8D0, void, FixedUpdate, (app::CatAndMouseRoomTimerController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0102DBA0, void, Enter, (app::CatAndMouseRoomTimerController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0102DD10, void, Exit, (app::CatAndMouseRoomTimerController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0102E020, void, ctor, (app::CatAndMouseRoomTimerController * this_ptr))
} // namespace app::classes::CatAndMouseRoomTimerController
