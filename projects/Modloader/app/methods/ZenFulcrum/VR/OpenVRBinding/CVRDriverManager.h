#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/CVRDriverManager.h>
#include <Modloader/app/structs/StringBuilder.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::CVRDriverManager {
    IL2CPP_REGISTER_METHOD(0x016785A0, void, ctor, (app::CVRDriverManager * this_ptr, void* p_interface))
    IL2CPP_REGISTER_METHOD(0x016773B0, uint32_t, GetDriverCount, (app::CVRDriverManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016786C0, uint32_t, GetDriverName, (app::CVRDriverManager * this_ptr, uint32_t n_driver, app::StringBuilder* pch_value, uint32_t un_buffer_size))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::CVRDriverManager
