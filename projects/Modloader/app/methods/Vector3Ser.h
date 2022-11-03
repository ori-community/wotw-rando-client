#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Vector3Ser {
    IL2CPP_REGISTER_METHOD(0x00CFCF00, void, ctor_1, (app::Vector3Ser * this_ptr, float x, float y, float z))
    IL2CPP_REGISTER_METHOD(0x0071B9B0, void, ctor_2, (app::Vector3Ser * this_ptr, app::Vector3 vector3))
    IL2CPP_REGISTER_METHOD(0x013BB130, app::Vector3, ToVector3, (app::Vector3Ser * this_ptr))
} // namespace app::classes::Vector3Ser
