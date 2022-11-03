#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::RigidbodySolverIterationsModifier {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Awake, (app::RigidbodySolverIterationsModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01352630, void, ApplyIterations, (app::RigidbodySolverIterationsModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013527E0, void, ctor, (app::RigidbodySolverIterationsModifier * this_ptr))
} // namespace app::classes::RigidbodySolverIterationsModifier
