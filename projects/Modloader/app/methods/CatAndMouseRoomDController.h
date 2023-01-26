#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CatAndMouseRoomDController.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>

namespace app::classes::CatAndMouseRoomDController {
    IL2CPP_REGISTER_METHOD(0x0102B6C0, void, Awake, (app::CatAndMouseRoomDController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0102B970, void, Start, (app::CatAndMouseRoomDController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0102BA30, void, OnDestroy, (app::CatAndMouseRoomDController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0102BC00, void, OnRestoreCheckpoint, (app::CatAndMouseRoomDController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0102BD30, void, FixedUpdate, (app::CatAndMouseRoomDController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0102C3D0, void, StartSequence, (app::CatAndMouseRoomDController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0102C710, void, Attack, (app::CatAndMouseRoomDController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0102C720, void, Escaped, (app::CatAndMouseRoomDController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0102C730, void, Kill, (app::CatAndMouseRoomDController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FCCE80, bool, get_IsSuspended, (app::CatAndMouseRoomDController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FCCE90, void, set_IsSuspended, (app::CatAndMouseRoomDController * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x0063D090, app::SuspendableMask__Enum, get_Mask, (app::CatAndMouseRoomDController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0102CAD0, void, set_Mask, (app::CatAndMouseRoomDController * this_ptr, app::SuspendableMask__Enum value))
    IL2CPP_REGISTER_METHOD(0x0102CB90, void, ctor, (app::CatAndMouseRoomDController * this_ptr))
} // namespace app::classes::CatAndMouseRoomDController
