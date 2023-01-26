#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TransparancyAnimatorModifier.h>

namespace app::classes::TransparancyAnimatorModifier {
    IL2CPP_REGISTER_METHOD(0x00B0BEA0, void, ApplyMultipliers, (app::TransparancyAnimatorModifier * this_ptr, float strength, float speed))
    IL2CPP_REGISTER_METHOD(0x00B0BED0, void, SetProperties, (app::TransparancyAnimatorModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B0BF90, void, ctor, (app::TransparancyAnimatorModifier * this_ptr))
} // namespace app::classes::TransparancyAnimatorModifier
