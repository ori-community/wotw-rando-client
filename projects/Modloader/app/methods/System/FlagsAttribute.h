#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/FlagsAttribute.h>

namespace app::classes::System::FlagsAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::FlagsAttribute * this_ptr))
}
