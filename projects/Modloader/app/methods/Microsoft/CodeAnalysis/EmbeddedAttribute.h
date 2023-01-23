#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/EmbeddedAttribute.h>

namespace app::classes::Microsoft::CodeAnalysis::EmbeddedAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::EmbeddedAttribute * this_ptr))
}
