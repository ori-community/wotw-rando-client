#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::ConfirmChangingDifficulty {
    IL2CPP_REGISTER_METHOD(0x011E4810, void, Perform, (app::ConfirmChangingDifficulty * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::ConfirmChangingDifficulty * this_ptr))
} // namespace app::classes::ConfirmChangingDifficulty
