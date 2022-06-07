#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Microsoft::Xbox::Services::Xal::DeviceInfo {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String *, get_DeviceType, (app::DeviceInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_DeviceType, (app::DeviceInfo * this_ptr, app::String * value))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String *, get_OsVersion, (app::DeviceInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB940, void, set_OsVersion, (app::DeviceInfo * this_ptr, app::String * value))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::String *, get_DeviceId, (app::DeviceInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB960, void, set_DeviceId, (app::DeviceInfo * this_ptr, app::String * value))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::DeviceInfo * this_ptr))
}
