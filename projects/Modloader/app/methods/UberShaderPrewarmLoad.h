#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::UberShaderPrewarmLoad {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnGameAwake, (app::UberShaderPrewarmLoad * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Update, (app::UberShaderPrewarmLoad * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::UberShaderPrewarmLoad * this_ptr))
} // namespace app::classes::UberShaderPrewarmLoad
