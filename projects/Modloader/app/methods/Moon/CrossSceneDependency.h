#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/CrossSceneDependency.h>

namespace app::classes::Moon::CrossSceneDependency {
    IL2CPP_REGISTER_METHOD(0x00CCF090, void, Awake, (app::CrossSceneDependency * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CCF3A0, void, OnDestroy, (app::CrossSceneDependency * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006771B0, void, ctor, (app::CrossSceneDependency * this_ptr))
} // namespace app::classes::Moon::CrossSceneDependency
