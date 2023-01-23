#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/DistortExtraModifier.h>

namespace app::classes::DistortExtraModifier {
    IL2CPP_REGISTER_METHOD(0x00B99C50, void, SetProperties, (app::DistortExtraModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B99D80, void, ctor, (app::DistortExtraModifier * this_ptr))
} // namespace app::classes::DistortExtraModifier
