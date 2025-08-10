#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CrossSceneDependencyData.h>

namespace app::classes::Moon::CrossSceneDependencyData {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::CrossSceneDependencyData* this_ptr)
}
