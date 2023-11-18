#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UberDelegate_1_SceneRoot_.h>
#include <Modloader/app/structs/Action_1_SceneRoot_.h>
#include <Modloader/app/structs/SceneRoot.h>
#include <Modloader/app/structs/StringBuilder.h>

namespace app::classes::UberDelegate_1_SceneRoot_ {
    IL2CPP_REGISTER_METHOD(0x0225C400, void, Add, (app::UberDelegate_1_SceneRoot_ * this_ptr, app::Action_1_SceneRoot_* act))
    IL2CPP_REGISTER_METHOD(0x0225C9B0, void, Remove, (app::UberDelegate_1_SceneRoot_ * this_ptr, app::Action_1_SceneRoot_* act))
    IL2CPP_REGISTER_METHOD(0x0225C550, void, Print, (app::UberDelegate_1_SceneRoot_ * this_ptr, app::StringBuilder* sb))
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, (app::UberDelegate_1_SceneRoot_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0225C810, void, Call, (app::UberDelegate_1_SceneRoot_ * this_ptr, app::SceneRoot* act))
} // namespace app::classes::UberDelegate_1_SceneRoot_
