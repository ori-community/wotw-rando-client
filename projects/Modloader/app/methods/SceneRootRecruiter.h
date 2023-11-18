#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SceneRootRecruiter.h>

namespace app::classes::SceneRootRecruiter {
    IL2CPP_REGISTER_METHOD(0x00BB9E50, void, Awake, (app::SceneRootRecruiter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::SceneRootRecruiter * this_ptr))
} // namespace app::classes::SceneRootRecruiter
