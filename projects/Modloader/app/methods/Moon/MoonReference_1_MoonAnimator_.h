#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::MoonReference_1_MoonAnimator_ {
    IL2CPP_REGISTER_METHOD(0x02720EB0, app::MoonAnimator*, SafeResolve, (app::MoonReference_1_MoonAnimator_ * this_ptr, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHODINFO(0x04791BC0, MoonReference_1_MoonAnimator__SafeResolve__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x027216E0, bool, CanResolve, (app::MoonReference_1_MoonAnimator_ * this_ptr, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHODINFO(0x047820F0, MoonReference_1_MoonAnimator__CanResolve__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02720AC0, app::MoonAnimator*, Resolve, (app::MoonReference_1_MoonAnimator_ * this_ptr, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHODINFO(0x0476CF30, MoonReference_1_MoonAnimator__Resolve__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x027206E0, void, ctor, (app::MoonReference_1_MoonAnimator_ * this_ptr, app::MoonReference_1_MoonAnimator_* moon_ref))
    IL2CPP_REGISTER_METHODINFO(0x0470DED8, MoonReference_1_MoonAnimator___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x027214E0, bool, TryResolve, (app::MoonReference_1_MoonAnimator_ * this_ptr, app::MoonAnimator** value, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHODINFO(0x0472AED0, MoonReference_1_MoonAnimator__TryResolve__MethodInfo)
} // namespace app::classes::Moon::MoonReference_1_MoonAnimator_
