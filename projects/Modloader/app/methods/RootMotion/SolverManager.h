#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SolverManager.h>
#include <Modloader/app/structs/Transform.h>

namespace app::classes::RootMotion::SolverManager {
    IL2CPP_REGISTER_METHOD(0x02A2D7E0, void, Disable, (app::SolverManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, InitiateSolver, (app::SolverManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateSolver, (app::SolverManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, FixTransforms, (app::SolverManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A2D930, void, OnDisable, (app::SolverManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A2D980, void, Start, (app::SolverManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A2D9D0, bool, get_animatePhysics, (app::SolverManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A2D980, void, Initiate, (app::SolverManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A2DB80, void, Update, (app::SolverManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A2DBD0, void, FindAnimatorRecursive, (app::SolverManager * this_ptr, app::Transform* t, bool find_in_children))
    IL2CPP_REGISTER_METHOD(0x02A2DDC0, bool, get_isAnimated, (app::SolverManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A2DEB0, void, FixedUpdate, (app::SolverManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A2DF00, void, LateUpdate, (app::SolverManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A2DF90, void, UpdateSolverExternal, (app::SolverManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A2E090, void, ManualSolverUpdate, (app::SolverManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AB5740, void, ctor, (app::SolverManager * this_ptr))
} // namespace app::classes::RootMotion::SolverManager
