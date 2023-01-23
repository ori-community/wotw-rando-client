#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/VerletBody.h>

namespace app::classes::Moon::VerletBody {
    IL2CPP_REGISTER_METHOD(0x02125B80, void, Update, (app::VerletBody * this_ptr, float dt))
    IL2CPP_REGISTER_METHOD(0x02125FF0, void, Clear, (app::VerletBody * this_ptr))
    IL2CPP_REGISTER_METHOD(0x021260D0, void, ctor, (app::VerletBody * this_ptr))
} // namespace app::classes::Moon::VerletBody
