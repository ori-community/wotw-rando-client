#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EmissivityModifier.h>

namespace app::classes::EmissivityModifier {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ApplyMultipliers, (app::EmissivityModifier * this_ptr, float strength, float speed))
    IL2CPP_REGISTER_METHOD(0x00BFBD70, void, SetProperties, (app::EmissivityModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BFBED0, void, ctor, (app::EmissivityModifier * this_ptr))
} // namespace app::classes::EmissivityModifier
