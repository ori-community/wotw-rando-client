#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CatAndMouseRoomAController.h>

namespace app::classes::CatAndMouseRoomAController {
    IL2CPP_REGISTER_METHOD(0x010288A0, void, Start, app::CatAndMouseRoomAController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01028AD0, void, OnDestroy, app::CatAndMouseRoomAController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01028C70, void, OnRestoreCheckpoint, app::CatAndMouseRoomAController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01028E10, void, Update, app::CatAndMouseRoomAController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01028E90, void, Attack, app::CatAndMouseRoomAController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01029670, void, Escaped, app::CatAndMouseRoomAController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01029920, void, Kill, app::CatAndMouseRoomAController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Away, app::CatAndMouseRoomAController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01029CC0, void, ctor, app::CatAndMouseRoomAController* this_ptr)
} // namespace app::classes::CatAndMouseRoomAController
