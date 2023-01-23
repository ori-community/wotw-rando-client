#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/GenerateAOTDataAttribute.h>

namespace app::classes::Moon::GenerateAOTDataAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::GenerateAOTDataAttribute * this_ptr))
}
