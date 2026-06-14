#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CustomShaderBlock.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::CustomShaderBlock {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, app::CustomShaderBlock* this_ptr, app::String* name)
}
