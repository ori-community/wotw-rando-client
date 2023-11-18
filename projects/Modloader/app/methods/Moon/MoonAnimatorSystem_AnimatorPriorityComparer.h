#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MoonAnimatorSystem_AnimatorPriorityComparer.h>
#include <Modloader/app/structs/MoonAnimator.h>

namespace app::classes::Moon::MoonAnimatorSystem_AnimatorPriorityComparer {
    IL2CPP_REGISTER_METHOD(0x0211F4A0, int32_t, Compare, (app::MoonAnimatorSystem_AnimatorPriorityComparer * this_ptr, app::MoonAnimator* lhs, app::MoonAnimator* rhs))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::MoonAnimatorSystem_AnimatorPriorityComparer * this_ptr))
} // namespace app::classes::Moon::MoonAnimatorSystem_AnimatorPriorityComparer
