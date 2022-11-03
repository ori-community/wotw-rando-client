#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::MoonReference_1_ILever_ {
    IL2CPP_REGISTER_METHOD(0x027216E0, bool, CanResolve, (app::MoonReference_1_ILever_ * this_ptr, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHODINFO(0x04750348, MoonReference_1_ILever__CanResolve__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02720AC0, app::ILever*, Resolve, (app::MoonReference_1_ILever_ * this_ptr, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHODINFO(0x04724EA0, MoonReference_1_ILever__Resolve__MethodInfo)
} // namespace app::classes::Moon::MoonReference_1_ILever_
