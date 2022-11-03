#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::XboxOne {
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_Ready, ())
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ControllerReady, ())
    IL2CPP_REGISTER_METHOD(0x00596FA0, uint32_t, get_TitleId, ())
    IL2CPP_REGISTER_METHODINFO(0x047452F8, XboxOne_get_TitleId__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, Help, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ErrorHelp, (app::String * context, uint32_t error_i_d))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::XboxOne * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, ())
} // namespace app::classes::XboxOne
