#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/OptimizationCache_c.h>
#include <Modloader/app/structs/UberShaderComponent.h>

namespace app::classes::Moon::ArtOptimization::OptimizationCache___c {
    IL2CPP_REGISTER_METHOD(0x0134F340, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::OptimizationCache_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0134F480, bool, _Initialize_b__9_0, (app::OptimizationCache_c * this_ptr, app::UberShaderComponent* us))
    IL2CPP_REGISTER_METHODINFO(0x047328B0, OptimizationCache_c__Initialize_b__9_0__MethodInfo)
} // namespace app::classes::Moon::ArtOptimization::OptimizationCache___c
