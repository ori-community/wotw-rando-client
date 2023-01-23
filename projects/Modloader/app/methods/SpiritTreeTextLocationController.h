#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SpiritTreeTextLocationController.h>

namespace app::classes::SpiritTreeTextLocationController {
    IL2CPP_REGISTER_METHOD(0x00D7BED0, void, Start, (app::SpiritTreeTextLocationController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D7BFB0, void, Update, (app::SpiritTreeTextLocationController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D7C3A0, void, StartScrolling, (app::SpiritTreeTextLocationController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D7C4D0, void, ctor, (app::SpiritTreeTextLocationController * this_ptr))
} // namespace app::classes::SpiritTreeTextLocationController
