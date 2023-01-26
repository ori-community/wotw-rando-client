#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TintModifier.h>

namespace app::classes::TintModifier {
    IL2CPP_REGISTER_METHOD(0x00AF7180, void, ApplyMultipliers, (app::TintModifier * this_ptr, float strength, float speed))
    IL2CPP_REGISTER_METHOD(0x00AF71C0, void, SetProperties, (app::TintModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AF7280, void, ctor, (app::TintModifier * this_ptr))
} // namespace app::classes::TintModifier
