#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/MoonReference_1_AnimationPostprocess_.h>
#include <Modloader/app/structs/AnimationPostprocess.h>
#include <Modloader/app/structs/IMoonResolverContext.h>

namespace app::classes::Moon::MoonReference_1_AnimationPostprocess_ {
    IL2CPP_REGISTER_METHOD(0x027214E0, bool, TryResolve, (app::MoonReference_1_AnimationPostprocess_ * this_ptr, app::AnimationPostprocess** value, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHODINFO(0x0475DEE8, MoonReference_1_AnimationPostprocess__TryResolve__MethodInfo)
} // namespace app::classes::Moon::MoonReference_1_AnimationPostprocess_
