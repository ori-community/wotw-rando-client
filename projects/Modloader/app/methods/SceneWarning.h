#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SceneWarning.h>

namespace app::classes::SceneWarning {
    IL2CPP_REGISTER_METHOD(0x00BC17D0, void, Start, (app::SceneWarning * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04744840, SceneWarning_Start__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00BC18B0, void, OnDrawGizmos, (app::SceneWarning * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04717518, SceneWarning_OnDrawGizmos__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::SceneWarning * this_ptr))
} // namespace app::classes::SceneWarning
