#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::LoadFirstBuildSceneAction {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Start, (app::LoadFirstBuildSceneAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FB3E70, void, Perform, (app::LoadFirstBuildSceneAction * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x00FB4020, app::String *, GetNiceName, (app::LoadFirstBuildSceneAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FB4110, void, ctor, (app::LoadFirstBuildSceneAction * this_ptr))
}
