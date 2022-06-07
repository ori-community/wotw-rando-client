#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::SequencePlatformAction {
    IL2CPP_REGISTER_METHOD(0x00AB7000, void, Perform, (app::SequencePlatformAction * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x00AB71B0, void, ctor, (app::SequencePlatformAction * this_ptr))
}
