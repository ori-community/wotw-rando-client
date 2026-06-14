#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/OnScreenPositions.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::OnScreenPositions {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Start, app::OnScreenPositions* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006127F0, app::Vector3, get_TopLeft, )
    IL2CPP_REGISTER_METHOD(0x00612A40, app::Vector3, get_TopCenter, )
    IL2CPP_REGISTER_METHOD(0x00612E70, app::Vector3, get_TopRight, )
    IL2CPP_REGISTER_METHOD(0x006130C0, app::Vector3, get_MiddleLeft, )
    IL2CPP_REGISTER_METHOD(0x00613320, app::Vector3, get_MiddleCenter, )
    IL2CPP_REGISTER_METHOD(0x00613690, app::Vector3, get_MiddleRight, )
    IL2CPP_REGISTER_METHOD(0x006138F0, app::Vector3, get_BottomLeft, )
    IL2CPP_REGISTER_METHOD(0x00613B50, app::Vector3, get_BottomCenter, )
    IL2CPP_REGISTER_METHOD(0x00613EC0, app::Vector3, get_BottomRight, )
    IL2CPP_REGISTER_METHOD(0x00614120, void, ctor, app::OnScreenPositions* this_ptr)
} // namespace app::classes::OnScreenPositions
