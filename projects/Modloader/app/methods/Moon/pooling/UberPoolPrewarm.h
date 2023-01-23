#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/UberPoolPrewarm.h>

namespace app::classes::Moon::pooling::UberPoolPrewarm {
    IL2CPP_REGISTER_METHOD(0x00F30E40, void, ctor, (app::UberPoolPrewarm * this_ptr))
}
