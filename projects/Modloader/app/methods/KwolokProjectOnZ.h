#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/KwolokProjectOnZ.h>

namespace app::classes::KwolokProjectOnZ {
    IL2CPP_REGISTER_METHOD(0x012FCD90, void, Update, app::KwolokProjectOnZ* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00AB5740, void, ctor, app::KwolokProjectOnZ* this_ptr)
} // namespace app::classes::KwolokProjectOnZ
