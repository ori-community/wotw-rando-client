#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Poser.h>

namespace app::classes::RootMotion::FinalIK::Poser {
    IL2CPP_REGISTER_METHOD(0x00CC2AF0, void, Start, (app::Poser * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A198D0, void, Update, (app::Poser * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02064DB0, void, ctor, (app::Poser * this_ptr))
} // namespace app::classes::RootMotion::FinalIK::Poser
