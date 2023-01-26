#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UberShaderOrderAttribute.h>
#include <Modloader/app/structs/UberShaderOrder__Enum.h>

namespace app::classes::UberShaderOrderAttribute {
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, ctor, (app::UberShaderOrderAttribute * this_ptr, app::UberShaderOrder__Enum queue))
}
