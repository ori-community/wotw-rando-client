#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/UberShaderCategoryAttribute.h>
#include <Modloader/app/structs/UberShaderCategory__Enum.h>

namespace app::classes::UberShaderCategoryAttribute {
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, ctor, (app::UberShaderCategoryAttribute * this_ptr, app::UberShaderCategory__Enum category))
}
