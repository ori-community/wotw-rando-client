#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GodRayMaskModifier.h>

namespace app::classes::GodRayMaskModifier {
    IL2CPP_REGISTER_METHOD(0x00800520, void, SetProperties, (app::GodRayMaskModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00800610, void, ctor, (app::GodRayMaskModifier * this_ptr))
} // namespace app::classes::GodRayMaskModifier
