#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::SeinLeached {
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsBlindForest, (app::SeinLeached * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005D06C0, app::PlatformMovement*, get_PlatformMovement, (app::SeinLeached * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01021A60, void, OnSetReferenceToSein, (app::SeinLeached * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01021B40, void, OnEnter, (app::SeinLeached * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01021B70, void, OnExit, (app::SeinLeached * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008B88D0, void, Serialize, (app::SeinLeached * this_ptr, app::Archive* ar))
    IL2CPP_REGISTER_METHOD(0x01021BA0, void, UpdateCharacterState, (app::SeinLeached * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005C9550, void, ctor, (app::SeinLeached * this_ptr))
} // namespace app::classes::SeinLeached
