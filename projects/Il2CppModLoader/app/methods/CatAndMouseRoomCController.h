#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::CatAndMouseRoomCController {
    IL2CPP_REGISTER_METHOD(0x01029CE0, void, Awake, (app::CatAndMouseRoomCController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01029F90, void, Start, (app::CatAndMouseRoomCController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0102A130, void, OnDestroy, (app::CatAndMouseRoomCController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0102A300, void, OnRestoreCheckpoint, (app::CatAndMouseRoomCController * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0473E740, CatAndMouseRoomCController_OnRestoreCheckpoint__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0102A690, void, FixedUpdate, (app::CatAndMouseRoomCController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0102AE80, void, StartSequence, (app::CatAndMouseRoomCController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0102B210, void, Attack, (app::CatAndMouseRoomCController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0102B220, void, Escaped, (app::CatAndMouseRoomCController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0102B230, void, Kill, (app::CatAndMouseRoomCController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FD650, bool, get_IsSuspended, (app::CatAndMouseRoomCController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00800850, void, set_IsSuspended, (app::CatAndMouseRoomCController * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x0057A5A0, app::SuspendableMask__Enum, get_Mask, (app::CatAndMouseRoomCController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0102B5D0, void, set_Mask, (app::CatAndMouseRoomCController * this_ptr, app::SuspendableMask__Enum value))
    IL2CPP_REGISTER_METHOD(0x0102B690, void, ctor, (app::CatAndMouseRoomCController * this_ptr))
}
