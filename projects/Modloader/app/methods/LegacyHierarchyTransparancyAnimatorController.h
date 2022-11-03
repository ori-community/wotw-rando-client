#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::LegacyHierarchyTransparancyAnimatorController {
    IL2CPP_REGISTER_METHOD(0x00A283D0, void, Start, (app::LegacyHierarchyTransparancyAnimatorController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnAnimationEnd, (app::LegacyHierarchyTransparancyAnimatorController * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0478F970, LegacyHierarchyTransparancyAnimatorController_OnAnimationEnd__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00A286D0, void, OnEnable, (app::LegacyHierarchyTransparancyAnimatorController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A286E0, void, RestartAnimators, (app::LegacyHierarchyTransparancyAnimatorController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A28830, void, ctor, (app::LegacyHierarchyTransparancyAnimatorController * this_ptr))
} // namespace app::classes::LegacyHierarchyTransparancyAnimatorController
