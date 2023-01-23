#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/CustomShaderModifier.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::CustomShaderModifier {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::CustomShaderModifier * this_ptr, app::String* name))
}
