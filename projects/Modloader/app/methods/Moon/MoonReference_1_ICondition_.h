#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::MoonReference_1_ICondition_ {
    IL2CPP_REGISTER_METHOD(0x02720EB0, app::ICondition*, SafeResolve, (app::MoonReference_1_ICondition_ * this_ptr, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHODINFO(0x04708E70, MoonReference_1_ICondition__SafeResolve__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x027216E0, bool, CanResolve, (app::MoonReference_1_ICondition_ * this_ptr, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHODINFO(0x0473BDB8, MoonReference_1_ICondition__CanResolve__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02720AC0, app::ICondition*, Resolve, (app::MoonReference_1_ICondition_ * this_ptr, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHODINFO(0x04741080, MoonReference_1_ICondition__Resolve__MethodInfo)
} // namespace app::classes::Moon::MoonReference_1_ICondition_
