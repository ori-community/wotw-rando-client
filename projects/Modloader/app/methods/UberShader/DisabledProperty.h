#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DisabledProperty.h>

namespace app::classes::UberShader::DisabledProperty {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::DisabledProperty * this_ptr))
}
