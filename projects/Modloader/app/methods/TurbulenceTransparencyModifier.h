#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TurbulenceTransparencyModifier.h>

namespace app::classes::TurbulenceTransparencyModifier {
    IL2CPP_REGISTER_METHOD(0x013D7570, void, Randomize, app::TurbulenceTransparencyModifier* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B14990, void, ApplyMultipliers, app::TurbulenceTransparencyModifier* this_ptr, float strength, float speed)
    IL2CPP_REGISTER_METHOD(0x013D76B0, void, SetProperties, app::TurbulenceTransparencyModifier* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013D77A0, void, ctor, app::TurbulenceTransparencyModifier* this_ptr)
} // namespace app::classes::TurbulenceTransparencyModifier
