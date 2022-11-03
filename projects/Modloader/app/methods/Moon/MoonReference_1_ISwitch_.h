#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::MoonReference_1_ISwitch_ {
    IL2CPP_REGISTER_METHOD(0x027216E0, bool, CanResolve, (app::MoonReference_1_ISwitch_ * this_ptr, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHODINFO(0x0470C3C0, MoonReference_1_ISwitch__CanResolve__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02720AC0, app::ISwitch*, Resolve, (app::MoonReference_1_ISwitch_ * this_ptr, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHODINFO(0x04712F60, MoonReference_1_ISwitch__Resolve__MethodInfo)
} // namespace app::classes::Moon::MoonReference_1_ISwitch_
